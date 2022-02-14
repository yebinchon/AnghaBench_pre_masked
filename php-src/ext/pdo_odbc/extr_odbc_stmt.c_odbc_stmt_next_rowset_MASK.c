
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int column_count; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {scalar_t__ going_long; int cols; int stmt; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
typedef int pdo_odbc_column ;
typedef scalar_t__ SQLSMALLINT ;
typedef scalar_t__ SQLRETURN ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(pdo_stmt_t *VAR_2)
{
 SQLRETURN VAR_3;
 SQLSMALLINT VAR_4;
 pdo_odbc_stmt *VAR_5 = (pdo_odbc_stmt*)VAR_2->driver_data;




 VAR_3 = FUNC_0(VAR_5->stmt);

 if (VAR_3 != VAR_0 && VAR_3 != VAR_1) {
  return 0;
 }

 FUNC_3(VAR_2, VAR_5);

 FUNC_1(VAR_5->stmt, &VAR_4);
 VAR_2->column_count = (int)VAR_4;
 VAR_5->cols = FUNC_2(VAR_4, sizeof(pdo_odbc_column));
 VAR_5->going_long = 0;

 return 1;
}
