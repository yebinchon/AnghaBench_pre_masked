
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t index; } ;
struct test_parman_item {int used; TYPE_2__ parman_item; TYPE_1__* prio; } ;
struct test_parman {int used_items; int parman; struct test_parman_item** prio_array; scalar_t__ bulk_noop; struct test_parman_item* items; } ;
struct TYPE_4__ {int parman_prio; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int *,TYPE_2__*) ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;
 unsigned int FUNC_2 (struct test_parman*) ;
 scalar_t__ FUNC_3 (struct test_parman*) ;

__attribute__((used)) static int FUNC_4(struct test_parman *VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 while (FUNC_3(VAR_1)) {
  unsigned int VAR_4 = VAR_2++ & VAR_0;
  struct test_parman_item *VAR_5 = &VAR_1->items[VAR_4];

  if (VAR_1->bulk_noop)
   continue;

  if (!VAR_5->used) {
   VAR_3 = FUNC_0(VAR_1->parman,
           &VAR_5->prio->parman_prio,
           &VAR_5->parman_item);
   if (VAR_3)
    return VAR_3;
   VAR_1->prio_array[VAR_5->parman_item.index] = VAR_5;
   VAR_1->used_items++;
  } else {
   VAR_1->prio_array[VAR_5->parman_item.index] = ((void*)0);
   FUNC_1(VAR_1->parman,
        &VAR_5->prio->parman_prio,
        &VAR_5->parman_item);
   VAR_1->used_items--;
  }
  VAR_5->used = !VAR_5->used;
 }
 return 0;
}
