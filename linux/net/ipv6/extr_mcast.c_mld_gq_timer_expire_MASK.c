
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct inet6_dev {scalar_t__ mc_gq_running; } ;


 struct inet6_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 struct inet6_dev* VAR_0 ;
 int FUNC_1 (struct inet6_dev*) ;
 int VAR_1 ;
 int FUNC_2 (struct inet6_dev*,int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct inet6_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 VAR_3->mc_gq_running = 0;
 FUNC_2(VAR_3, ((void*)0));
 FUNC_1(VAR_3);
}
