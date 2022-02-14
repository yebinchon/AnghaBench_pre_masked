
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_8__ {TYPE_4__* heap; } ;
typedef TYPE_2__ spl_heap_object ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int *,int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(zend_object_iterator *VAR_2)
{
 spl_heap_object *VAR_3 = FUNC_0(&VAR_2->data);

 if (VAR_3->heap->flags & VAR_0) {
  FUNC_2(VAR_1, "Heap is corrupted, heap properties are no longer ensured.", 0);
  return;
 }

 FUNC_1(VAR_3->heap, ((void*)0), &VAR_2->data);
 FUNC_3(VAR_2);
}
