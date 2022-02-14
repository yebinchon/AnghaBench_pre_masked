
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_7__ {int data; } ;
typedef TYPE_2__ zend_object_iterator ;
struct TYPE_8__ {TYPE_1__* heap; } ;
typedef TYPE_3__ spl_heap_object ;
struct TYPE_6__ {scalar_t__ count; } ;


 int FUNC_0 (int *,scalar_t__) ;
 TYPE_3__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(zend_object_iterator *VAR_0, zval *VAR_1)
{
 spl_heap_object *VAR_2 = FUNC_1(&VAR_0->data);

 FUNC_0(VAR_1, VAR_2->heap->count - 1);
}
