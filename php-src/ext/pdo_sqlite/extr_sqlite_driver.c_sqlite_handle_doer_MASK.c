
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ pdo_sqlite_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int *,char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static zend_long FUNC_4(pdo_dbh_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
 pdo_sqlite_db_handle *VAR_4 = (pdo_sqlite_db_handle *)VAR_1->driver_data;
 char *VAR_5 = ((void*)0);

 if (FUNC_2(VAR_4->db, VAR_2, ((void*)0), ((void*)0), &VAR_5) != VAR_0) {
  FUNC_0(VAR_1);
  if (VAR_5)
   FUNC_3(VAR_5);

  return -1;
 } else {
  return FUNC_1(VAR_4->db);
 }
}
