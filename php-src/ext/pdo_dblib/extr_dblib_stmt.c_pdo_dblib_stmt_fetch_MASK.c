
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_6__ {int dbh; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_8__ {int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
typedef enum pdo_fetch_orientation { ____Placeholder_pdo_fetch_orientation } pdo_fetch_orientation ;
typedef scalar_t__ RETCODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,char*,char*) ;

__attribute__((used)) static int FUNC_2(pdo_stmt_t *VAR_2,
 enum pdo_fetch_orientation VAR_3, zend_long VAR_4)
{

 RETCODE VAR_5;

 pdo_dblib_stmt *VAR_6 = (pdo_dblib_stmt*)VAR_2->driver_data;
 pdo_dblib_db_handle *VAR_7 = VAR_6->H;

 VAR_5 = FUNC_0(VAR_7->link);

 if (VAR_0 == VAR_5) {
  FUNC_1(VAR_2->dbh, VAR_2, "HY000", "PDO_DBLIB: dbnextrow() returned FAIL");
  return 0;
 }

 if(VAR_1 == VAR_5) {
  return 0;
 }

 return 1;
}
