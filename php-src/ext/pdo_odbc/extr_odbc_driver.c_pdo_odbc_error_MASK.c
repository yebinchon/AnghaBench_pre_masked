
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int error_code; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {char* last_state; char* last_err_msg; char const* file; int line; char* what; int last_error; } ;
struct TYPE_9__ {scalar_t__ stmt; TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
typedef TYPE_3__ pdo_odbc_errinfo ;
struct TYPE_11__ {scalar_t__ env; scalar_t__ dbc; TYPE_3__ einfo; } ;
typedef TYPE_4__ pdo_odbc_db_handle ;
typedef int pdo_error_type ;
struct TYPE_12__ {int methods; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;
typedef int discard_buf ;
typedef size_t SQLSMALLINT ;
typedef scalar_t__ SQLRETURN ;
typedef int SQLINTEGER ;
typedef scalar_t__ SQLHANDLE ;
typedef scalar_t__ PDO_ODBC_HSTMT ;


 scalar_t__ FUNC_0 (size_t,scalar_t__,int ,char*,int *,char*,int,size_t*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,char*,int ,char*,int ,char*) ;

void FUNC_4(pdo_dbh_t *VAR_6, pdo_stmt_t *VAR_7, PDO_ODBC_HSTMT VAR_8, char *VAR_9, const char *VAR_10, int VAR_11)
{
 SQLRETURN VAR_12;
 SQLSMALLINT VAR_13 = 0;
 SQLHANDLE VAR_14;
 SQLSMALLINT VAR_15, VAR_16 = 1;
 pdo_odbc_db_handle *VAR_17 = (pdo_odbc_db_handle*)VAR_6->driver_data;
 pdo_odbc_errinfo *VAR_18 = &VAR_17->einfo;
 pdo_odbc_stmt *VAR_19 = ((void*)0);
 pdo_error_type *VAR_20 = &VAR_6->error_code;

 if (VAR_7) {
  VAR_19 = (pdo_odbc_stmt*)VAR_7->driver_data;

  VAR_18 = &VAR_19->einfo;
  VAR_20 = &VAR_7->error_code;
 }

 if (VAR_8 == VAR_3 && VAR_19) {
  VAR_8 = VAR_19->stmt;
 }

 if (VAR_8) {
  VAR_15 = VAR_2;
  VAR_14 = VAR_8;
 } else if (VAR_17->dbc) {
  VAR_15 = VAR_0;
  VAR_14 = VAR_17->dbc;
 } else {
  VAR_15 = VAR_1;
  VAR_14 = VAR_17->env;
 }

 VAR_12 = FUNC_0(VAR_15, VAR_14, VAR_16++, VAR_18->last_state, &VAR_18->last_error,
   VAR_18->last_err_msg, sizeof(VAR_18->last_err_msg)-1, &VAR_13);

 if (VAR_12 != VAR_4 && VAR_12 != VAR_5) {
  VAR_13 = 0;
 }

 VAR_18->last_err_msg[VAR_13] = '\0';
 VAR_18->file = VAR_10;
 VAR_18->line = VAR_11;
 VAR_18->what = VAR_9;

 FUNC_2(*VAR_20, VAR_18->last_state);

 if (!VAR_6->methods) {
  FUNC_3(FUNC_1(), VAR_18->last_error, "SQLSTATE[%s] %s: %d %s",
    *VAR_20, VAR_9, VAR_18->last_error, VAR_18->last_err_msg);
 }






 while (VAR_12 == VAR_4 || VAR_12 == VAR_5) {
  char VAR_21[6];
  char VAR_22[1024];
  SQLINTEGER VAR_23;
  VAR_12 = FUNC_0(VAR_15, VAR_14, VAR_16++, VAR_21, &VAR_23,
    VAR_22, sizeof(VAR_22)-1, &VAR_13);
 }

}
