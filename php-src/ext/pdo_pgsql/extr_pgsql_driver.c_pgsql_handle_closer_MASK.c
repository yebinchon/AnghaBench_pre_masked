
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* errmsg; } ;
struct TYPE_7__ {TYPE_1__ einfo; int * server; } ;
typedef TYPE_2__ pdo_pgsql_db_handle ;
struct TYPE_8__ {int * driver_data; int is_persistent; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0)
{
 pdo_pgsql_db_handle *VAR_1 = (pdo_pgsql_db_handle *)VAR_0->driver_data;
 if (VAR_1) {
  if (VAR_1->server) {
   FUNC_0(VAR_1->server);
   VAR_1->server = ((void*)0);
  }
  if (VAR_1->einfo.errmsg) {
   FUNC_1(VAR_1->einfo.errmsg, VAR_0->is_persistent);
   VAR_1->einfo.errmsg = ((void*)0);
  }
  FUNC_1(VAR_1, VAR_0->is_persistent);
  VAR_0->driver_data = ((void*)0);
 }
 return 0;
}
