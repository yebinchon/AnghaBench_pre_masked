
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int column_count; int row_count; int active_query_string; scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_8__ {int err; TYPE_3__* H; } ;
typedef TYPE_2__ pdo_dblib_stmt ;
struct TYPE_9__ {int link; } ;
typedef TYPE_3__ pdo_dblib_db_handle ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(pdo_stmt_t *VAR_1)
{
 pdo_dblib_stmt *VAR_2 = (pdo_dblib_stmt*)VAR_1->driver_data;
 pdo_dblib_db_handle *VAR_3 = VAR_2->H;

 FUNC_3(VAR_3->link, (BYTE*) &VAR_2->err);

 FUNC_5(VAR_1);

 if (VAR_0 == FUNC_1(VAR_3->link, VAR_1->active_query_string)) {
  return 0;
 }

 if (VAR_0 == FUNC_4(VAR_3->link)) {
  return 0;
 }

 FUNC_6(VAR_1);

 VAR_1->row_count = FUNC_0(VAR_3->link);
 VAR_1->column_count = FUNC_2(VAR_3->link);

 return 1;
}
