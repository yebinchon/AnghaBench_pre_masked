
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ak4117 {int timer; scalar_t__ init; } ;


 struct ak4117* VAR_0 ;
 struct ak4117* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ak4117*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct ak4117 *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 if (VAR_4->init)
  return;
 FUNC_2(VAR_4, 0);
 FUNC_1(&VAR_4->timer, 1 + VAR_1);
}
