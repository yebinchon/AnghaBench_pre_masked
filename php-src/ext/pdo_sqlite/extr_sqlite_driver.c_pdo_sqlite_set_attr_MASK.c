
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
struct TYPE_4__ {int db; } ;
typedef TYPE_1__ pdo_sqlite_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(pdo_dbh_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 pdo_sqlite_db_handle *VAR_3 = (pdo_sqlite_db_handle *)VAR_0->driver_data;

 switch (VAR_1) {
  case 129:
   FUNC_0(VAR_3->db, FUNC_2(VAR_2) * 1000);
   return 1;
  case 128:
   FUNC_1(VAR_3->db, FUNC_2(VAR_2));
   return 1;
 }
 return 0;
}
