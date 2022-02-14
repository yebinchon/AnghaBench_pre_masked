
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct db_stmt_sqlite {int sqlite; } ;
struct db_stmt {int dummy; } ;
struct TYPE_2__ {char* s; int i; } ;
struct db_row {char kind; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct db_stmt *VAR_1, struct db_row *VAR_2)
{
    const struct db_stmt_sqlite *VAR_3 = (const struct db_stmt_sqlite *)VAR_1;

    if (FUNC_2(VAR_3->sqlite) != VAR_0)
        return 0;

    int VAR_4 = 0;
    for (struct db_row *VAR_5 = VAR_2; VAR_5->kind != '\0'; VAR_5++, VAR_4++) {
        if (VAR_5->kind == 'i') {
            VAR_5->u.i = FUNC_0(VAR_3->sqlite, VAR_4);
        } else if (VAR_5->kind == 's') {
            VAR_5->u.s = (char *)FUNC_1(VAR_3->sqlite, VAR_4);
        } else {
            return 0;
        }
    }

    return 1;
}
