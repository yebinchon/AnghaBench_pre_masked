
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
typedef TYPE_1__ pdo_dblib_db_handle ;
struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, pdo_dbh_t *VAR_2)
{
 pdo_dblib_db_handle *VAR_3 = (pdo_dblib_db_handle *)VAR_2->driver_data;

 if (VAR_0 == FUNC_0(VAR_3->link, VAR_1)) {
  return 0;
 }

 if (VAR_0 == FUNC_1(VAR_3->link)) {
  return 0;
 }

 return 1;
}
