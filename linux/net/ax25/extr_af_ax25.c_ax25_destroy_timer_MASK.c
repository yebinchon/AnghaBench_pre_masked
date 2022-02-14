
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {struct sock* sk; } ;
typedef TYPE_1__ ax25_cb ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ,struct timer_list*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_2)
{
 ax25_cb *VAR_3 = FUNC_3(VAR_3, VAR_2, VAR_1);
 struct sock *VAR_4;

 VAR_4=VAR_3->sk;

 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 FUNC_0(VAR_3);
 FUNC_2(VAR_4);
 FUNC_5(VAR_4);
}
