
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

void FUNC_9(struct sock *VAR_4, int VAR_5)
{
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 FUNC_2(VAR_4);

 FUNC_0(VAR_4);

 FUNC_1(VAR_4)->state = VAR_0;

 VAR_4->sk_state = VAR_3;
 VAR_4->sk_err = VAR_5;
 VAR_4->sk_shutdown |= VAR_1;

 if (!FUNC_6(VAR_4, VAR_2)) {
  VAR_4->sk_state_change(VAR_4);
  FUNC_7(VAR_4, VAR_2);
 }
}
