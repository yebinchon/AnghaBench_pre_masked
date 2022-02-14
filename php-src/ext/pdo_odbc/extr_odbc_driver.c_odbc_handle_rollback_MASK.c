
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dbc; } ;
typedef TYPE_1__ pdo_odbc_db_handle ;
struct TYPE_5__ {scalar_t__ auto_commit; scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int SQLPOINTER ;
typedef scalar_t__ RETCODE ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_7)
{
 pdo_odbc_db_handle *VAR_8 = (pdo_odbc_db_handle *)VAR_7->driver_data;
 RETCODE VAR_9;

 VAR_9 = FUNC_0(VAR_2, VAR_8->dbc, VAR_4);

 if (VAR_9 != VAR_5) {
  FUNC_2("SQLEndTran: Rollback");

  if (VAR_9 != VAR_6) {
   return 0;
  }
 }
 if (VAR_7->auto_commit && VAR_8->dbc) {

  VAR_9 = FUNC_1(VAR_8->dbc, VAR_0, (SQLPOINTER)VAR_1, VAR_3);
  if (VAR_9 != VAR_5) {
   FUNC_2("SQLSetConnectAttr AUTOCOMMIT = ON");
   return 0;
  }
 }

 return 1;
}
