
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_item {struct rmap_item* rmap_list; } ;
struct mm_slot {int dummy; } ;


 int FUNC_0 (struct rmap_item*) ;
 int FUNC_1 (struct rmap_item*) ;

__attribute__((used)) static void FUNC_2(struct mm_slot *VAR_0,
           struct rmap_item **VAR_1)
{
 while (*VAR_1) {
  struct rmap_item *VAR_2 = *VAR_1;
  *VAR_1 = VAR_2->rmap_list;
  FUNC_1(VAR_2);
  FUNC_0(VAR_2);
 }
}
