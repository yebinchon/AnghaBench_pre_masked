
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int * val; int * key; } ;
typedef TYPE_1__ segment ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
struct TYPE_8__ {size_t last_len; TYPE_1__* rootseg; } ;
typedef TYPE_2__ iv_tbl ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ) ;

__attribute__((used)) static iv_tbl*
FUNC_2(mrb_state *VAR_1, iv_tbl *VAR_2)
{
  segment *VAR_3;
  iv_tbl *VAR_4;

  size_t VAR_5;

  VAR_3 = VAR_2->rootseg;
  VAR_4 = FUNC_0(VAR_1);

  while (VAR_3 != ((void*)0)) {
    for (VAR_5=0; VAR_5<VAR_0; VAR_5++) {
      mrb_sym VAR_6 = VAR_3->key[VAR_5];
      mrb_value VAR_7 = VAR_3->val[VAR_5];

      if ((VAR_3->next == ((void*)0)) && (VAR_5 >= VAR_2->last_len)) {
        return VAR_4;
      }
      FUNC_1(VAR_1, VAR_4, VAR_6, VAR_7);
    }
    VAR_3 = VAR_3->next;
  }
  return VAR_4;
}
