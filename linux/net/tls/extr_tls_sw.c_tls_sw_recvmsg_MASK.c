
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion; } ;
struct tls_sw_context_rx {unsigned char control; int async_capable; int async_notify; TYPE_1__ async_wait; int decrypt_pending; int rx_list; scalar_t__ recv_pkt; } ;
struct tls_prot_info {scalar_t__ version; int overhead_size; } ;
struct tls_msg {unsigned char control; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct strp_msg {size_t full_len; scalar_t__ offset; } ;
struct sock {int dummy; } ;
struct sk_psock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_flags; int msg_iter; } ;
typedef size_t ssize_t ;
typedef int control ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 unsigned char VAR_14 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct sock*,struct sk_psock*,struct msghdr*,size_t,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,TYPE_1__*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int *,int*,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct tls_sw_context_rx*,struct msghdr*,unsigned char*,int*,size_t,size_t,int,int) ;
 int FUNC_8 (struct msghdr*,int ,int ,int,unsigned char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sock*) ;
 struct sk_psock* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,struct sk_psock*) ;
 int FUNC_13 (struct sk_buff*,scalar_t__,struct msghdr*,int) ;
 int FUNC_14 (int *,struct sk_buff*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct sock*,int,size_t) ;
 long FUNC_17 (struct sock*,int) ;
 int FUNC_18 (struct sock*,struct msghdr*,size_t,int ,int ) ;
 struct strp_msg* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sock*,int) ;
 struct tls_context* FUNC_21 (struct sock*) ;
 struct tls_msg* FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sock*,struct sk_buff*,int) ;
 struct tls_sw_context_rx* FUNC_24 (struct tls_context*) ;
 struct sk_buff* FUNC_25 (struct sock*,struct sk_psock*,int,long,int*) ;
 scalar_t__ FUNC_26 (int) ;

