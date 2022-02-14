
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int finalize; int step; int bind; } ;
struct db_stmt_mysql {int must_execute_again; int * param_bind; int * result_bind; TYPE_1__ base; int stmt; } ;
struct db_stmt {int dummy; } ;
struct db_mysql {int con; } ;
struct db {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct db_stmt_mysql*) ;
 struct db_stmt_mysql* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char const*,size_t const) ;

__attribute__((used)) static struct db_stmt *FUNC_5(const struct db *VAR_3, const char *VAR_4,
        const size_t VAR_5)
{
    const struct db_mysql *VAR_6 = (const struct db_mysql *)VAR_3;
    struct db_stmt_mysql *VAR_7 = FUNC_1(sizeof(*VAR_7));

    if (!VAR_7)
        return ((void*)0);

    VAR_7->stmt = FUNC_3(VAR_6->con);
    if (!VAR_7->stmt) {
        FUNC_0(VAR_7);
        return ((void*)0);
    }

    if (FUNC_4(VAR_7->stmt, VAR_4, VAR_5)) {
        FUNC_2(VAR_7->stmt);
        FUNC_0(VAR_7);
        return ((void*)0);
    }

    VAR_7->base.bind = VAR_0;
    VAR_7->base.step = VAR_2;
    VAR_7->base.finalize = VAR_1;
    VAR_7->result_bind = ((void*)0);
    VAR_7->param_bind = ((void*)0);
    VAR_7->must_execute_again = 1;

    return (struct db_stmt*)VAR_7;
}
