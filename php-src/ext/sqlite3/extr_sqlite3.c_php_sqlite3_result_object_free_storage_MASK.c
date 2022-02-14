
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {int zo; int stmt_obj_zval; TYPE_1__* stmt_obj; } ;
typedef TYPE_2__ php_sqlite3_result ;
struct TYPE_4__ {int stmt; scalar_t__ initialised; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(zend_object *VAR_0)
{
 php_sqlite3_result *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1) {
  return;
 }

 if (!FUNC_0(VAR_1->stmt_obj_zval)) {
  if (VAR_1->stmt_obj && VAR_1->stmt_obj->initialised) {
   FUNC_2(VAR_1->stmt_obj->stmt);
  }

  FUNC_4(&VAR_1->stmt_obj_zval);
 }

 FUNC_3(&VAR_1->zo);
}
