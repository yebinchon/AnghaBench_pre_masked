
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_long ;
struct TYPE_5__ {int pgoid; int server; } ;
typedef TYPE_1__ pdo_pgsql_db_handle ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ pdo_dbh_t ;
typedef int PGresult ;
typedef scalar_t__ ExecStatusType ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int *) ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static zend_long FUNC_9(pdo_dbh_t *VAR_3, const char *VAR_4, size_t VAR_5)
{
 pdo_pgsql_db_handle *VAR_6 = (pdo_pgsql_db_handle *)VAR_3->driver_data;
 PGresult *VAR_7;
 zend_long VAR_8 = 1;
 ExecStatusType VAR_9;

 if (!(VAR_7 = FUNC_2(VAR_6->server, VAR_4))) {

  FUNC_7(VAR_3, VAR_1, ((void*)0));
  return -1;
 }
 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 != VAR_0 && VAR_9 != VAR_2) {
  FUNC_7(VAR_3, VAR_9, FUNC_8(VAR_7));
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_6->pgoid = FUNC_3(VAR_7);
 if (VAR_9 == VAR_0) {
  FUNC_5(VAR_8, FUNC_1(VAR_7));
 } else {
  VAR_8 = FUNC_6(0);
 }
 FUNC_0(VAR_7);

 return VAR_8;
}
