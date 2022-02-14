
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * env; int * dbc; } ;
typedef TYPE_1__ pdo_odbc_db_handle ;
struct TYPE_6__ {int * driver_data; int is_persistent; } ;
typedef TYPE_2__ pdo_dbh_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_4)
{
 pdo_odbc_db_handle *VAR_5 = (pdo_odbc_db_handle*)VAR_4->driver_data;

 if (VAR_5->dbc != VAR_2) {
  FUNC_1(VAR_0, VAR_5->dbc, VAR_3);
  FUNC_0(VAR_5->dbc);
  FUNC_2(VAR_0, VAR_5->dbc);
  VAR_5->dbc = ((void*)0);
 }
 FUNC_2(VAR_1, VAR_5->env);
 VAR_5->env = ((void*)0);
 FUNC_3(VAR_5, VAR_4->is_persistent);
 VAR_4->driver_data = ((void*)0);

 return 0;
}
