
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ linger2; int fastopen_rsk; int repair; } ;
struct sock {int sk_state; TYPE_1__* sk_prot; int sk_lingertime; int sk_allocation; int sk_receive_queue; int sk_shutdown; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_4__ {int tcp_flags; scalar_t__ seq; scalar_t__ end_seq; } ;
struct TYPE_3__ {int orphan_count; int (* disconnect ) (struct sock*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int const VAR_11 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int const) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (int ) ;
 struct request_sock* FUNC_17 (int ,int ) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*,struct request_sock*,int) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*,long) ;
 scalar_t__ FUNC_22 (struct sock*,int ) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct sock*) ;
 int FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*,int ) ;
 int FUNC_28 (struct sock*,int ) ;
 scalar_t__ FUNC_29 (struct sock*,int ) ;
 scalar_t__ FUNC_30 (struct sock*) ;
 int FUNC_31 (struct sock*) ;
 int FUNC_32 (struct sock*,int ) ;
 int FUNC_33 (struct sock*) ;
 int FUNC_34 (struct sock*,int) ;
 struct tcp_sock* FUNC_35 (struct sock*) ;
 int FUNC_36 (struct sock*,int,int const) ;
 scalar_t__ FUNC_37 (int ) ;

void FUNC_38(struct sock *VAR_12, long VAR_13)
{
 struct sk_buff *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 FUNC_14(VAR_12);
 VAR_12->sk_shutdown = VAR_5;

 if (VAR_12->sk_state == VAR_10) {
  FUNC_34(VAR_12, VAR_8);


  FUNC_10(VAR_12);

  goto adjudge_to_death;
 }





 while ((VAR_14 = FUNC_5(&VAR_12->sk_receive_queue)) != ((void*)0)) {
  u32 VAR_17 = FUNC_1(VAR_14)->end_seq - FUNC_1(VAR_14)->seq;

  if (FUNC_1(VAR_14)->tcp_flags & VAR_7)
   VAR_17--;
  VAR_15 += VAR_17;
  FUNC_3(VAR_14);
 }

 FUNC_20(VAR_12);


 if (VAR_12->sk_state == VAR_8)
  goto adjudge_to_death;
 if (FUNC_37(FUNC_35(VAR_12)->repair)) {
  VAR_12->sk_prot->disconnect(VAR_12, 0);
 } else if (VAR_15) {

  FUNC_0(FUNC_24(VAR_12), VAR_1);
  FUNC_34(VAR_12, VAR_8);
  FUNC_32(VAR_12, VAR_12->sk_allocation);
 } else if (FUNC_22(VAR_12, VAR_6) && !VAR_12->sk_lingertime) {

  VAR_12->sk_prot->disconnect(VAR_12, 0);
  FUNC_0(FUNC_24(VAR_12), VAR_2);
 } else if (FUNC_30(VAR_12)) {
  FUNC_33(VAR_12);
 }

 FUNC_21(VAR_12, VAR_13);

adjudge_to_death:
 VAR_16 = VAR_12->sk_state;
 FUNC_23(VAR_12);
 FUNC_25(VAR_12);

 FUNC_12();
 FUNC_6(VAR_12);

 FUNC_4(VAR_12);

 FUNC_16(VAR_12->sk_prot->orphan_count);


 if (VAR_16 != VAR_8 && VAR_12->sk_state == VAR_8)
  goto out;
 if (VAR_12->sk_state == VAR_9) {
  struct tcp_sock *VAR_18 = FUNC_35(VAR_12);
  if (VAR_18->linger2 < 0) {
   FUNC_34(VAR_12, VAR_8);
   FUNC_32(VAR_12, VAR_0);
   FUNC_2(FUNC_24(VAR_12),
     VAR_3);
  } else {
   const int VAR_19 = FUNC_31(VAR_12);

   if (VAR_19 > VAR_11) {
    FUNC_11(VAR_12,
      VAR_19 - VAR_11);
   } else {
    FUNC_36(VAR_12, VAR_9, VAR_19);
    goto out;
   }
  }
 }
 if (VAR_12->sk_state != VAR_8) {
  FUNC_20(VAR_12);
  if (FUNC_29(VAR_12, 0)) {
   FUNC_34(VAR_12, VAR_8);
   FUNC_32(VAR_12, VAR_0);
   FUNC_2(FUNC_24(VAR_12),
     VAR_4);
  } else if (!FUNC_8(FUNC_24(VAR_12))) {

   FUNC_34(VAR_12, VAR_8);
  }
 }

 if (VAR_12->sk_state == VAR_8) {
  struct request_sock *VAR_20;

  VAR_20 = FUNC_17(FUNC_35(VAR_12)->fastopen_rsk,
      FUNC_15(VAR_12));




  if (VAR_20)
   FUNC_19(VAR_12, VAR_20, 0);
  FUNC_9(VAR_12);
 }


out:
 FUNC_7(VAR_12);
 FUNC_13();
 FUNC_18(VAR_12);
 FUNC_26(VAR_12);
}
