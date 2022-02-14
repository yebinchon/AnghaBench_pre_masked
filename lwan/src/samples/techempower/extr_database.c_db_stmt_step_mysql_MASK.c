
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct db_stmt_mysql {int must_execute_again; int stmt; TYPE_2__* result_bind; void* param_bind; } ;
struct db_stmt {int dummy; } ;
struct TYPE_5__ {int i; int * s; } ;
struct db_row {char kind; int buffer_length; TYPE_1__ u; } ;
struct TYPE_6__ {int is_null; int buffer_length; int * buffer; int buffer_type; } ;
typedef TYPE_2__ MYSQL_BIND ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(const struct db_stmt *VAR_2, struct db_row *VAR_3)
{
    struct db_stmt_mysql *VAR_4 = (struct db_stmt_mysql *)VAR_2;

    if (VAR_4->must_execute_again) {
        VAR_4->must_execute_again = 0;
        if (FUNC_3(VAR_4->stmt))
            return 0;
    }

    if (!VAR_4->result_bind) {
        size_t VAR_5 = 0;
        for (struct db_row *VAR_6 = VAR_3; VAR_6->kind != '\0'; VAR_6++)
            VAR_5++;

        if (!VAR_5)
            return 0;

        VAR_4->result_bind = FUNC_0(VAR_5, sizeof(*VAR_4->result_bind));
        if (!VAR_4->result_bind)
            return 0;

        VAR_4->param_bind = FUNC_0(VAR_5, sizeof(*VAR_4->param_bind));
        if (!VAR_4->param_bind) {
            FUNC_1(VAR_4->result_bind);
            return 0;
        }

        MYSQL_BIND *VAR_7 = VAR_4->result_bind;
        for (size_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
            if (VAR_3[VAR_8].kind == 's') {
                VAR_7[VAR_8].buffer_type = VAR_1;
                VAR_7[VAR_8].buffer = VAR_3[VAR_8].u.s;
            } else if (VAR_3[VAR_8].kind == 'i') {
                VAR_7[VAR_8].buffer_type = VAR_0;
                VAR_7[VAR_8].buffer = &VAR_3[VAR_8].u.i;
            } else {
                return 0;
            }

            VAR_7[VAR_8].is_null = 0;
            VAR_7[VAR_8].buffer_length = VAR_3[VAR_8].buffer_length;
        }

        if (FUNC_2(VAR_4->stmt, VAR_7))
            return 0;
    }

    return FUNC_4(VAR_4->stmt) == 0;
}
