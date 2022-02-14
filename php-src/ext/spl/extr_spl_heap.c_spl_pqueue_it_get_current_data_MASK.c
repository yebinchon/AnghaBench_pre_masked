
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {int value; } ;
typedef TYPE_1__ zend_user_iterator ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ zend_object_iterator ;
typedef int spl_pqueue_elem ;
struct TYPE_9__ {int flags; TYPE_5__* heap; } ;
typedef TYPE_3__ spl_heap_object ;
struct TYPE_10__ {int flags; scalar_t__ count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static zval *FUNC_5(zend_object_iterator *VAR_2)
{
 zend_user_iterator *VAR_3 = (zend_user_iterator *) VAR_2;
 spl_heap_object *VAR_4 = FUNC_1(&VAR_2->data);

 if (VAR_4->heap->flags & VAR_0) {
  FUNC_4(VAR_1, "Heap is corrupted, heap properties are no longer ensured.", 0);
  return ((void*)0);
 }

 if (VAR_4->heap->count == 0) {
  return ((void*)0);
 }

 if (FUNC_0(VAR_3->value)) {
  spl_pqueue_elem *VAR_5 = FUNC_2(VAR_4->heap, 0);
  FUNC_3(&VAR_3->value, VAR_5, VAR_4->flags);
 }
 return &VAR_3->value;
}
