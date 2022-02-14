
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_long ;
struct TYPE_7__ {int column_count; scalar_t__ row_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {int * result; scalar_t__ stmt; int fields; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
struct TYPE_9__ {int server; scalar_t__ buffered; int emulate_prepare; } ;
typedef TYPE_3__ pdo_mysql_db_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int * FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(pdo_stmt_t *VAR_1)
{
 pdo_mysql_stmt *VAR_2 = (pdo_mysql_stmt*)VAR_1->driver_data;
 pdo_mysql_db_handle *VAR_3 = VAR_2->H;



 FUNC_0("pdo_mysql_stmt_next_rowset");
 FUNC_1("stmt=%p", VAR_2->stmt);
 if (VAR_2->stmt) {
  if (VAR_2->result) {
   VAR_1->column_count = (int)FUNC_7(VAR_2->result);
  }
  FUNC_10(VAR_2->stmt);
 }

 if (VAR_2->result) {
  FUNC_4(VAR_2->result);
  VAR_2->result = ((void*)0);
 }

 if (!FUNC_5(VAR_3->server)) {

  FUNC_2(0);
 }
 if (FUNC_6(VAR_3->server) > 0) {
  FUNC_16(VAR_1);
  FUNC_2(0);
 } else {
  FUNC_2(FUNC_17(VAR_1));
 }

}
