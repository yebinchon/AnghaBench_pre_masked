
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct sk_buff {scalar_t__* data; } ;
struct pppox_sock {int chan; } ;
struct pppol2tp_session {int sk; } ;
struct TYPE_2__ {int rx_errors; } ;
struct l2tp_session {int name; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct l2tp_session*,int ,char*,int ,int) ;
 int FUNC_3 (struct l2tp_session*,int ,char*,int ) ;
 struct pppol2tp_session* FUNC_4 (struct l2tp_session*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 struct pppox_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 struct sock* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_13(struct l2tp_session *VAR_4, struct sk_buff *VAR_5, int VAR_6)
{
 struct pppol2tp_session *VAR_7 = FUNC_4(VAR_4);
 struct sock *VAR_8 = ((void*)0);




 FUNC_9();
 VAR_8 = FUNC_8(VAR_7->sk);
 if (VAR_8 == ((void*)0))
  goto no_sock;
 if (FUNC_7(VAR_5, 2) && VAR_5->data[0] == VAR_2 &&
     VAR_5->data[1] == VAR_3)
  FUNC_11(VAR_5, 2);

 if (VAR_8->sk_state & VAR_1) {
  struct pppox_sock *VAR_9;

  FUNC_2(VAR_4, VAR_0,
    "%s: recv %d byte data frame, passing to ppp\n",
    VAR_4->name, VAR_6);

  VAR_9 = FUNC_6(VAR_8);
  FUNC_5(&VAR_9->chan, VAR_5);
 } else {
  FUNC_2(VAR_4, VAR_0,
    "%s: recv %d byte data frame, passing to L2TP socket\n",
    VAR_4->name, VAR_6);

  if (FUNC_12(VAR_8, VAR_5) < 0) {
   FUNC_0(&VAR_4->stats.rx_errors);
   FUNC_1(VAR_5);
  }
 }
 FUNC_10();

 return;

no_sock:
 FUNC_10();
 FUNC_3(VAR_4, VAR_0, "%s: no socket\n", VAR_4->name);
 FUNC_1(VAR_5);
}
