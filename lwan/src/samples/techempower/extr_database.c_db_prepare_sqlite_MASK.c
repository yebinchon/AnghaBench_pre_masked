
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int finalize; int step; int bind; } ;
struct db_stmt_sqlite {TYPE_1__ base; int sqlite; } ;
struct db_stmt {int dummy; } ;
struct db_sqlite {int sqlite; } ;
struct db {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct db_stmt_sqlite*) ;
 struct db_stmt_sqlite* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int,int *,int *) ;

__attribute__((used)) static struct db_stmt *FUNC_3(const struct db *VAR_4, const char *VAR_5,
        const size_t VAR_6)
{
    const struct db_sqlite *VAR_7 = (const struct db_sqlite *)VAR_4;
    struct db_stmt_sqlite *VAR_8 = FUNC_1(sizeof(*VAR_8));

    if (!VAR_8)
        return ((void*)0);

    int VAR_9 = FUNC_2(VAR_7->sqlite, VAR_5, (int)VAR_6, &VAR_8->sqlite, ((void*)0));
    if (VAR_9 != VAR_0) {
        FUNC_0(VAR_8);
        return ((void*)0);
    }

    VAR_8->base.bind = VAR_1;
    VAR_8->base.step = VAR_3;
    VAR_8->base.finalize = VAR_2;

    return (struct db_stmt *)VAR_8;
}
