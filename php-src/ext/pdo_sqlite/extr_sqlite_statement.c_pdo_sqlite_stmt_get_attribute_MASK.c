
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 pdo_sqlite_stmt *VAR_3 = (pdo_sqlite_stmt*)VAR_0->driver_data;

 switch (VAR_1) {
  case 128:
   FUNC_0(VAR_2);






   break;

  default:
   return 0;
 }

 return 1;
}
