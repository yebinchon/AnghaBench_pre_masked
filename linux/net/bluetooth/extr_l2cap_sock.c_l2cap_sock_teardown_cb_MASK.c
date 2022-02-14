
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; int sk_err; int (* sk_state_change ) (struct sock*) ;int (* sk_data_ready ) (struct sock*) ;} ;
struct l2cap_chan {int state; int nesting; struct sock* data; } ;
struct TYPE_2__ {struct sock* parent; } ;




 int FUNC_0 (char*,struct l2cap_chan*,int ) ;


 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct l2cap_chan *VAR_1, int VAR_2)
{
 struct sock *VAR_3 = VAR_1->data;
 struct sock *VAR_4;

 FUNC_0("chan %p state %s", VAR_1, FUNC_8(VAR_1->state));
 FUNC_5(VAR_3, FUNC_1(&VAR_1->nesting));

 VAR_4 = FUNC_3(VAR_3)->parent;

 FUNC_7(VAR_3, VAR_0);

 switch (VAR_1->state) {
 case 128:
 case 131:
 case 130:
  break;
 case 129:
  FUNC_4(VAR_3);
  VAR_3->sk_state = 130;
  VAR_1->state = 130;

  break;
 default:
  VAR_3->sk_state = 130;
  VAR_1->state = 130;

  VAR_3->sk_err = VAR_2;

  if (VAR_4) {
   FUNC_2(VAR_3);
   VAR_4->sk_data_ready(VAR_4);
  } else {
   VAR_3->sk_state_change(VAR_3);
  }

  break;
 }

 FUNC_6(VAR_3);
}
