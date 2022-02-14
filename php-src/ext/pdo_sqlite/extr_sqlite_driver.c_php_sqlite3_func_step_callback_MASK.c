
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdo_sqlite_func {int step; int astep; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int *,int *,int,int **,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_0, int VAR_1,
 sqlite3_value **VAR_2)
{
 struct pdo_sqlite_func *VAR_3 = (struct pdo_sqlite_func*)FUNC_1(VAR_0);

 FUNC_0(&VAR_3->astep, &VAR_3->step, VAR_1, VAR_2, VAR_0, 1);
}
