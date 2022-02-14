
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int expires; } ;
struct timer_base {int clk; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct timer_base*,struct timer_list*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct timer_base *VAR_0, struct timer_list *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1->expires, VAR_0->clk);
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
