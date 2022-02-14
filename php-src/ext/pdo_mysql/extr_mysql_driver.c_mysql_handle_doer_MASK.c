
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_6__ {scalar_t__ errcode; } ;
struct TYPE_7__ {int server; TYPE_1__ einfo; } ;
typedef TYPE_2__ pdo_mysql_db_handle ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_dbh_t ;
typedef scalar_t__ my_ulonglong ;
typedef int MYSQL_RES ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char const*,size_t) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static zend_long FUNC_10(pdo_dbh_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
 pdo_mysql_db_handle *VAR_3 = (pdo_mysql_db_handle *)VAR_0->driver_data;
 FUNC_0("mysql_handle_doer");
 FUNC_1("dbh=%p", VAR_0);
 FUNC_1("sql=%.*s", (int)VAR_2, VAR_1);

 if (FUNC_7(VAR_3->server, VAR_1, VAR_2)) {
  FUNC_9(VAR_0);
  FUNC_2(-1);
 } else {
  my_ulonglong VAR_4 = FUNC_3(VAR_3->server);
  if (VAR_4 == (my_ulonglong) -1) {
   FUNC_9(VAR_0);
   FUNC_2(VAR_3->einfo.errcode ? -1 : 0);
  } else {


   MYSQL_RES* VAR_5;
   while (FUNC_5(VAR_3->server)) {
    if (FUNC_6(VAR_3->server)) {
     FUNC_2(1);
    }
    VAR_5 = FUNC_8(VAR_3->server);
    if (VAR_5) {
     FUNC_4(VAR_5);
    }
   }
   FUNC_2((int)VAR_4);
  }
 }
}
