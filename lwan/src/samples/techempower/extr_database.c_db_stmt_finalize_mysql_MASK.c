
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_stmt_mysql {struct db_stmt_mysql* param_bind; struct db_stmt_mysql* result_bind; int stmt; } ;
struct db_stmt {int dummy; } ;


 int FUNC_0 (struct db_stmt_mysql*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct db_stmt *VAR_0)
{
    struct db_stmt_mysql *VAR_1 = (struct db_stmt_mysql *)VAR_0;

    FUNC_1(VAR_1->stmt);
    FUNC_0(VAR_1->result_bind);
    FUNC_0(VAR_1->param_bind);
    FUNC_0(VAR_1);
}
