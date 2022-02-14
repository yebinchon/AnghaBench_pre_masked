
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef void* zend_bool ;
struct TYPE_4__ {void* disable_prepares; void* emulate_prepares; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;




 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(pdo_dbh_t *VAR_0, zend_long VAR_1, zval *VAR_2)
{
 zend_bool VAR_3 = FUNC_0(VAR_2)? 1 : 0;
 pdo_pgsql_db_handle *VAR_4 = (pdo_pgsql_db_handle *)VAR_0->driver_data;

 switch (VAR_1) {
  case 129:
   VAR_4->emulate_prepares = VAR_3;
   return 1;
  case 128:
   VAR_4->disable_prepares = VAR_3;
   return 1;
  default:
   return 0;
 }
}
