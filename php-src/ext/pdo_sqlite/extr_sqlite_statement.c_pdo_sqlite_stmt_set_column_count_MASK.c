
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int column_count; TYPE_3__* columns; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_5__ {int * name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(pdo_stmt_t *VAR_0, int VAR_1)
{

 if (!VAR_0->columns) {
  VAR_0->column_count = VAR_1;

  return;
 }





 if (VAR_1 == VAR_0->column_count) {
  return;
 }


 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->column_count; VAR_2++) {
  if (VAR_0->columns[VAR_2].name) {
   FUNC_1(VAR_0->columns[VAR_2].name);
   VAR_0->columns[VAR_2].name = ((void*)0);
  }
 }

 FUNC_0(VAR_0->columns);
 VAR_0->columns = ((void*)0);
 VAR_0->column_count = VAR_1;
}
