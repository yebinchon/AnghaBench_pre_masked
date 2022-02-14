
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_4)
{
 pdo_pgsql_db_handle *VAR_5 = (pdo_pgsql_db_handle *)VAR_4->driver_data;
 if (FUNC_1(VAR_5->server) == VAR_0) {
  FUNC_0(VAR_5->server);
 }
 return (FUNC_1(VAR_5->server) == VAR_1) ? VAR_3 : VAR_2;
}
