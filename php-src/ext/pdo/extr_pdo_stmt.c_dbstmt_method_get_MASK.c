
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_11__ {TYPE_1__* ce; } ;
typedef TYPE_3__ zend_object ;
typedef int zend_function ;
struct TYPE_12__ {TYPE_2__* dbh; int database_object_handle; } ;
typedef TYPE_4__ pdo_stmt_t ;
struct TYPE_10__ {int ** cls_methods; } ;
struct TYPE_9__ {int function_table; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,size_t) ;
 TYPE_4__* FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (TYPE_3__**,int *,int const*) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static zend_function *FUNC_7(zend_object **VAR_1, zend_string *VAR_2, const zval *VAR_3)
{
 zend_function *VAR_4 = ((void*)0);
 zend_string *VAR_5;
 zend_object *VAR_6 = *VAR_1;

 VAR_5 = FUNC_6(VAR_2);

 if ((VAR_4 = FUNC_3(&VAR_6->ce->function_table, VAR_5)) == ((void*)0)) {
  pdo_stmt_t *VAR_7 = FUNC_2(VAR_6);

  if (!VAR_7->dbh) {
   goto out;
  }


  if (!VAR_7->dbh->cls_methods[VAR_0]) {
   if (!FUNC_1(FUNC_0(&VAR_7->database_object_handle),
    VAR_0)
    || !VAR_7->dbh->cls_methods[VAR_0]) {
    goto out;
   }
  }

  if ((VAR_4 = FUNC_3(VAR_7->dbh->cls_methods[VAR_0], VAR_5)) == ((void*)0)) {
   goto out;
  }

 }

out:
 FUNC_5(VAR_5, 0);
 if (!VAR_4) {
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 }
 return VAR_4;
}
