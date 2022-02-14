
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ server; } ;
typedef TYPE_1__ pdo_mysql_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(pdo_dbh_t *VAR_0)
{
 pdo_mysql_db_handle *VAR_1 = (pdo_mysql_db_handle *)VAR_0->driver_data;

 FUNC_0("pdo_mysql_request_shutdown");
 FUNC_1("dbh=%p", VAR_0);





}
