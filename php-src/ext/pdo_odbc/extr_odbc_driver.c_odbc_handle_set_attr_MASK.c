
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_5__ {char* what; int last_state; int last_err_msg; } ;
struct TYPE_6__ {TYPE_1__ einfo; int assume_utf8; } ;
typedef TYPE_2__ pdo_odbc_db_handle ;
struct TYPE_7__ {scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_dbh_t ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 pdo_odbc_db_handle *VAR_3 = (pdo_odbc_db_handle *)VAR_0->driver_data;
 switch (VAR_1) {
  case 128:
   VAR_3->assume_utf8 = FUNC_1(VAR_2);
   return 1;
  default:
   FUNC_0(VAR_3->einfo.last_err_msg, "Unknown Attribute");
   VAR_3->einfo.what = "setAttribute";
   FUNC_0(VAR_3->einfo.last_state, "IM001");
   return 0;
 }
}
