
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_5__ {char* what; int last_state; int last_err_msg; } ;
struct TYPE_7__ {TYPE_1__ einfo; int assume_utf8; int stmt; } ;
typedef TYPE_3__ pdo_odbc_stmt ;
typedef int SQLRETURN ;




 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(pdo_stmt_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 SQLRETURN VAR_5;
 pdo_odbc_stmt *VAR_6 = (pdo_odbc_stmt*)VAR_2->driver_data;

 switch (VAR_3) {
  case 129:
   FUNC_3(VAR_4);
   VAR_5 = FUNC_0(VAR_6->stmt, FUNC_2(VAR_4), FUNC_1(VAR_4));

   if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
    return 1;
   }
   FUNC_4("SQLSetCursorName");
   return 0;

  case 128:
   VAR_6->assume_utf8 = FUNC_6(VAR_4);
   return 0;
  default:
   FUNC_5(VAR_6->einfo.last_err_msg, "Unknown Attribute");
   VAR_6->einfo.what = "setAttribute";
   FUNC_5(VAR_6->einfo.last_state, "IM001");
   return -1;
 }
}
