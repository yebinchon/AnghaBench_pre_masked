
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef int pdo_stmt_t ;
struct TYPE_5__ {int errmsg; scalar_t__ errcode; } ;
typedef TYPE_1__ pdo_pgsql_error_info ;
struct TYPE_6__ {TYPE_1__ einfo; } ;
typedef TYPE_2__ pdo_pgsql_db_handle ;
struct TYPE_7__ {scalar_t__ driver_data; } ;
typedef TYPE_3__ pdo_dbh_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, zval *VAR_2)
{
 pdo_pgsql_db_handle *VAR_3 = (pdo_pgsql_db_handle *)VAR_0->driver_data;
 pdo_pgsql_error_info *VAR_4 = &VAR_3->einfo;

 if (VAR_4->errcode) {
  FUNC_0(VAR_2, VAR_4->errcode);
  FUNC_1(VAR_2, VAR_4->errmsg);
 }

 return 1;
}
