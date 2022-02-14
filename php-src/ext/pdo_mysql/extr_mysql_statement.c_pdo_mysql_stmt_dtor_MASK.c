
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int column_count; int database_object_handle; TYPE_1__* dbh; scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_stmt_t ;
struct TYPE_11__ {int * errmsg; } ;
struct TYPE_14__ {scalar_t__ current_data; int * stmt; TYPE_3__* H; struct TYPE_14__* out_length; struct TYPE_14__* out_null; struct TYPE_14__* bound_result; struct TYPE_14__* in_length; struct TYPE_14__* in_null; struct TYPE_14__* params; TYPE_2__ einfo; int * result; } ;
typedef TYPE_5__ pdo_mysql_stmt ;
struct TYPE_15__ {int * object_buckets; } ;
struct TYPE_12__ {int server; } ;
struct TYPE_10__ {int is_persistent; } ;
typedef int MYSQL_RES ;


 TYPE_9__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 int VAR_1 ;
 int FUNC_15 (TYPE_5__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;

__attribute__((used)) static int FUNC_18(pdo_stmt_t *VAR_2)
{
 pdo_mysql_stmt *VAR_3 = (pdo_mysql_stmt*)VAR_2->driver_data;

 FUNC_3("pdo_mysql_stmt_dtor");
 FUNC_4("stmt=%p", VAR_3->stmt);
 if (VAR_3->result) {

  FUNC_11(VAR_3->result);
  VAR_3->result = ((void*)0);
 }
 if (VAR_3->einfo.errmsg) {
  FUNC_17(VAR_3->einfo.errmsg, VAR_2->dbh->is_persistent);
  VAR_3->einfo.errmsg = ((void*)0);
 }
 if (VAR_3->stmt) {
  FUNC_16(VAR_3->stmt);
  VAR_3->stmt = ((void*)0);
 }


 if (VAR_3->params) {
  FUNC_9(VAR_3->params);
 }
 if (VAR_3->in_null) {
  FUNC_9(VAR_3->in_null);
 }
 if (VAR_3->in_length) {
  FUNC_9(VAR_3->in_length);
 }

 if (VAR_3->bound_result)
 {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_2->column_count; VAR_4++) {
   FUNC_15(VAR_3->bound_result[VAR_4]);
  }

  FUNC_9(VAR_3->bound_result);
  FUNC_9(VAR_3->out_null);
  FUNC_9(VAR_3->out_length);
 }


 if (!FUNC_6(VAR_2->database_object_handle)
  && FUNC_1(FUNC_0(VAR_1).object_buckets[FUNC_8(VAR_2->database_object_handle)])
  && (!(FUNC_2(FUNC_7(VAR_2->database_object_handle)) & VAR_0))) {
  while (FUNC_12(VAR_3->H->server)) {
   MYSQL_RES *VAR_5;
   if (FUNC_13(VAR_3->H->server) != 0) {
    break;
   }

   VAR_5 = FUNC_14(VAR_3->H->server);
   if (VAR_5) {
    FUNC_11(VAR_5);
   }
  }
 }







 FUNC_9(VAR_3);
 FUNC_5(1);
}
