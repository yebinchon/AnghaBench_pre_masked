
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* key; struct TYPE_4__* next; int * val; } ;
typedef TYPE_1__ segment ;
typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef int mrb_bool ;
struct TYPE_5__ {size_t last_len; int size; TYPE_1__* rootseg; } ;
typedef TYPE_2__ iv_tbl ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static mrb_bool
FUNC_0(mrb_state *VAR_3, iv_tbl *VAR_4, mrb_sym VAR_5, mrb_value *VAR_6)
{
  segment *VAR_7;
  size_t VAR_8;

  if (VAR_4 == ((void*)0)) return VAR_0;
  VAR_7 = VAR_4->rootseg;
  while (VAR_7) {
    for (VAR_8=0; VAR_8<VAR_1; VAR_8++) {
      mrb_sym VAR_9 = VAR_7->key[VAR_8];

      if (!VAR_7->next && VAR_8 >= VAR_4->last_len) {
        return VAR_0;
      }
      if (VAR_9 == VAR_5) {
        VAR_4->size--;
        VAR_7->key[VAR_8] = 0;
        if (VAR_6) *VAR_6 = VAR_7->val[VAR_8];
        return VAR_2;
      }
    }
    VAR_7 = VAR_7->next;
  }
  return VAR_0;
}
