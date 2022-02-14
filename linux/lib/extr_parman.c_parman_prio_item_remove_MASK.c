
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parman_prio {int dummy; } ;
struct parman_item {unsigned long index; int list; } ;
struct parman {int dummy; } ;


 int FUNC_0 (struct parman*,struct parman_prio*,struct parman_item*,unsigned long,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct parman_item* FUNC_3 (struct parman_prio*) ;

__attribute__((used)) static void FUNC_4(struct parman *VAR_0,
        struct parman_prio *VAR_1,
        struct parman_item *VAR_2)
{
 struct parman_item *VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == VAR_2) {
  FUNC_1(&VAR_2->list);
  return;
 }
 VAR_4 = VAR_2->index;
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, 1);
 FUNC_1(&VAR_3->list);
 FUNC_2(&VAR_2->list, &VAR_3->list);
 VAR_3->index = VAR_4;
}
