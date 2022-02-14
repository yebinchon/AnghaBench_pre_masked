
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
struct TYPE_10__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_12__ {int errmsg; scalar_t__ errcode; } ;
struct TYPE_11__ {TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_mysql_stmt ;
typedef TYPE_3__ pdo_mysql_error_info ;
struct TYPE_13__ {TYPE_3__ einfo; } ;
typedef TYPE_4__ pdo_mysql_db_handle ;
struct TYPE_14__ {scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, zval *VAR_2)
{
 pdo_mysql_db_handle *VAR_3 = (pdo_mysql_db_handle *)VAR_0->driver_data;
 pdo_mysql_error_info *VAR_4 = &VAR_3->einfo;

 FUNC_0("pdo_mysql_fetch_error_func");
 FUNC_1("dbh=%p stmt=%p", VAR_0, VAR_1);
 if (VAR_1) {
  pdo_mysql_stmt *VAR_5 = (pdo_mysql_stmt*)VAR_1->driver_data;
  VAR_4 = &VAR_5->einfo;
 } else {
  VAR_4 = &VAR_3->einfo;
 }

 if (VAR_4->errcode) {
  FUNC_3(VAR_2, VAR_4->errcode);
  FUNC_4(VAR_2, VAR_4->errmsg);
 }

 FUNC_2(1);
}
