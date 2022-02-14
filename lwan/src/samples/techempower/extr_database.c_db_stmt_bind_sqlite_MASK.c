
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct db_stmt_sqlite {int sqlite; } ;
struct db_stmt {int dummy; } ;
struct TYPE_2__ {int i; int s; } ;
struct db_row {char kind; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int ,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct db_stmt *VAR_1, struct db_row *VAR_2, size_t VAR_3)
{
    const struct db_stmt_sqlite *VAR_4 = (const struct db_stmt_sqlite *)VAR_1;
    const struct db_row *VAR_5 = VAR_2 - 1;
    int VAR_6;

    FUNC_3(VAR_4->sqlite);
    FUNC_2(VAR_4->sqlite);

    for (size_t VAR_7 = 1; VAR_7 <= VAR_3; VAR_7++) {
        const struct db_row *VAR_8 = &VAR_5[VAR_7];
        if (VAR_8->kind == '\0') break;

        if (VAR_8->kind == 's') {
            VAR_6 = FUNC_1(VAR_4->sqlite, (int)VAR_7, VAR_8->u.s, -1, ((void*)0));
            if (VAR_6 != VAR_0)
                return 0;
        } else if (VAR_8->kind == 'i') {
            VAR_6 = FUNC_0(VAR_4->sqlite, (int)VAR_7, VAR_8->u.i);
            if (VAR_6 != VAR_0)
                return 0;
        } else {
            return 0;
        }
    }

    return 1;
}
