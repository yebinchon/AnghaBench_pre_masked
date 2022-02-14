
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int PGresult ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, pdo_dbh_t *VAR_2)
{
 pdo_pgsql_db_handle *VAR_3 = (pdo_pgsql_db_handle *)VAR_2->driver_data;
 PGresult *VAR_4;
 int VAR_5 = 1;

 VAR_4 = FUNC_1(VAR_3->server, VAR_1);

 if (FUNC_2(VAR_4) != VAR_0) {
  FUNC_3(VAR_2, FUNC_2(VAR_4), FUNC_4(VAR_4));
  VAR_5 = 0;
 }

 FUNC_0(VAR_4);
 return VAR_5;
}
