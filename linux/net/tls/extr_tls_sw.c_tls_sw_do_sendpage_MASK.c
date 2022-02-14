
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int work; } ;
struct tls_sw_context_tx {TYPE_3__ tx_work; int tx_bitmask; struct tls_rec* open_rec; } ;
struct TYPE_5__ {size_t size; } ;
struct sk_msg {TYPE_2__ sg; } ;
struct tls_rec {scalar_t__ inplace_crypto; struct sk_msg msg_plaintext; } ;
struct tls_prot_info {size_t overhead_size; } ;
struct tls_context {int pending_open_record_frags; struct tls_prot_info prot_info; } ;
struct sock {int sk_err; TYPE_1__* sk_socket; } ;
struct page {int dummy; } ;
struct TYPE_4__ {int flags; } ;


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
 int FUNC_0 (struct sk_msg*,struct sock*,int,unsigned char,size_t*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct sock*) ;
 int FUNC_4 (struct sock*,size_t) ;
 scalar_t__ FUNC_5 (struct sk_msg*) ;
 int FUNC_6 (struct sk_msg*,struct page*,size_t,int) ;
 int FUNC_7 (struct sock*,int,int) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,long*) ;
 long FUNC_10 (struct sock*,int) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct sock*,size_t) ;
 struct tls_context* FUNC_13 (struct sock*) ;
 struct tls_rec* FUNC_14 (struct sock*) ;
 struct tls_sw_context_tx* FUNC_15 (struct tls_context*) ;
 int FUNC_16 (struct sock*,size_t) ;
 int FUNC_17 (struct sock*,int) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_12, struct page *VAR_13,
         int VAR_14, size_t VAR_15, int VAR_16)
{
 long VAR_17 = FUNC_10(VAR_12, VAR_16 & VAR_5);
 struct tls_context *VAR_18 = FUNC_13(VAR_12);
 struct tls_sw_context_tx *VAR_19 = FUNC_15(VAR_18);
 struct tls_prot_info *VAR_20 = &VAR_18->prot_info;
 unsigned char VAR_21 = VAR_11;
 struct sk_msg *VAR_22;
 struct tls_rec *VAR_23;
 int VAR_24 = 0;
 size_t VAR_25 = 0;
 bool VAR_26;
 int VAR_27;
 int VAR_28 = 0;
 bool VAR_29;

 VAR_29 = !(VAR_16 & (VAR_6 | VAR_7));
 FUNC_3(VAR_8, VAR_12);


 while (VAR_15 > 0) {
  size_t VAR_30, VAR_31;

  if (VAR_12->sk_err) {
   VAR_28 = -VAR_12->sk_err;
   goto sendpage_end;
  }

  if (VAR_19->open_rec)
   VAR_23 = VAR_19->open_rec;
  else
   VAR_23 = VAR_19->open_rec = FUNC_14(VAR_12);
  if (!VAR_23) {
   VAR_28 = -VAR_3;
   goto sendpage_end;
  }

  VAR_22 = &VAR_23->msg_plaintext;

  VAR_26 = 0;
  VAR_27 = VAR_10 - VAR_22->sg.size;
  VAR_30 = VAR_15;
  if (VAR_30 >= VAR_27) {
   VAR_30 = VAR_27;
   VAR_26 = 1;
  }

  VAR_31 = VAR_22->sg.size + VAR_30 + VAR_20->overhead_size;

  if (!FUNC_8(VAR_12))
   goto wait_for_sndbuf;
alloc_payload:
  VAR_28 = FUNC_12(VAR_12, VAR_31);
  if (VAR_28) {
   if (VAR_28 != -VAR_4)
    goto wait_for_memory;





   VAR_30 -= VAR_31 - VAR_22->sg.size;
   VAR_26 = 1;
  }

  FUNC_6(VAR_22, VAR_13, VAR_30, VAR_14);
  FUNC_4(VAR_12, VAR_30);

  VAR_14 += VAR_30;
  VAR_15 -= VAR_30;
  VAR_25 += VAR_30;

  VAR_18->pending_open_record_frags = 1;
  if (VAR_26 || VAR_29 || FUNC_5(VAR_22)) {
   VAR_23->inplace_crypto = 0;
   VAR_28 = FUNC_0(VAR_22, VAR_12, VAR_26,
        VAR_21, &VAR_25, VAR_16);
   if (VAR_28) {
    if (VAR_28 == -VAR_2)
     VAR_24++;
    else if (VAR_28 == -VAR_3)
     goto wait_for_memory;
    else if (VAR_28 != -VAR_1) {
     if (VAR_28 == -VAR_4)
      VAR_28 = 0;
     goto sendpage_end;
    }
   }
  }
  continue;
wait_for_sndbuf:
  FUNC_2(VAR_9, &VAR_12->sk_socket->flags);
wait_for_memory:
  VAR_28 = FUNC_9(VAR_12, &VAR_17);
  if (VAR_28) {
   FUNC_16(VAR_12, VAR_22->sg.size);
   goto sendpage_end;
  }

  goto alloc_payload;
 }

 if (VAR_24) {

  if (FUNC_11(VAR_0, &VAR_19->tx_bitmask)) {
   FUNC_1(&VAR_19->tx_work.work);
   FUNC_17(VAR_12, VAR_16);
  }
 }
sendpage_end:
 VAR_28 = FUNC_7(VAR_12, VAR_16, VAR_28);
 return VAR_25 ? VAR_25 : VAR_28;
}
