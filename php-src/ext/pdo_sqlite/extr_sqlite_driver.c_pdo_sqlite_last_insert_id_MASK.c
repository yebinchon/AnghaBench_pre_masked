
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; } ;
typedef TYPE_1__ pdo_sqlite_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(pdo_dbh_t *VAR_0, const char *VAR_1, size_t *VAR_2)
{
 pdo_sqlite_db_handle *VAR_3 = (pdo_sqlite_db_handle *)VAR_0->driver_data;
 char *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_3->db));
 *VAR_2 = FUNC_2(VAR_4);
 return VAR_4;
}
