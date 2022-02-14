
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {size_t size; TYPE_1__* e; struct TYPE_12__* next; } ;
typedef TYPE_2__ segment ;
typedef void* mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_13__ {size_t last_len; size_t size; int * index; TYPE_2__* lastseg; TYPE_2__* rootseg; } ;
typedef TYPE_3__ htable ;
struct TYPE_11__ {void* val; void* key; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*,void*,void*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*,void*,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 TYPE_2__* FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(mrb_state *VAR_1, htable *VAR_2, mrb_value VAR_3, mrb_value VAR_4)
{
  segment *VAR_5;
  mrb_int VAR_6, VAR_7 = 0;

  if (VAR_2 == ((void*)0)) return;
  if (VAR_2->index) {
    FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
    return;
  }
  VAR_5 = VAR_2->rootseg;
  while (VAR_5) {
    for (VAR_6=0; VAR_6<VAR_5->size; VAR_6++) {
      mrb_value VAR_8 = VAR_5->e[VAR_6].key;

      if (!VAR_5->next && VAR_6 >= VAR_2->last_len) {
        VAR_5->e[VAR_6].key = VAR_3;
        VAR_5->e[VAR_6].val = VAR_4;
        VAR_2->last_len = VAR_6+1;
        VAR_2->size++;
        return;
      }
      if (FUNC_4(VAR_8)) {
        VAR_7++;
        continue;
      }
      if (FUNC_1(VAR_1, VAR_2, VAR_8, VAR_3)) {
        VAR_5->e[VAR_6].val = VAR_4;
        return;
      }
    }
    VAR_5 = VAR_5->next;
  }



  if (VAR_7 > 0 && VAR_7 > VAR_0) {
    FUNC_0(VAR_1, VAR_2);
  }
  VAR_2->size++;


  if (VAR_2->lastseg && VAR_2->last_len < VAR_2->lastseg->size) {
    VAR_5 = VAR_2->lastseg;
    VAR_6 = VAR_2->last_len;
  }
  else {

    VAR_5 = FUNC_5(VAR_1, VAR_2->lastseg);
    VAR_6 = 0;
    if (VAR_2->rootseg == ((void*)0)) {
      VAR_2->rootseg = VAR_5;
    }
    else {
      VAR_2->lastseg->next = VAR_5;
    }
    VAR_2->lastseg = VAR_5;
  }
  VAR_5->e[VAR_6].key = VAR_3;
  VAR_5->e[VAR_6].val = VAR_4;
  VAR_2->last_len = VAR_6+1;
  if (VAR_2->index == ((void*)0) && VAR_2->size > VAR_0*4) {
    FUNC_2(VAR_1, VAR_2);
  }
}
