
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int column_count; int row_count; int dbh; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_8__ {int link; scalar_t__ skip_empty_rowsets; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
typedef scalar_t__ RETCODE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,char*,char*) ;

__attribute__((used)) static int FUNC_4(pdo_stmt_t *VAR_3)
{
 pdo_dblib_stmt *VAR_4 = (pdo_dblib_stmt*)VAR_3->driver_data;
 pdo_dblib_db_handle *VAR_5 = VAR_4->H;
 RETCODE VAR_6;
 int VAR_7;

 do {
  VAR_6 = FUNC_2(VAR_5->link);
  VAR_7 = FUNC_1(VAR_5->link);
 } while (VAR_5->skip_empty_rowsets && VAR_7 <= 0 && VAR_6 == VAR_2);


 if (VAR_0 == VAR_6) {
  FUNC_3(VAR_3->dbh, VAR_3, "HY000", "PDO_DBLIB: dbresults() returned FAIL");
  return 0;
 }

 if (VAR_1 == VAR_6) {
  return 0;
 }

 if (VAR_5->skip_empty_rowsets && VAR_7 <= 0) {
  return 0;
 }

 VAR_3->row_count = FUNC_0(VAR_5->link);
 VAR_3->column_count = VAR_7;

 return 1;
}
