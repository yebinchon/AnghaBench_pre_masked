
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int state; int sk_state; } ;
struct l2cap_chan {int state; int sk_state; } ;
struct TYPE_2__ {struct sock* chan; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 TYPE_1__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_1)
{
 struct sock *VAR_2;

 FUNC_0("parent %p state %s", VAR_1,
        FUNC_8(VAR_1->sk_state));


 while ((VAR_2 = FUNC_2(VAR_1, ((void*)0)))) {
  struct l2cap_chan *VAR_3 = FUNC_6(VAR_2)->chan;

  FUNC_0("child chan %p state %s", VAR_3,
         FUNC_8(VAR_3->state));

  FUNC_4(VAR_3);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3, VAR_0);
  FUNC_5(VAR_3);

  FUNC_7(VAR_2);
 }
}