int FUNC_27(struct sock *VAR_15,
     struct msghdr *VAR_16,
     size_t VAR_17,
     int VAR_18,
     int VAR_19,
     int *VAR_20)
{
 struct tls_context *VAR_21 = FUNC_21(VAR_15);
 struct tls_sw_context_rx *VAR_22 = FUNC_24(VAR_21);
 struct tls_prot_info *VAR_23 = &VAR_21->prot_info;
 struct sk_psock *VAR_24;
 unsigned char VAR_25 = 0;
 ssize_t VAR_26 = 0;
 struct strp_msg *VAR_27;
 struct tls_msg *VAR_28;
 struct sk_buff *VAR_29;
 ssize_t VAR_30 = 0;
 bool VAR_31 = 0;
 int VAR_32, VAR_33 = 0;
 long VAR_34;
 bool VAR_35 = FUNC_5(&VAR_16->msg_iter);
 bool VAR_36 = VAR_19 & VAR_8;
 int VAR_37 = 0;

 VAR_19 |= VAR_18;

 if (FUNC_26(VAR_19 & VAR_7))
  return FUNC_18(VAR_15, VAR_16, VAR_17, VAR_10, VAR_3);

 VAR_24 = FUNC_11(VAR_15);
 FUNC_6(VAR_15);


 VAR_33 = FUNC_7(VAR_22, VAR_16, &VAR_25, &VAR_31, 0, VAR_17, 0,
         VAR_36);
 if (VAR_33 < 0) {
  FUNC_20(VAR_15, VAR_33);
  goto end;
 } else {
  VAR_30 = VAR_33;
 }

 if (VAR_17 <= VAR_30)
  goto recv_end;

 VAR_32 = FUNC_16(VAR_15, VAR_19 & VAR_9, VAR_17);
 VAR_17 = VAR_17 - VAR_30;
 VAR_34 = FUNC_17(VAR_15, VAR_19 & VAR_5);

 while (VAR_17 && (VAR_26 + VAR_30 < VAR_32 || VAR_22->recv_pkt)) {
  bool VAR_38 = 0;
  bool VAR_39 = 0;
  int VAR_40;
  int VAR_41 = 0;
  bool VAR_42;
  bool VAR_43 = 0;

  VAR_29 = FUNC_25(VAR_15, VAR_24, VAR_19, VAR_34, &VAR_33);
  if (!VAR_29) {
   if (VAR_24) {
    int VAR_44 = FUNC_1(VAR_15, VAR_24,
           VAR_16, VAR_17, VAR_19);

    if (VAR_44 > 0) {
     VAR_26 += VAR_44;
     VAR_17 -= VAR_44;
     continue;
    }
   }
   goto recv_end;
  } else {
   VAR_28 = FUNC_22(VAR_29);
   if (VAR_23->version == VAR_12)
    VAR_28->control = 0;
   else
    VAR_28->control = VAR_22->control;
  }

  VAR_27 = FUNC_19(VAR_29);

  VAR_40 = VAR_27->full_len - VAR_23->overhead_size;

  if (VAR_40 <= VAR_17 && !VAR_35 && !VAR_36 &&
      VAR_22->control == VAR_14 &&
      VAR_23->version != VAR_12)
   VAR_39 = 1;


  if (VAR_22->control == VAR_14)
   VAR_42 = VAR_22->async_capable;
  else
   VAR_42 = 0;

  VAR_33 = FUNC_4(VAR_15, VAR_29, &VAR_16->msg_iter,
      &VAR_41, &VAR_39, VAR_42);
  if (VAR_33 < 0 && VAR_33 != -VAR_1) {
   FUNC_20(VAR_15, VAR_0);
   goto recv_end;
  }

  if (VAR_33 == -VAR_1) {
   VAR_43 = 1;
   VAR_37++;
  } else if (VAR_23->version == VAR_12) {
   VAR_28->control = VAR_22->control;
  }
  if (!VAR_25)
   VAR_25 = VAR_28->control;
  else if (VAR_25 != VAR_28->control)
   goto recv_end;

  if (!VAR_31) {
   int VAR_45;

   VAR_45 = FUNC_8(VAR_16, VAR_11, VAR_13,
     sizeof(VAR_25), &VAR_25);
   VAR_31 = 1;
   if (VAR_25 != VAR_14) {
    if (VAR_45 || VAR_16->msg_flags & VAR_4) {
     VAR_33 = -VAR_2;
     goto recv_end;
    }
   }
  }

  if (VAR_43)
   goto pick_next_record;

  if (!VAR_39) {
   if (VAR_27->full_len > VAR_17) {
    VAR_38 = 1;
    VAR_41 = VAR_17;
   } else {
    VAR_41 = VAR_27->full_len;
   }

   VAR_33 = FUNC_13(VAR_29, VAR_27->offset,
          VAR_16, VAR_41);
   if (VAR_33 < 0)
    goto recv_end;

   if (!VAR_36) {
    VAR_27->offset = VAR_27->offset + VAR_41;
    VAR_27->full_len = VAR_27->full_len - VAR_41;
   }
  }

pick_next_record:
  if (VAR_41 > VAR_17)
   VAR_41 = VAR_17;

  VAR_26 += VAR_41;
  VAR_17 -= VAR_41;


  if (VAR_43 || VAR_36 || VAR_38) {
   FUNC_14(&VAR_22->rx_list, VAR_29);
   VAR_29 = ((void*)0);
  }

  if (FUNC_23(VAR_15, VAR_29, VAR_41)) {




   VAR_16->msg_flags |= VAR_6;
   if (VAR_22->control != VAR_14)
    goto recv_end;
  } else {
   break;
  }
 }

recv_end:
 if (VAR_37) {

  FUNC_15(VAR_22->async_notify, 1);
  if (FUNC_2(&VAR_22->decrypt_pending)) {
   VAR_33 = FUNC_3(-VAR_1, &VAR_22->async_wait);
   if (VAR_33) {

    FUNC_20(VAR_15, VAR_33);
    VAR_30 = 0;
    VAR_26 = 0;
    goto end;
   }
  } else {
   FUNC_9(&VAR_22->async_wait.completion);
  }
  FUNC_0(VAR_22->async_notify, 0);


  if (VAR_36 || VAR_35)
   VAR_33 = FUNC_7(VAR_22, VAR_16, &VAR_25, &VAR_31, VAR_30,
           VAR_26, 0, VAR_36);
  else
   VAR_33 = FUNC_7(VAR_22, VAR_16, &VAR_25, &VAR_31, 0,
           VAR_26, 1, VAR_36);
  if (VAR_33 < 0) {
   FUNC_20(VAR_15, VAR_33);
   VAR_30 = 0;
   goto end;
  }
 }

 VAR_30 += VAR_26;

end:
 FUNC_10(VAR_15);
 if (VAR_24)
  FUNC_12(VAR_15, VAR_24);
 return VAR_30 ? : VAR_33;
}
