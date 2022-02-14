
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_6__ {int row_count; int error_code; int executed; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {int exhausted; scalar_t__ statement_type; int out_sqlda; int stmt; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_firebird_stmt ;
struct TYPE_8__ {char* last_app_error; scalar_t__* isc_status; } ;
typedef TYPE_3__ pdo_firebird_db_handle ;
typedef enum pdo_fetch_orientation { ____Placeholder_pdo_fetch_orientation } pdo_fetch_orientation ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int *,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(pdo_stmt_t *VAR_2,
 enum pdo_fetch_orientation VAR_3, zend_long VAR_4)
{
 pdo_firebird_stmt *VAR_5 = (pdo_firebird_stmt*)VAR_2->driver_data;
 pdo_firebird_db_handle *VAR_6 = VAR_5->H;

 if (!VAR_2->executed) {
  FUNC_2(VAR_2->error_code, "HY000");
  VAR_6->last_app_error = "Cannot fetch from a closed cursor";
 } else if (!VAR_5->exhausted) {
  if (VAR_5->statement_type == VAR_1) {
   VAR_2->row_count = 1;
   VAR_5->exhausted = 1;
   return 1;
  }
  if (FUNC_1(VAR_6->isc_status, &VAR_5->stmt, VAR_0, &VAR_5->out_sqlda)) {
   if (VAR_6->isc_status[0] && VAR_6->isc_status[1]) {
    FUNC_0(VAR_2);
   }
   VAR_5->exhausted = 1;
   return 0;
  }
  VAR_2->row_count++;
  return 1;
 }
 return 0;
}
