
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_3__ {int step; int astep; } ;
typedef TYPE_1__ php_sqlite3_func ;
struct TYPE_4__ {int row_count; } ;
typedef TYPE_2__ php_sqlite3_agg_context ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int,int **,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_0, int VAR_1, sqlite3_value **VAR_2)
{
 php_sqlite3_func *VAR_3 = (php_sqlite3_func *)FUNC_2(VAR_0);
 php_sqlite3_agg_context *VAR_4 = (php_sqlite3_agg_context *)FUNC_0(VAR_0, sizeof(php_sqlite3_agg_context));

 VAR_4->row_count++;

 FUNC_1(&VAR_3->astep, &VAR_3->step, VAR_1, VAR_2, VAR_0, 1);
}
