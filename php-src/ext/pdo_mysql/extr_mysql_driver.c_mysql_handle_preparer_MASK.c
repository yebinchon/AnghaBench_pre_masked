
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ulong ;
struct TYPE_9__ {int supports_placeholders; int error_code; int * methods; TYPE_2__* driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {int num_params; int max_length; void* in_length; void* in_null; int * params; scalar_t__ params_given; int stmt; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
struct TYPE_11__ {int server; scalar_t__ emulate_prepare; } ;
typedef TYPE_3__ pdo_mysql_db_handle ;
struct TYPE_12__ {int alloc_own_columns; int error_code; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;
typedef int my_bool ;
typedef int MYSQL_BIND ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char const*,size_t) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_1__*,char*,size_t,char**,size_t*) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(pdo_dbh_t *VAR_4, const char *VAR_5, size_t VAR_6, pdo_stmt_t *VAR_7, zval *VAR_8)
{
 pdo_mysql_db_handle *VAR_9 = (pdo_mysql_db_handle *)VAR_4->driver_data;
 pdo_mysql_stmt *VAR_10 = FUNC_3(1, sizeof(pdo_mysql_stmt));
 char *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 FUNC_0("mysql_handle_preparer");
 FUNC_1("dbh=%p", VAR_4);
 FUNC_1("sql=%.*s", (int)VAR_6, VAR_5);

 VAR_10->H = VAR_9;
 VAR_7->driver_data = VAR_10;
 VAR_7->methods = &VAR_3;

 if (VAR_9->emulate_prepare) {
  goto end;
 }

 VAR_14 = FUNC_6(VAR_9->server);
 if (VAR_14 < 40100) {
  goto fallback;
 }
 VAR_7->supports_placeholders = VAR_2;
 VAR_13 = FUNC_12(VAR_7, (char*)VAR_5, VAR_6, &VAR_11, &VAR_12);

 if (VAR_13 == 1) {

  VAR_5 = VAR_11;
  VAR_6 = VAR_12;
 } else if (VAR_13 == -1) {

  FUNC_13(VAR_4->error_code, VAR_7->error_code);
  FUNC_2(0);
 }

 if (!(VAR_10->stmt = FUNC_7(VAR_9->server))) {
  FUNC_11(VAR_4);
  if (VAR_11) {
   FUNC_4(VAR_11);
  }
  FUNC_2(0);
 }

 if (FUNC_9(VAR_10->stmt, VAR_5, VAR_6)) {


  if (FUNC_5(VAR_9->server) == 1295) {
   if (VAR_11) {
    FUNC_4(VAR_11);
   }
   goto fallback;
  }
  FUNC_11(VAR_4);
  if (VAR_11) {
   FUNC_4(VAR_11);
  }
  FUNC_2(0);
 }
 if (VAR_11) {
  FUNC_4(VAR_11);
 }

 VAR_10->num_params = FUNC_8(VAR_10->stmt);

 if (VAR_10->num_params) {
  VAR_10->params_given = 0;



  VAR_10->params = FUNC_3(VAR_10->num_params, sizeof(MYSQL_BIND));
  VAR_10->in_null = FUNC_3(VAR_10->num_params, sizeof(my_bool));
  VAR_10->in_length = FUNC_3(VAR_10->num_params, sizeof(zend_ulong));

 }
 VAR_4->alloc_own_columns = 1;

 VAR_10->max_length = FUNC_10(VAR_8, VAR_0, 0);

 FUNC_2(1);

fallback:
end:
 VAR_7->supports_placeholders = VAR_1;

 FUNC_2(1);
}
