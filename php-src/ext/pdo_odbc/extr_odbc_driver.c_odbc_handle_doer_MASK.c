
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_4__ {int dbc; } ;
typedef TYPE_1__ pdo_odbc_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int SQLLEN ;
typedef scalar_t__ RETCODE ;
typedef int PDO_ODBC_HSTMT ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static zend_long FUNC_6(pdo_dbh_t *VAR_4, const char *VAR_5, size_t VAR_6)
{
 pdo_odbc_db_handle *VAR_7 = (pdo_odbc_db_handle *)VAR_4->driver_data;
 RETCODE VAR_8;
 SQLLEN VAR_9 = -1;
 PDO_ODBC_HSTMT VAR_10;

 VAR_8 = FUNC_0(VAR_0, VAR_7->dbc, &VAR_10);
 if (VAR_8 != VAR_2) {
  FUNC_5("SQLAllocHandle: STMT");
  return -1;
 }

 VAR_8 = FUNC_1(VAR_10, (char *)VAR_5, VAR_6);

 if (VAR_8 == VAR_1) {



  VAR_9 = 0;
  goto out;
 }

 if (VAR_8 != VAR_2 && VAR_8 != VAR_3) {
  FUNC_4("SQLExecDirect");
  goto out;
 }

 VAR_8 = FUNC_3(VAR_10, &VAR_9);
 if (VAR_8 != VAR_2 && VAR_8 != VAR_3) {
  FUNC_4("SQLRowCount");
  goto out;
 }
 if (VAR_9 == -1) {
  VAR_9 = 0;
 }
out:
 FUNC_2(VAR_0, VAR_10);
 return VAR_9;
}
