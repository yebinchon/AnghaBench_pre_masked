
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_5__ {int stmt_obj_zval; TYPE_1__* stmt_obj; } ;
typedef TYPE_2__ php_sqlite3_free_list ;
struct TYPE_4__ {scalar_t__ initialised; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(php_sqlite3_free_list **VAR_0, zval *VAR_1 )
{
 return ((*VAR_0)->stmt_obj->initialised && FUNC_1(VAR_1) == FUNC_0((*VAR_0)->stmt_obj_zval));
}
