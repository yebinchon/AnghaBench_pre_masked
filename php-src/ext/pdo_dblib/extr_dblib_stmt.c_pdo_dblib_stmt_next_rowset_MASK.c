
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dbh; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_9__ {int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
typedef scalar_t__ RETCODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,char*,char*) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_3)
{
 pdo_dblib_stmt *VAR_4 = (pdo_dblib_stmt*)VAR_3->driver_data;
 pdo_dblib_db_handle *VAR_5 = VAR_4->H;
 RETCODE VAR_6 = VAR_2;




 while (VAR_1 != VAR_6) {
  VAR_6 = FUNC_0(VAR_5->link);

  if (VAR_0 == VAR_6) {
   FUNC_2(VAR_3->dbh, VAR_3, "HY000", "PDO_DBLIB: dbnextrow() returned FAIL");
   return 0;
  }
 }

 return FUNC_1(VAR_3);
}
