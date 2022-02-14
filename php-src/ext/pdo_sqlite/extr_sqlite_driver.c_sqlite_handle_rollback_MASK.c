
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int db; } ;
typedef TYPE_1__ pdo_sqlite_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int *,char**) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_1)
{
 pdo_sqlite_db_handle *VAR_2 = (pdo_sqlite_db_handle *)VAR_1->driver_data;
 char *VAR_3 = ((void*)0);

 if (FUNC_1(VAR_2->db, "ROLLBACK", ((void*)0), ((void*)0), &VAR_3) != VAR_0) {
  FUNC_0(VAR_1);
  if (VAR_3)
   FUNC_2(VAR_3);
  return 0;
 }
 return 1;
}
