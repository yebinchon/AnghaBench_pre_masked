
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdo_sqlite_db_handle ;
struct TYPE_3__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_dbh_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(pdo_dbh_t *VAR_0)
{
 pdo_sqlite_db_handle *VAR_1 = (pdo_sqlite_db_handle *)VAR_0->driver_data;


 if (VAR_1) {
  FUNC_0(VAR_1);
 }
}
