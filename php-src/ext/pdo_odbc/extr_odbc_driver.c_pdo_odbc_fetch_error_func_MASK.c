
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_8__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_10__ {int last_state; int last_error; int line; int file; int what; int last_err_msg; } ;
struct TYPE_9__ {TYPE_3__ einfo; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
typedef TYPE_3__ pdo_odbc_errinfo ;
struct TYPE_11__ {TYPE_3__ einfo; } ;
typedef TYPE_4__ pdo_odbc_db_handle ;
struct TYPE_12__ {scalar_t__ driver_data; } ;
typedef TYPE_5__ pdo_dbh_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(pdo_dbh_t *VAR_0, pdo_stmt_t *VAR_1, zval *VAR_2)
{
 pdo_odbc_db_handle *VAR_3 = (pdo_odbc_db_handle *)VAR_0->driver_data;
 pdo_odbc_errinfo *VAR_4 = &VAR_3->einfo;
 pdo_odbc_stmt *VAR_5 = ((void*)0);
 zend_string *VAR_6 = ((void*)0);

 if (VAR_1) {
  VAR_5 = (pdo_odbc_stmt*)VAR_1->driver_data;
  VAR_4 = &VAR_5->einfo;
 }

 VAR_6 = FUNC_3(0, "%s (%s[%ld] at %s:%d)",
    VAR_4->last_err_msg,
    VAR_4->what, VAR_4->last_error,
    VAR_4->file, VAR_4->line);

 FUNC_0(VAR_2, VAR_4->last_error);
 FUNC_1(VAR_2, VAR_6);
 FUNC_2(VAR_2, VAR_4->last_state);

 return 1;
}
