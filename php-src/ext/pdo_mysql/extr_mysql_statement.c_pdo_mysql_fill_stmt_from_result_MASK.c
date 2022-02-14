
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* zend_long ;
struct TYPE_6__ {int column_count; void* row_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {int * result; int fields; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
struct TYPE_8__ {int server; int buffered; } ;
typedef TYPE_3__ pdo_mysql_db_handle ;
typedef scalar_t__ my_ulonglong ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(pdo_stmt_t *VAR_0)
{
 pdo_mysql_stmt *VAR_1 = (pdo_mysql_stmt*)VAR_0->driver_data;
 pdo_mysql_db_handle *VAR_2 = VAR_1->H;
 my_ulonglong VAR_3;
 FUNC_0("pdo_mysql_fill_stmt_from_result");

 VAR_3 = FUNC_2(VAR_2->server);
 if (VAR_3 == (my_ulonglong)-1) {


  if (!VAR_2->buffered) {
   VAR_1->result = FUNC_7(VAR_2->server);
  } else {
   VAR_1->result = FUNC_6(VAR_2->server);
  }
  if (((void*)0) == VAR_1->result) {
   FUNC_8(VAR_0);
   FUNC_1(0);
  }

  VAR_0->row_count = (zend_long) FUNC_5(VAR_1->result);
  VAR_0->column_count = (int) FUNC_4(VAR_1->result);
  VAR_1->fields = FUNC_3(VAR_1->result);
 } else {

  VAR_0->row_count = (zend_long) VAR_3;
 }

 FUNC_1(1);
}
