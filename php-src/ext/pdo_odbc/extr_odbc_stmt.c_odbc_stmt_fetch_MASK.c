
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_4__ {int error_code; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int stmt; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
typedef enum pdo_fetch_orientation { ____Placeholder_pdo_fetch_orientation } pdo_fetch_orientation ;
typedef int SQLSMALLINT ;
typedef scalar_t__ RETCODE ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_9,
 enum pdo_fetch_orientation VAR_10, zend_long VAR_11)
{
 RETCODE VAR_12;
 SQLSMALLINT VAR_13;
 pdo_odbc_stmt *VAR_14 = (pdo_odbc_stmt*)VAR_9->driver_data;

 switch (VAR_10) {
  case 130: VAR_13 = VAR_3; break;
  case 129: VAR_13 = VAR_4; break;
  case 132: VAR_13 = VAR_1; break;
  case 131: VAR_13 = VAR_2; break;
  case 133: VAR_13 = VAR_0; break;
  case 128: VAR_13 = VAR_5; break;
  default:
   FUNC_2(VAR_9->error_code, "HY106");
   return 0;
 }
 VAR_12 = FUNC_0(VAR_14->stmt, VAR_13, VAR_11);

 if (VAR_12 == VAR_7) {
  return 1;
 }
 if (VAR_12 == VAR_8) {
  FUNC_1("SQLFetchScroll");
  return 1;
 }

 if (VAR_12 == VAR_6) {

  return 0;
 }

 FUNC_1("SQLFetchScroll");

 return 0;
}
