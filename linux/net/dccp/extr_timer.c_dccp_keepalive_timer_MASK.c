
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int dummy; } ;


 struct sock* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (char*) ;
 struct sock* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct sock *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1("dccp should not use a keepalive timer !\n");
 FUNC_2(VAR_3);
}
