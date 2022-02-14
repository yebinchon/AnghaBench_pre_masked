
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t size; struct TYPE_9__* next; TYPE_1__* e; } ;
typedef TYPE_2__ segment ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_10__ {scalar_t__ size; size_t last_len; TYPE_2__* rootseg; } ;
typedef TYPE_3__ htable ;
struct TYPE_8__ {int val; int key; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static htable*
FUNC_3(mrb_state *VAR_0, htable *VAR_1)
{
  segment *VAR_2;
  htable *VAR_3;
  mrb_int VAR_4;

  VAR_2 = VAR_1->rootseg;
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_1->size == 0) return VAR_3;

  while (VAR_2) {
    for (VAR_4=0; VAR_4<VAR_2->size; VAR_4++) {
      mrb_value VAR_5 = VAR_2->e[VAR_4].key;
      mrb_value VAR_6 = VAR_2->e[VAR_4].val;

      if ((VAR_2->next == ((void*)0)) && (VAR_4 >= VAR_1->last_len)) {
        return VAR_3;
      }
      if (FUNC_2(VAR_5)) continue;
      FUNC_1(VAR_0, VAR_3, VAR_5, VAR_6);
    }
    VAR_2 = VAR_2->next;
  }
  return VAR_3;
}
