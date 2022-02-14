
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
struct TYPE_10__ {int errcode; char const* file; int line; int * errmsg; } ;
struct TYPE_9__ {scalar_t__ stmt; TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
typedef TYPE_3__ pdo_mysql_error_info ;
struct TYPE_11__ {int server; TYPE_3__ einfo; } ;
typedef TYPE_4__ pdo_mysql_db_handle ;
typedef int pdo_error_type ;
struct TYPE_12__ {int methods; int is_persistent; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 void* FUNC_10 (char*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int,char*,int ,int,int *) ;

int FUNC_14(pdo_dbh_t *VAR_1, pdo_stmt_t *VAR_2, const char *VAR_3, int VAR_4)
{
 pdo_mysql_db_handle *VAR_5 = (pdo_mysql_db_handle *)VAR_1->driver_data;
 pdo_error_type *VAR_6;
 pdo_mysql_error_info *VAR_7;
 pdo_mysql_stmt *VAR_8 = ((void*)0);

 FUNC_0("_pdo_mysql_error");
 FUNC_2("file=%s line=%d", VAR_3, VAR_4);
 if (VAR_2) {
  VAR_8 = (pdo_mysql_stmt*)VAR_2->driver_data;
  VAR_6 = &VAR_2->error_code;
  VAR_7 = &VAR_8->einfo;
 } else {
  VAR_6 = &VAR_1->error_code;
  VAR_7 = &VAR_5->einfo;
 }

 if (VAR_8 && VAR_8->stmt) {
  VAR_7->errcode = FUNC_7(VAR_8->stmt);
 } else {
  VAR_7->errcode = FUNC_4(VAR_5->server);
 }

 VAR_7->file = VAR_3;
 VAR_7->line = VAR_4;

 if (VAR_7->errmsg) {
  FUNC_9(VAR_7->errmsg, VAR_1->is_persistent);
  VAR_7->errmsg = ((void*)0);
 }

 if (VAR_7->errcode) {
  if (VAR_7->errcode == 2014) {
   VAR_7->errmsg = FUNC_10(
    "Cannot execute queries while other unbuffered queries are active.  "
    "Consider using PDOStatement::fetchAll().  Alternatively, if your code "
    "is only ever going to run against mysql, you may enable query "
    "buffering by setting the PDO::MYSQL_ATTR_USE_BUFFERED_QUERY attribute.",
    VAR_1->is_persistent);
  } else if (VAR_7->errcode == 2057) {
   VAR_7->errmsg = FUNC_10(
    "A stored procedure returning result sets of different size was called. "
    "This is not supported by libmysql",
    VAR_1->is_persistent);

  } else {
   VAR_7->errmsg = FUNC_10(FUNC_5(VAR_5->server), VAR_1->is_persistent);
  }
 } else {
  FUNC_12(*VAR_6, VAR_0);
  FUNC_3(0);
 }

 if (VAR_8 && VAR_8->stmt) {
  FUNC_12(*VAR_6, FUNC_8(VAR_8->stmt));
 } else {
  FUNC_12(*VAR_6, FUNC_6(VAR_5->server));
 }

 if (!VAR_1->methods) {
  FUNC_1("Throwing exception");
  FUNC_13(FUNC_11(), VAR_7->errcode, "SQLSTATE[%s] [%d] %s",
    *VAR_6, VAR_7->errcode, VAR_7->errmsg);
 }

 FUNC_3(VAR_7->errcode);
}
