
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(pdo_dbh_t *VAR_1)
{
 pdo_pgsql_db_handle *VAR_2;

 VAR_2 = (pdo_pgsql_db_handle *)VAR_1->driver_data;

 return FUNC_0(VAR_2->server) > VAR_0;
}
