
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; struct TYPE_6__* next; TYPE_1__* e; } ;
typedef TYPE_2__ segment ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef scalar_t__ (* mrb_hash_foreach_func ) (int *,int ,int ,void*) ;
struct TYPE_7__ {size_t last_len; TYPE_2__* rootseg; } ;
typedef TYPE_3__ htable ;
struct TYPE_5__ {int val; int key; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,void*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, htable *VAR_1, mrb_hash_foreach_func *VAR_2, void *VAR_3)
{
  segment *VAR_4;
  mrb_int VAR_5;

  if (VAR_1 == ((void*)0)) return;
  VAR_4 = VAR_1->rootseg;
  while (VAR_4) {
    for (VAR_5=0; VAR_5<VAR_4->size; VAR_5++) {

      if (!VAR_4->next && VAR_5 >= VAR_1->last_len) {
        return;
      }
      if (FUNC_0(VAR_4->e[VAR_5].key)) continue;
      if ((*VAR_2)(VAR_0, VAR_4->e[VAR_5].key, VAR_4->e[VAR_5].val, VAR_3) != 0)
        return;
    }
    VAR_4 = VAR_4->next;
  }
}
