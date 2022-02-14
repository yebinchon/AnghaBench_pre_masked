
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ zend_object_iterator ;
struct TYPE_7__ {int flags; int current; } ;
typedef TYPE_2__ spl_fixedarray_object ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3(zend_object_iterator *VAR_1, zval *VAR_2)
{
 spl_fixedarray_object *VAR_3 = FUNC_1(&VAR_1->data);

 if (VAR_3->flags & VAR_0) {
  FUNC_2(VAR_1, VAR_2);
 } else {
  FUNC_0(VAR_2, VAR_3->current);
 }
}
