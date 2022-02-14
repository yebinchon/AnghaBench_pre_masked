
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int server; } ;
typedef TYPE_1__ pdo_mysql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(pdo_dbh_t *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 pdo_mysql_db_handle *VAR_3 = (pdo_mysql_db_handle *)VAR_0->driver_data;
 char *VAR_4 = FUNC_3(FUNC_2(VAR_3->server));
 FUNC_0("pdo_mysql_last_insert_id");
 *VAR_2 = FUNC_4(VAR_4);
 FUNC_1(VAR_4);
}
