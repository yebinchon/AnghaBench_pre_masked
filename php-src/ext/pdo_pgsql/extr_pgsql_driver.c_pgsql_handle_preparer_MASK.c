
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {char* named_rewrite_template; int error_code; int supports_placeholders; int * methods; TYPE_2__* driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {char* query; scalar_t__ stmt_name; scalar_t__ cursor_name; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_pgsql_stmt ;
struct TYPE_11__ {int emulate_prepares; int disable_prepares; int stmt_counter; int server; scalar_t__ disable_native_prepares; } ;
typedef TYPE_3__ pdo_pgsql_db_handle ;
struct TYPE_12__ {int error_code; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_1__*,char*,size_t,char**,size_t*) ;
 int VAR_7 ;
 int FUNC_6 (scalar_t__*,int ,char*,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(pdo_dbh_t *VAR_8, const char *VAR_9, size_t VAR_10, pdo_stmt_t *VAR_11, zval *VAR_12)
{
 pdo_pgsql_db_handle *VAR_13 = (pdo_pgsql_db_handle *)VAR_8->driver_data;
 pdo_pgsql_stmt *VAR_14 = FUNC_1(1, sizeof(pdo_pgsql_stmt));
 int VAR_15;
 int VAR_16;
 char *VAR_17 = ((void*)0);
 size_t VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;

 VAR_14->H = VAR_13;
 VAR_11->driver_data = VAR_14;
 VAR_11->methods = &VAR_7;

 VAR_15 = FUNC_4(VAR_12, VAR_0,
  VAR_2) == VAR_3;

 if (VAR_15) {
  if (VAR_14->cursor_name) {
   FUNC_2(VAR_14->cursor_name);
  }
  FUNC_6(&VAR_14->cursor_name, 0, "pdo_crsr_%08x", ++VAR_13->stmt_counter);
  VAR_19 = 1;
 } else if (VAR_12) {
  if (FUNC_4(VAR_12, VAR_1, VAR_13->emulate_prepares) == 1) {
   VAR_19 = 1;
  }
  if (FUNC_4(VAR_12, VAR_4, VAR_13->disable_prepares) == 1) {
   VAR_20 = 1;
  }
 } else {
  VAR_19 = VAR_13->disable_native_prepares || VAR_13->emulate_prepares;
  VAR_20 = VAR_13->disable_prepares;
 }

 if (!VAR_19 && FUNC_0(VAR_13->server) <= 2) {
  VAR_19 = 1;
 }

 if (VAR_19) {
  VAR_11->supports_placeholders = VAR_6;
 } else {
  VAR_11->supports_placeholders = VAR_5;
  VAR_11->named_rewrite_template = "$%d";
 }

 VAR_16 = FUNC_5(VAR_11, (char*)VAR_9, VAR_10, &VAR_17, &VAR_18);

 if (VAR_16 == -1) {

  FUNC_7(VAR_8->error_code, VAR_11->error_code);
  return 0;
 } else if (VAR_16 == 1) {

  VAR_14->query = VAR_17;
 } else {
  VAR_14->query = FUNC_3(VAR_9);
 }

 if (!VAR_19 && !VAR_20) {


  FUNC_6(&VAR_14->stmt_name, 0, "pdo_stmt_%08x", ++VAR_13->stmt_counter);
 }

 return 1;
}
