
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tr; int isc_status; } ;
typedef TYPE_1__ pdo_firebird_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0)
{
 pdo_firebird_db_handle *VAR_1 = (pdo_firebird_db_handle *)VAR_0->driver_data;

 if (FUNC_1(VAR_1->isc_status, &VAR_1->tr)) {
  FUNC_0(VAR_0);
  return 0;
 }
 return 1;
}
