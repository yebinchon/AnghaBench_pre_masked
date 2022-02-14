
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_base {int must_forward_clk; int lock; int clk; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer_base*,struct hlist_head*) ;
 int FUNC_1 (struct timer_base*,struct hlist_head*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct timer_base*) ;
 int FUNC_6 (struct timer_base*) ;

__attribute__((used)) static inline void FUNC_7(struct timer_base *VAR_2)
{
 struct hlist_head VAR_3[VAR_0];
 int VAR_4;

 if (!FUNC_4(VAR_1, VAR_2->clk))
  return;

 FUNC_5(VAR_2);
 FUNC_2(&VAR_2->lock);
 VAR_2->must_forward_clk = 0;

 while (FUNC_4(VAR_1, VAR_2->clk)) {

  VAR_4 = FUNC_0(VAR_2, VAR_3);
  VAR_2->clk++;

  while (VAR_4--)
   FUNC_1(VAR_2, VAR_3 + VAR_4);
 }
 FUNC_3(&VAR_2->lock);
 FUNC_6(VAR_2);
}
