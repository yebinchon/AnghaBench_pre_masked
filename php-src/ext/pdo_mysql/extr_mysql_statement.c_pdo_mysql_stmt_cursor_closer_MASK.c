
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_1__* H; scalar_t__ stmt; int * result; } ;
typedef TYPE_3__ pdo_mysql_stmt ;
struct TYPE_5__ {int server; } ;
typedef int MYSQL_RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(pdo_stmt_t *VAR_0)
{
 pdo_mysql_stmt *VAR_1 = (pdo_mysql_stmt*)VAR_0->driver_data;

 FUNC_0("pdo_mysql_stmt_cursor_closer");
 FUNC_1("stmt=%p", VAR_1->stmt);
 if (VAR_1->result) {
  FUNC_3(VAR_1->result);
  VAR_1->result = ((void*)0);
 }
 if (VAR_1->stmt) {
  int VAR_2;
  VAR_2 = FUNC_6(VAR_1->stmt);
  FUNC_2(VAR_2 ? 0 : 1);
 }

 while (FUNC_4(VAR_1->H->server)) {
  MYSQL_RES *VAR_3;
  if (FUNC_5(VAR_1->H->server) != 0) {
   break;
  }
  VAR_3 = FUNC_7(VAR_1->H->server);
  if (VAR_3) {
   FUNC_3(VAR_3);
  }
 }
 FUNC_2(1);
}
