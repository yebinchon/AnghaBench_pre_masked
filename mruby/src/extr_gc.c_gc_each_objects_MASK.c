
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
typedef TYPE_2__ mrb_heap_page ;
struct TYPE_10__ {TYPE_2__* heaps; } ;
typedef TYPE_3__ mrb_gc ;
typedef scalar_t__ (* mrb_each_object_callback ) (int *,int *,void*) ;
struct TYPE_8__ {int basic; } ;
struct TYPE_11__ {TYPE_1__ as; } ;
typedef TYPE_4__ RVALUE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,int *,void*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_2, mrb_gc *VAR_3, mrb_each_object_callback *VAR_4, void *VAR_5)
{
  mrb_heap_page* VAR_6;

  VAR_6 = VAR_3->heaps;
  while (VAR_6 != ((void*)0)) {
    RVALUE *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_0(VAR_6);
    for (VAR_8=0; VAR_8 < VAR_1; VAR_8++) {
      if ((*VAR_4)(VAR_2, &VAR_7[VAR_8].as.basic, VAR_5) == VAR_0)
        return;
    }
    VAR_6 = VAR_6->next;
  }
}
