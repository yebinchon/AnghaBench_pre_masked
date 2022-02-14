
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dbc; } ;
typedef TYPE_1__ pdo_odbc_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; scalar_t__ auto_commit; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int SQLPOINTER ;
typedef scalar_t__ RETCODE ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_4)
{
 if (VAR_4->auto_commit) {

  RETCODE VAR_5;
  pdo_odbc_db_handle *VAR_6 = (pdo_odbc_db_handle *)VAR_4->driver_data;

  VAR_5 = FUNC_0(VAR_6->dbc, VAR_0, (SQLPOINTER)VAR_1, VAR_2);
  if (VAR_5 != VAR_3) {
   FUNC_1("SQLSetConnectAttr AUTOCOMMIT = OFF");
   return 0;
  }
 }
 return 1;
}
