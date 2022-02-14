
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* errmsg; } ;
struct TYPE_8__ {TYPE_1__ einfo; scalar_t__ server; } ;
typedef TYPE_2__ pdo_mysql_db_handle ;
struct TYPE_9__ {int * driver_data; int is_persistent; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(pdo_dbh_t *VAR_0)
{
 pdo_mysql_db_handle *VAR_1 = (pdo_mysql_db_handle *)VAR_0->driver_data;

 FUNC_0("mysql_handle_closer");
 FUNC_1("dbh=%p", VAR_0);
 if (VAR_1) {
  if (VAR_1->server) {
   FUNC_3(VAR_1->server);
  }
  if (VAR_1->einfo.errmsg) {
   FUNC_4(VAR_1->einfo.errmsg, VAR_0->is_persistent);
  }
  FUNC_4(VAR_1, VAR_0->is_persistent);
  VAR_0->driver_data = ((void*)0);
 }
 FUNC_2(0);
}
