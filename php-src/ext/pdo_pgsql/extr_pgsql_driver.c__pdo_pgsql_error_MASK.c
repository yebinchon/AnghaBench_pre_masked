
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int error_code; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {int errcode; char const* file; int line; int * errmsg; } ;
typedef TYPE_2__ pdo_pgsql_error_info ;
struct TYPE_9__ {int server; TYPE_2__ einfo; } ;
typedef TYPE_3__ pdo_pgsql_db_handle ;
typedef int pdo_error_type ;
struct TYPE_10__ {int methods; int is_persistent; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;


 char* FUNC_0 (int ) ;
 int * FUNC_1 (char*,int ) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,int,char*,int ,int,int *) ;

int FUNC_8(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, int VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5, int VAR_6)
{
 pdo_pgsql_db_handle *VAR_7 = (pdo_pgsql_db_handle *)VAR_0->driver_data;
 pdo_error_type *VAR_8 = VAR_1 ? &VAR_1->error_code : &VAR_0->error_code;
 pdo_pgsql_error_info *VAR_9 = &VAR_7->einfo;
 char *VAR_10 = FUNC_0(VAR_7->server);

 VAR_9->errcode = VAR_2;
 VAR_9->file = VAR_5;
 VAR_9->line = VAR_6;

 if (VAR_9->errmsg) {
  FUNC_3(VAR_9->errmsg, VAR_0->is_persistent);
  VAR_9->errmsg = ((void*)0);
 }

 if (VAR_3 == ((void*)0) || FUNC_6(VAR_3) >= sizeof(pdo_error_type)) {
  FUNC_5(*VAR_8, "HY000");
 }
 else {
  FUNC_5(*VAR_8, VAR_3);
 }

 if (VAR_4) {
  VAR_9->errmsg = FUNC_2(VAR_4);
 }
 else if (VAR_10) {
  VAR_9->errmsg = FUNC_1(VAR_10, VAR_0->is_persistent);
 }

 if (!VAR_0->methods) {
  FUNC_7(FUNC_4(), VAR_9->errcode, "SQLSTATE[%s] [%d] %s",
    *VAR_8, VAR_9->errcode, VAR_9->errmsg);
 }

 return VAR_2;
}
