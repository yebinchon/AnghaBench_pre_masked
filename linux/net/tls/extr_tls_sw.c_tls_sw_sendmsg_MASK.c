
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int work; } ;
struct TYPE_8__ {int err; int completion; } ;
struct tls_sw_context_tx {int async_capable; TYPE_1__ tx_work; int tx_bitmask; TYPE_4__ async_wait; int async_notify; int encrypt_pending; struct tls_rec* open_rec; } ;
struct TYPE_6__ {int size; int end; } ;
struct sk_msg {TYPE_2__ sg; } ;
struct tls_rec {scalar_t__ inplace_crypto; struct sk_msg msg_encrypted; struct sk_msg msg_plaintext; } ;
struct tls_prot_info {size_t overhead_size; } ;
struct tls_context {int pending_open_record_frags; int tx_lock; struct tls_prot_info prot_info; } ;
struct sock {int sk_err; TYPE_3__* sk_socket; } ;
struct msghdr {int msg_flags; int msg_iter; int msg_controllen; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sk_msg*,struct sock*,int,unsigned char,size_t*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct sock*) ;
 size_t FUNC_8 (struct msghdr*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct sock*,int *,struct sk_msg*,size_t) ;
 int FUNC_15 (struct sk_msg*,int ) ;
 int FUNC_16 (struct sk_msg*,int ) ;
 int FUNC_17 (struct sock*,struct sk_msg*,int) ;
 int FUNC_18 (struct sock*,int *,struct sk_msg*,size_t) ;
 int FUNC_19 (struct sock*,int,int) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,long*) ;
 int FUNC_22 (int ,int) ;
 long FUNC_23 (struct sock*,int) ;
 scalar_t__ FUNC_24 (int ,int *) ;
 int FUNC_25 (struct sock*,int) ;
 int FUNC_26 (struct sock*,int) ;
 struct tls_context* FUNC_27 (struct sock*) ;
 struct tls_rec* FUNC_28 (struct sock*) ;
 int FUNC_29 (struct sock*,struct msghdr*,unsigned char*) ;
 struct tls_sw_context_tx* FUNC_30 (struct tls_context*) ;
 int FUNC_31 (struct sock*,int) ;
 int FUNC_32 (struct sock*,int) ;
 scalar_t__ FUNC_33 (int ) ;

