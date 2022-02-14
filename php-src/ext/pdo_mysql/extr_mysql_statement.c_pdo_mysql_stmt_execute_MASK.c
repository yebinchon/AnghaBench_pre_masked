
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int active_query_stringlen; int active_query_string; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_9__ {int * result; scalar_t__ stmt; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
struct TYPE_10__ {int server; } ;
typedef TYPE_3__ pdo_mysql_db_handle ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(pdo_stmt_t *VAR_0)
{
 pdo_mysql_stmt *VAR_1 = (pdo_mysql_stmt*)VAR_0->driver_data;
 pdo_mysql_db_handle *VAR_2 = VAR_1->H;
 FUNC_0("pdo_mysql_stmt_execute");
 FUNC_1("stmt=%p", VAR_1->stmt);

 if (VAR_1->stmt) {
  FUNC_2(FUNC_7(VAR_0));
 }


 if (VAR_1->result) {
  FUNC_3(VAR_1->result);
  VAR_1->result = ((void*)0);
 }

 if (FUNC_4(VAR_2->server, VAR_0->active_query_string, VAR_0->active_query_stringlen) != 0) {
  FUNC_5(VAR_0);
  FUNC_2(0);
 }

 FUNC_2(FUNC_6(VAR_0));
}
