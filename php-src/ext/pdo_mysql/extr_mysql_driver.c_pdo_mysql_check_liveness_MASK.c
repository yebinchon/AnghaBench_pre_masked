
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int server; } ;
typedef TYPE_1__ pdo_mysql_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_2)
{
 pdo_mysql_db_handle *VAR_3 = (pdo_mysql_db_handle *)VAR_2->driver_data;

 FUNC_0("pdo_mysql_check_liveness");
 FUNC_1("dbh=%p", VAR_2);

 if (FUNC_3(VAR_3->server)) {
  FUNC_2(VAR_0);
 }
 FUNC_2(VAR_1);
}
