
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {int error_code; int supports_placeholders; int * methods; TYPE_3__* driver_data; } ;
typedef TYPE_2__ pdo_stmt_t ;
struct TYPE_8__ {int sqlstate; } ;
struct TYPE_10__ {TYPE_1__ err; scalar_t__ computed_column_name_count; int * H; } ;
typedef TYPE_3__ pdo_dblib_stmt ;
typedef int pdo_dblib_db_handle ;
struct TYPE_11__ {scalar_t__ driver_data; } ;
typedef TYPE_4__ pdo_dbh_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(pdo_dbh_t *VAR_2, const char *VAR_3, size_t VAR_4, pdo_stmt_t *VAR_5, zval *VAR_6)
{
 pdo_dblib_db_handle *VAR_7 = (pdo_dblib_db_handle *)VAR_2->driver_data;
 pdo_dblib_stmt *VAR_8 = FUNC_0(1, sizeof(*VAR_8));

 VAR_8->H = VAR_7;
 VAR_5->driver_data = VAR_8;
 VAR_5->methods = &VAR_1;
 VAR_5->supports_placeholders = VAR_0;
 VAR_8->computed_column_name_count = 0;
 VAR_8->err.sqlstate = VAR_5->error_code;

 return 1;
}
