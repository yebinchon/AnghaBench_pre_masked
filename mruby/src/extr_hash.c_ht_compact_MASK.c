
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; struct TYPE_10__* next; TYPE_1__* e; } ;
typedef TYPE_3__ segment ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_11__ {size_t size; size_t last_len; TYPE_2__* index; TYPE_3__* lastseg; TYPE_3__* rootseg; } ;
typedef TYPE_4__ htable ;
struct TYPE_9__ {size_t size; } ;
struct TYPE_8__ {int key; } ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, htable *VAR_1)
{
  segment *VAR_2;
  mrb_int VAR_3;
  segment *VAR_4 = ((void*)0);
  mrb_int VAR_5;
  mrb_int VAR_6 = 0;

  if (VAR_1 == ((void*)0)) return;
  VAR_2 = VAR_1->rootseg;
  if (VAR_1->index && (size_t)VAR_1->size == VAR_1->index->size) {
    FUNC_0(VAR_0, VAR_1);
    return;
  }
  while (VAR_2) {
    for (VAR_3=0; VAR_3<VAR_2->size; VAR_3++) {
      mrb_value VAR_7 = VAR_2->e[VAR_3].key;

      if (!VAR_2->next && VAR_3 >= VAR_1->last_len) {
        goto exit;
      }
      if (FUNC_2(VAR_7)) {
        if (VAR_4 == ((void*)0)) {
          VAR_4 = VAR_2;
          VAR_5 = VAR_3;
        }
      }
      else {
        VAR_6++;
        if (VAR_4 != ((void*)0)) {
          VAR_4->e[VAR_5++] = VAR_2->e[VAR_3];
          if (VAR_5 >= VAR_4->size) {
            VAR_4 = VAR_4->next;
            VAR_5 = 0;
          }
        }
      }
    }
    VAR_2 = VAR_2->next;
  }
 exit:

  VAR_1->size = VAR_6;
  if (VAR_4) {
    VAR_2 = VAR_4->next;
    VAR_4->next = ((void*)0);
    VAR_1->last_len = VAR_5;
    VAR_1->lastseg = VAR_4;
    while (VAR_2) {
      VAR_4 = VAR_2->next;
      FUNC_1(VAR_0, VAR_2);
      VAR_2 = VAR_4;
    }
  }
  if (VAR_1->index) {
    FUNC_0(VAR_0, VAR_1);
  }
}
