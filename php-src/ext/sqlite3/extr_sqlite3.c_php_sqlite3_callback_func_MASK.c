
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_2__ {int func; int afunc; } ;
typedef TYPE_1__ php_sqlite3_func ;


 int FUNC_0 (int *,int *,int,int **,int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2)
{
 php_sqlite3_func *VAR_3 = (php_sqlite3_func *)FUNC_1(VAR_0);

 FUNC_0(&VAR_3->afunc, &VAR_3->func, VAR_1, VAR_2, VAR_0, 0);
}
