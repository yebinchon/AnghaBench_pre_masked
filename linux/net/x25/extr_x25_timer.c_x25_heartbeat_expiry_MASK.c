
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int sk_state; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct sock* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sock*,int ) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 TYPE_1__* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_5)
{
 struct sock *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);

 FUNC_0(VAR_6);
 if (FUNC_4(VAR_6))
  goto restart_heartbeat;

 switch (FUNC_7(VAR_6)->state) {

  case 129:





   if (FUNC_3(VAR_6, VAR_1) ||
       (VAR_6->sk_state == VAR_2 &&
        FUNC_3(VAR_6, VAR_0))) {
    FUNC_1(VAR_6);
    FUNC_6(VAR_6);
    return;
   }
   break;

  case 128:



   FUNC_5(VAR_6);
   break;
 }
restart_heartbeat:
 FUNC_8(VAR_6);
 FUNC_1(VAR_6);
}
