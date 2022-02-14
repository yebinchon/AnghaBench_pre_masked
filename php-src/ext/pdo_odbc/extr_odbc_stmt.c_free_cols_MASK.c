
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int column_count; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_7__ {TYPE_5__* cols; } ;
typedef TYPE_2__ pdo_odbc_stmt ;
struct TYPE_8__ {struct TYPE_8__* data; } ;


 int FUNC_0 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_1(pdo_stmt_t *VAR_0, pdo_odbc_stmt *VAR_1)
{
 if (VAR_1->cols) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0->column_count; VAR_2++) {
   if (VAR_1->cols[VAR_2].data) {
    FUNC_0(VAR_1->cols[VAR_2].data);
   }
  }
  FUNC_0(VAR_1->cols);
  VAR_1->cols = ((void*)0);
 }
}
