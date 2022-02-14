
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct db_stmt_mysql {int must_execute_again; TYPE_2__* param_bind; int stmt; } ;
struct db_stmt {int dummy; } ;
struct TYPE_5__ {int i; int * s; } ;
struct db_row {char kind; TYPE_1__ u; } ;
struct TYPE_6__ {int is_null; scalar_t__ length; int * buffer; int buffer_type; } ;
typedef TYPE_2__ MYSQL_BIND ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct db_stmt *VAR_2,
        struct db_row *VAR_3, size_t VAR_4)
{
    struct db_stmt_mysql *VAR_5 = (struct db_stmt_mysql *)VAR_2;

    VAR_5->must_execute_again = 1;

    if (!VAR_5->param_bind) {
        VAR_5->param_bind = FUNC_0(VAR_4, sizeof(*VAR_5->param_bind));
        if (!VAR_5->param_bind)
            return 0;
    } else {
        FUNC_2(VAR_5->stmt);
    }

    for (size_t VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        if (VAR_3[VAR_6].kind == '\0') break;

        MYSQL_BIND *VAR_7 = &VAR_5->param_bind[VAR_6];
        if (VAR_3[VAR_6].kind == 's') {
            VAR_7->buffer_type = VAR_1;
            VAR_7->buffer = VAR_3[VAR_6].u.s;
        } else if (VAR_3[VAR_6].kind == 'i') {
            VAR_7->buffer_type = VAR_0;
            VAR_7->buffer = &VAR_3[VAR_6].u.i;
        }
        VAR_7->is_null = 0;
        VAR_7->length = 0;
    }

    return !FUNC_1(VAR_5->stmt, VAR_5->param_bind);
}
