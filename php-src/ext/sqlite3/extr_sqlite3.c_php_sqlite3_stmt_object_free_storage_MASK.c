
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_5__ {int zo; int db_obj_zval; int stmt; TYPE_1__* db_obj; scalar_t__ initialised; int * bound_params; } ;
typedef TYPE_2__ php_sqlite3_stmt ;
struct TYPE_4__ {int free_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int (*) (void*,void*)) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(zend_object *VAR_1)
{
 php_sqlite3_stmt *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2) {
  return;
 }

 if (VAR_2->bound_params) {
  FUNC_3(VAR_2->bound_params);
  FUNC_0(VAR_2->bound_params);
  VAR_2->bound_params = ((void*)0);
 }

 if (VAR_2->initialised) {
  FUNC_4(&(VAR_2->db_obj->free_list), VAR_2->stmt,
   (int (*)(void *, void *)) VAR_0);
 }

 if (!FUNC_1(VAR_2->db_obj_zval)) {
  FUNC_6(&VAR_2->db_obj_zval);
 }

 FUNC_5(&VAR_2->zo);
}
