
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int entry; } ;
struct timer_base {int pending_map; scalar_t__ vectors; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct timer_list*,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 unsigned int FUNC_3 (struct timer_list*) ;
 int FUNC_4 (struct timer_list*) ;

__attribute__((used)) static int FUNC_5(struct timer_list *VAR_0, struct timer_base *VAR_1,
        bool VAR_2)
{
 unsigned VAR_3 = FUNC_3(VAR_0);

 if (!FUNC_4(VAR_0))
  return 0;

 if (FUNC_2(&VAR_0->entry, VAR_1->vectors + VAR_3))
  FUNC_0(VAR_3, VAR_1->pending_map);

 FUNC_1(VAR_0, VAR_2);
 return 1;
}
