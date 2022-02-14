
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zend_long ;
struct TYPE_6__ {char* active_query_string; scalar_t__ supports_placeholders; int column_count; scalar_t__ row_count; int executed; scalar_t__ bound_params; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {int is_prepared; char* stmt_name; int * result; int * cols; int param_formats; int param_lengths; scalar_t__ param_values; int param_types; int query; scalar_t__ cursor_name; scalar_t__ current_row; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_pgsql_stmt ;
struct TYPE_8__ {int pgoid; int server; } ;
typedef TYPE_3__ pdo_pgsql_db_handle ;
typedef int pdo_pgsql_column ;
typedef int buf ;
typedef int PGresult ;
typedef int ExecStatusType ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,int ,int ,int ,char const**,int ,int ,int ) ;
 int * FUNC_4 (int ,char*,int ,char const**,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int ) ;
 int * FUNC_11 (int,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,int,char*) ;
 char* FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int FUNC_16 (char**,int ,char*,scalar_t__,...) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(pdo_stmt_t *VAR_1)
{
 pdo_pgsql_stmt *VAR_2 = (pdo_pgsql_stmt*)VAR_1->driver_data;
 pdo_pgsql_db_handle *VAR_3 = VAR_2->H;
 ExecStatusType VAR_4;


 if(VAR_2->result) {
  FUNC_0(VAR_2->result);
  VAR_2->result = ((void*)0);
 }

 VAR_2->current_row = 0;

 if (VAR_2->cursor_name) {
  char *VAR_5 = ((void*)0);

  if (VAR_2->is_prepared) {
   FUNC_16(&VAR_5, 0, "CLOSE %s", VAR_2->cursor_name);
   FUNC_0(FUNC_2(VAR_3->server, VAR_5));
   FUNC_12(VAR_5);
  }

  FUNC_16(&VAR_5, 0, "DECLARE %s SCROLL CURSOR WITH HOLD FOR %s", VAR_2->cursor_name, VAR_1->active_query_string);
  VAR_2->result = FUNC_2(VAR_3->server, VAR_5);
  FUNC_12(VAR_5);


  VAR_4 = FUNC_9(VAR_2->result);
  if (VAR_4 != 129 && VAR_4 != 128) {
   FUNC_13(VAR_1, VAR_4, FUNC_14(VAR_2->result));
   return 0;
  }
  FUNC_0(VAR_2->result);


  VAR_2->is_prepared = 1;


  FUNC_16(&VAR_5, 0, "FETCH FORWARD 0 FROM %s", VAR_2->cursor_name);
  VAR_2->result = FUNC_2(VAR_3->server, VAR_5);
  FUNC_12(VAR_5);
 } else if (VAR_2->stmt_name) {


  if (!VAR_2->is_prepared) {
stmt_retry:


   VAR_2->result = FUNC_8(VAR_3->server, VAR_2->stmt_name, VAR_2->query,
      VAR_1->bound_params ? FUNC_18(VAR_1->bound_params) : 0,
      VAR_2->param_types);
   VAR_4 = FUNC_9(VAR_2->result);
   switch (VAR_4) {
    case 129:
    case 128:

     VAR_2->is_prepared = 1;
     FUNC_0(VAR_2->result);
     break;
    default: {
     char *VAR_6 = FUNC_14(VAR_2->result);






     if (VAR_6 && !FUNC_17(VAR_6, "42P05")) {
      char VAR_7[100];
      PGresult *VAR_8;
      FUNC_15(VAR_7, sizeof(VAR_7), "DEALLOCATE %s", VAR_2->stmt_name);
      VAR_8 = FUNC_2(VAR_3->server, VAR_7);
      if (VAR_8) {
       FUNC_0(VAR_8);
      }
      goto stmt_retry;
     } else {
      FUNC_13(VAR_1, VAR_4, VAR_6);
      return 0;
     }
    }
   }
  }
  VAR_2->result = FUNC_4(VAR_3->server, VAR_2->stmt_name,
    VAR_1->bound_params ?
     FUNC_18(VAR_1->bound_params) :
     0,
    (const char**)VAR_2->param_values,
    VAR_2->param_lengths,
    VAR_2->param_formats,
    0);
 } else if (VAR_1->supports_placeholders == VAR_0) {

  VAR_2->result = FUNC_3(VAR_3->server, VAR_2->query,
    VAR_1->bound_params ? FUNC_18(VAR_1->bound_params) : 0,
    VAR_2->param_types,
    (const char**)VAR_2->param_values,
    VAR_2->param_lengths,
    VAR_2->param_formats,
    0);
 } else {

  VAR_2->result = FUNC_2(VAR_3->server, VAR_1->active_query_string);
 }
 VAR_4 = FUNC_9(VAR_2->result);

 if (VAR_4 != 129 && VAR_4 != 128) {
  FUNC_13(VAR_1, VAR_4, FUNC_14(VAR_2->result));
  return 0;
 }

 if (!VAR_1->executed && (!VAR_1->column_count || VAR_2->cols == ((void*)0))) {
  VAR_1->column_count = (int) FUNC_5(VAR_2->result);
  VAR_2->cols = FUNC_11(VAR_1->column_count, sizeof(pdo_pgsql_column));
 }

 if (VAR_4 == 129) {
  FUNC_10(VAR_1->row_count, FUNC_1(VAR_2->result));
  VAR_3->pgoid = FUNC_7(VAR_2->result);
 } else {
  VAR_1->row_count = (zend_long)FUNC_6(VAR_2->result);
 }

 return 1;
}