int FUNC_34(struct sock *VAR_12, struct msghdr *VAR_13, size_t VAR_14)
{
 long VAR_15 = FUNC_23(VAR_12, VAR_13->msg_flags & VAR_6);
 struct tls_context *VAR_16 = FUNC_27(VAR_12);
 struct tls_prot_info *VAR_17 = &VAR_16->prot_info;
 struct tls_sw_context_tx *VAR_18 = FUNC_30(VAR_16);
 bool VAR_19 = VAR_18->async_capable;
 unsigned char VAR_20 = VAR_11;
 bool VAR_21 = FUNC_5(&VAR_13->msg_iter);
 bool VAR_22 = !(VAR_13->msg_flags & VAR_7);
 size_t VAR_23, VAR_24 = 0;
 struct sk_msg *VAR_25, *VAR_26;
 struct tls_rec *VAR_27;
 int VAR_28;
 int VAR_29 = 0;
 bool VAR_30;
 int VAR_31;
 int VAR_32 = 0;
 int VAR_33;
 int VAR_34 = 0;

 if (VAR_13->msg_flags & ~(VAR_7 | VAR_6 | VAR_8))
  return -VAR_5;

 FUNC_9(&VAR_16->tx_lock);
 FUNC_7(VAR_12);

 if (FUNC_33(VAR_13->msg_controllen)) {
  VAR_34 = FUNC_29(VAR_12, VAR_13, &VAR_20);
  if (VAR_34) {
   if (VAR_34 == -VAR_2)
    VAR_29++;
   else if (VAR_34 != -VAR_1)
    goto send_end;
  }
 }

 while (FUNC_8(VAR_13)) {
  if (VAR_12->sk_err) {
   VAR_34 = -VAR_12->sk_err;
   goto send_end;
  }

  if (VAR_18->open_rec)
   VAR_27 = VAR_18->open_rec;
  else
   VAR_27 = VAR_18->open_rec = FUNC_28(VAR_12);
  if (!VAR_27) {
   VAR_34 = -VAR_3;
   goto send_end;
  }

  VAR_25 = &VAR_27->msg_plaintext;
  VAR_26 = &VAR_27->msg_encrypted;

  VAR_33 = VAR_25->sg.size;
  VAR_30 = 0;
  VAR_23 = FUNC_8(VAR_13);
  VAR_31 = VAR_10 - VAR_25->sg.size;
  if (VAR_23 >= VAR_31) {
   VAR_23 = VAR_31;
   VAR_30 = 1;
  }

  VAR_28 = VAR_25->sg.size + VAR_23 +
    VAR_17->overhead_size;

  if (!FUNC_20(VAR_12))
   goto wait_for_sndbuf;

alloc_encrypted:
  VAR_34 = FUNC_25(VAR_12, VAR_28);
  if (VAR_34) {
   if (VAR_34 != -VAR_4)
    goto wait_for_memory;





   VAR_23 -= VAR_28 - VAR_26->sg.size;
   VAR_30 = 1;
  }

  if (!VAR_21 && (VAR_30 || VAR_22) && !VAR_19) {
   u32 VAR_35 = VAR_25->sg.end;

   VAR_34 = FUNC_18(VAR_12, &VAR_13->msg_iter,
       VAR_25, VAR_23);
   if (VAR_34)
    goto fallback_to_reg_send;

   VAR_27->inplace_crypto = 0;

   VAR_32++;
   VAR_24 += VAR_23;

   FUNC_16(VAR_25, VAR_35);
   VAR_34 = FUNC_2(VAR_25, VAR_12, VAR_30,
        VAR_20, &VAR_24,
        VAR_13->msg_flags);
   if (VAR_34) {
    if (VAR_34 == -VAR_2)
     VAR_29++;
    else if (VAR_34 == -VAR_3)
     goto wait_for_memory;
    else if (VAR_34 == -VAR_4)
     goto rollback_iter;
    else if (VAR_34 != -VAR_1)
     goto send_end;
   }
   continue;
rollback_iter:
   VAR_24 -= VAR_23;
   FUNC_15(VAR_25, VAR_35);
   FUNC_6(&VAR_13->msg_iter,
     VAR_25->sg.size - VAR_33);
fallback_to_reg_send:
   FUNC_17(VAR_12, VAR_25, VAR_33);
  }

  VAR_28 = VAR_25->sg.size + VAR_23;

  VAR_34 = FUNC_26(VAR_12, VAR_28);
  if (VAR_34) {
   if (VAR_34 != -VAR_4)
    goto send_end;





   VAR_23 -= VAR_28 - VAR_25->sg.size;
   VAR_30 = 1;
   FUNC_17(VAR_12, VAR_26,
        VAR_25->sg.size + VAR_17->overhead_size);
  }

  if (VAR_23) {
   VAR_34 = FUNC_14(VAR_12, &VAR_13->msg_iter,
             VAR_25, VAR_23);
   if (VAR_34 < 0)
    goto trim_sgl;
  }




  VAR_16->pending_open_record_frags = 1;
  VAR_24 += VAR_23;
  if (VAR_30 || VAR_22) {
   VAR_34 = FUNC_2(VAR_25, VAR_12, VAR_30,
        VAR_20, &VAR_24,
        VAR_13->msg_flags);
   if (VAR_34) {
    if (VAR_34 == -VAR_2)
     VAR_29++;
    else if (VAR_34 == -VAR_3)
     goto wait_for_memory;
    else if (VAR_34 != -VAR_1) {
     if (VAR_34 == -VAR_4)
      VAR_34 = 0;
     goto send_end;
    }
   }
  }

  continue;

wait_for_sndbuf:
  FUNC_13(VAR_9, &VAR_12->sk_socket->flags);
wait_for_memory:
  VAR_34 = FUNC_21(VAR_12, &VAR_15);
  if (VAR_34) {
trim_sgl:
   FUNC_31(VAR_12, VAR_33);
   goto send_end;
  }

  if (VAR_26->sg.size < VAR_28)
   goto alloc_encrypted;
 }

 if (!VAR_29) {
  goto send_end;
 } else if (VAR_32) {

  FUNC_22(VAR_18->async_notify, 1);

  if (FUNC_1(&VAR_18->encrypt_pending))
   FUNC_4(-VAR_2, &VAR_18->async_wait);
  else
   FUNC_11(&VAR_18->async_wait.completion);

  FUNC_0(VAR_18->async_notify, 0);

  if (VAR_18->async_wait.err) {
   VAR_34 = VAR_18->async_wait.err;
   VAR_24 = 0;
  }
 }


 if (FUNC_24(VAR_0, &VAR_18->tx_bitmask)) {
  FUNC_3(&VAR_18->tx_work.work);
  FUNC_32(VAR_12, VAR_13->msg_flags);
 }

send_end:
 VAR_34 = FUNC_19(VAR_12, VAR_13->msg_flags, VAR_34);

 FUNC_12(VAR_12);
 FUNC_10(&VAR_16->tx_lock);
 return VAR_24 ? VAR_24 : VAR_34;
}
