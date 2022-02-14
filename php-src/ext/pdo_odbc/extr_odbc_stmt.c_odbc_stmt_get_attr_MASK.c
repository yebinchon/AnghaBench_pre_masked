
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
typedef int buf ;
typedef int SQLSMALLINT ;
typedef int SQLRETURN ;




 int FUNC_0 (int ,char*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(pdo_stmt_t *VAR_2, zend_long VAR_3, zval *VAR_4)
{
 SQLRETURN VAR_5;
 pdo_odbc_stmt *VAR_6 = (pdo_odbc_stmt*)VAR_2->driver_data;

 switch (VAR_3) {
  case 129:
  {
   char VAR_7[256];
   SQLSMALLINT VAR_8 = 0;
   VAR_5 = FUNC_0(VAR_6->stmt, VAR_7, sizeof(VAR_7), &VAR_8);

   if (VAR_5 == VAR_0 || VAR_5 == VAR_1) {
    FUNC_2(VAR_4, VAR_7, VAR_8);
    return 1;
   }
   FUNC_3("SQLGetCursorName");
   return 0;
  }

  case 128:
   FUNC_1(VAR_4, VAR_6->assume_utf8 ? 1 : 0);
   return 0;

  default:
   FUNC_4(VAR_6->einfo.last_err_msg, "Unknown Attribute");
   VAR_6->einfo.what = "getAttribute";
   FUNC_4(VAR_6->einfo.last_state, "IM001");
   return -1;
 }
}
