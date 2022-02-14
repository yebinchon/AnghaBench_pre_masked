
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t size; struct TYPE_8__* next; TYPE_1__* e; } ;
typedef TYPE_2__ segment ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef int mrb_bool ;
struct TYPE_9__ {size_t last_len; TYPE_2__* rootseg; scalar_t__ index; } ;
typedef TYPE_3__ htable ;
struct TYPE_7__ {int val; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static mrb_bool
FUNC_3(mrb_state *VAR_2, htable *VAR_3, mrb_value VAR_4, mrb_value *VAR_5)
{
  segment *VAR_6;
  mrb_int VAR_7;

  if (VAR_3 == ((void*)0)) return VAR_0;
  if (VAR_3->index) {
    return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  }

  VAR_6 = VAR_3->rootseg;
  while (VAR_6) {
    for (VAR_7=0; VAR_7<VAR_6->size; VAR_7++) {
      mrb_value VAR_8 = VAR_6->e[VAR_7].key;

      if (!VAR_6->next && VAR_7 >= VAR_3->last_len) {
        return VAR_0;
      }
      if (FUNC_2(VAR_8)) continue;
      if (FUNC_0(VAR_2, VAR_3, VAR_8, VAR_4)) {
        if (VAR_5) *VAR_5 = VAR_6->e[VAR_7].val;
        return VAR_1;
      }
    }
    VAR_6 = VAR_6->next;
  }
  return VAR_0;
}
