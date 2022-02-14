
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_3__ {int fini; int afini; } ;
typedef TYPE_1__ php_sqlite3_func ;
struct TYPE_4__ {scalar_t__ row_count; } ;
typedef TYPE_2__ php_sqlite3_agg_context ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ,int *,int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_0)
{
 php_sqlite3_func *VAR_1 = (php_sqlite3_func *)FUNC_2(VAR_0);
 php_sqlite3_agg_context *VAR_2 = (php_sqlite3_agg_context *)FUNC_0(VAR_0, sizeof(php_sqlite3_agg_context));

 VAR_2->row_count = 0;

 FUNC_1(&VAR_1->afini, &VAR_1->fini, 0, ((void*)0), VAR_0, 1);
}
