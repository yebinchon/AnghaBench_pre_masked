
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parman_prio {int item_list; } ;
struct parman_item {unsigned long index; int list; } ;
struct parman {int dummy; } ;


 int FUNC_0 (struct parman*,struct parman_prio*,struct parman_item*,unsigned long,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct parman_prio*) ;
 struct parman_item* FUNC_3 (struct parman_prio*) ;
 int FUNC_4 (struct parman_prio*) ;

__attribute__((used)) static void FUNC_5(struct parman *VAR_0,
     struct parman_prio *VAR_1)
{
 struct parman_item *VAR_2;
 unsigned long VAR_3;

 if (!FUNC_4(VAR_1))
  return;
 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = FUNC_2(VAR_1) - 1;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 FUNC_1(&VAR_2->list, &VAR_1->item_list);
 VAR_2->index = VAR_3;
}
