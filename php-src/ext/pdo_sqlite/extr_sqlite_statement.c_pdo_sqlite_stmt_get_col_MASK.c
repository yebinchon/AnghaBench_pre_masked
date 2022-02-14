
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ pdo_stmt_t ;
struct TYPE_6__ {int stmt; } ;
typedef TYPE_2__ pdo_sqlite_stmt ;




 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 size_t FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(pdo_stmt_t *VAR_0, int VAR_1, char **VAR_2, size_t *VAR_3, int *VAR_4)
{
 pdo_sqlite_stmt *VAR_5 = (pdo_sqlite_stmt*)VAR_0->driver_data;
 if (!VAR_5->stmt) {
  return 0;
 }
 if(VAR_1 >= FUNC_5(VAR_5->stmt)) {

  FUNC_0(VAR_0);
  return 0;
 }
 switch (FUNC_4(VAR_5->stmt, VAR_1)) {
  case 128:
   *VAR_2 = ((void*)0);
   *VAR_3 = 0;
   return 1;

  case 129:
   *VAR_2 = (char*)FUNC_1(VAR_5->stmt, VAR_1);
   *VAR_3 = FUNC_2(VAR_5->stmt, VAR_1);
   return 1;

  default:
   *VAR_2 = (char*)FUNC_3(VAR_5->stmt, VAR_1);
   *VAR_3 = FUNC_2(VAR_5->stmt, VAR_1);
   return 1;
 }
}
