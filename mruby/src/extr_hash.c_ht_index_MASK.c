
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct segkv {int dummy; } ;
struct TYPE_11__ {size_t size; struct TYPE_11__* next; TYPE_1__* e; } ;
typedef TYPE_2__ segment ;
struct TYPE_12__ {scalar_t__ size; int capa; TYPE_1__** table; } ;
typedef TYPE_3__ segindex ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_13__ {scalar_t__ size; scalar_t__ last_len; TYPE_2__* rootseg; TYPE_3__* index; } ;
typedef TYPE_4__ htable ;
struct TYPE_10__ {int key; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int *,TYPE_4__*,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_0, htable *VAR_1)
{
  size_t VAR_2 = (size_t)VAR_1->size;
  size_t VAR_3;
  segindex *VAR_4 = VAR_1->index;
  segment *VAR_5;
  size_t VAR_6;


  if (VAR_4 && VAR_4->size >= FUNC_1(VAR_4->capa)) {
    VAR_2 = VAR_4->capa+1;
  }
  FUNC_6(VAR_2);
  if (!VAR_4 || VAR_4->capa < VAR_2) {
    VAR_4 = (segindex*)FUNC_4(VAR_0, VAR_4, sizeof(segindex)+sizeof(struct segkv*)*VAR_2);
    if (VAR_4 == ((void*)0)) {
      FUNC_3(VAR_0, VAR_1->index);
      VAR_1->index = ((void*)0);
      return;
    }
    VAR_1->index = VAR_4;
  }
  VAR_4->size = VAR_1->size;
  VAR_4->capa = VAR_2;
  for (VAR_6=0; VAR_6<VAR_2; VAR_6++) {
    VAR_4->table[VAR_6] = ((void*)0);
  }


  VAR_3 = FUNC_0(VAR_4);
  VAR_5 = VAR_1->rootseg;
  while (VAR_5) {
    for (VAR_6=0; VAR_6<VAR_5->size; VAR_6++) {
      mrb_value VAR_7;
      size_t VAR_8, VAR_9 = 0;

      if (!VAR_5->next && VAR_6 >= (size_t)VAR_1->last_len) {
        return;
      }
      VAR_7 = VAR_5->e[VAR_6].key;
      if (FUNC_5(VAR_7)) continue;
      VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_7) & VAR_3;
      while (VAR_4->table[VAR_8]) {
        VAR_8 = (VAR_8+(++VAR_9)) & VAR_3;
      }
      VAR_4->table[VAR_8] = &VAR_5->e[VAR_6];
    }
    VAR_5 = VAR_5->next;
  }
}
