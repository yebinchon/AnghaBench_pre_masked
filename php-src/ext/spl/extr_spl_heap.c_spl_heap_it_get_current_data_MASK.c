
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_7__ {TYPE_4__* heap; } ;
typedef TYPE_2__ spl_heap_object ;
struct TYPE_8__ {int flags; scalar_t__ count; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static zval *FUNC_3(zend_object_iterator *VAR_2)
{
 spl_heap_object *VAR_3 = FUNC_0(&VAR_2->data);

 if (VAR_3->heap->flags & VAR_0) {
  FUNC_2(VAR_1, "Heap is corrupted, heap properties are no longer ensured.", 0);
  return ((void*)0);
 }

 if (VAR_3->heap->count == 0) {
  return ((void*)0);
 } else {
  return FUNC_1(VAR_3->heap, 0);
 }
}
