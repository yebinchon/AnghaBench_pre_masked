
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_4__ {TYPE_1__* stmt; } ;
typedef TYPE_2__ pdo_row_t ;
struct TYPE_3__ {int std; int lazy_object_ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(zend_object *VAR_0)
{
 pdo_row_t *VAR_1 = (pdo_row_t *)VAR_0;
 if (VAR_1->stmt) {
  FUNC_1(&VAR_1->stmt->lazy_object_ref);
  FUNC_0(&VAR_1->stmt->std);
 }
}
