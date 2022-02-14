
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int flags; int expires; int entry; } ;
struct timer_base {int pending_map; scalar_t__ vectors; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct timer_list*,unsigned int) ;
 int FUNC_3 (struct timer_list*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_base *VAR_0, struct timer_list *VAR_1,
     unsigned int VAR_2)
{
 FUNC_1(&VAR_1->entry, VAR_0->vectors + VAR_2);
 FUNC_0(VAR_2, VAR_0->pending_map);
 FUNC_2(VAR_1, VAR_2);

 FUNC_3(VAR_1, VAR_1->expires, VAR_1->flags);
}
