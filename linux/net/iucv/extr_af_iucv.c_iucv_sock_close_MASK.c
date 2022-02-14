
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; unsigned long sk_lingertime; scalar_t__ sk_bound_dev_if; int (* sk_state_change ) (struct sock*) ;int sk_err; } ;
struct iucv_sock {int * hs_dev; int backlog_skb_q; int send_skb_q; int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 unsigned long VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int) ;
 struct iucv_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int,int ) ;
 int FUNC_6 (struct sock*,int ,unsigned long) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;

__attribute__((used)) static void FUNC_17(struct sock *VAR_7)
{
 struct iucv_sock *VAR_8 = FUNC_3(VAR_7);
 unsigned long VAR_9;
 int VAR_10 = 0;

 FUNC_7(VAR_7);

 switch (VAR_7->sk_state) {
 case 128:
  FUNC_4(VAR_7);
  break;

 case 130:
  if (VAR_8->transport == VAR_1) {
   VAR_10 = FUNC_1(VAR_7, VAR_0);
   VAR_7->sk_state = 129;
   VAR_7->sk_state_change(VAR_7);
  }


 case 129:
  VAR_7->sk_state = 131;
  VAR_7->sk_state_change(VAR_7);

  if (!VAR_10 && !FUNC_9(&VAR_8->send_skb_q)) {
   if (FUNC_11(VAR_7, VAR_5) && VAR_7->sk_lingertime)
    VAR_9 = VAR_7->sk_lingertime;
   else
    VAR_9 = VAR_4;
   FUNC_6(VAR_7,
     FUNC_5(VAR_7, VAR_3, 0),
     VAR_9);
  }


 case 131:
  VAR_7->sk_state = VAR_3;
  VAR_7->sk_state_change(VAR_7);

  VAR_7->sk_err = VAR_2;
  VAR_7->sk_state_change(VAR_7);

  FUNC_10(&VAR_8->send_skb_q);
  FUNC_10(&VAR_8->backlog_skb_q);


 default:
  FUNC_2(VAR_7, 1);
 }

 if (VAR_8->hs_dev) {
  FUNC_0(VAR_8->hs_dev);
  VAR_8->hs_dev = ((void*)0);
  VAR_7->sk_bound_dev_if = 0;
 }


 FUNC_12(VAR_7, VAR_6);

 FUNC_8(VAR_7);
}
