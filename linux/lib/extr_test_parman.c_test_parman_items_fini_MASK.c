
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_parman_item {int parman_item; TYPE_1__* prio; int used; } ;
struct test_parman {int parman; struct test_parman_item* items; } ;
struct TYPE_2__ {int parman_prio; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct test_parman *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct test_parman_item *VAR_3 = &VAR_1->items[VAR_2];

  if (!VAR_3->used)
   continue;
  FUNC_0(VAR_1->parman,
       &VAR_3->prio->parman_prio,
       &VAR_3->parman_item);
 }
}
