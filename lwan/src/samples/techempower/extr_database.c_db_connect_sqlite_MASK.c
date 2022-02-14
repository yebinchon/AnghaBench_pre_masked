
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prepare; int disconnect; } ;
struct db_sqlite {TYPE_1__ base; int sqlite; } ;
struct db {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct db_sqlite*) ;
 struct db_sqlite* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int *,int *,int *) ;
 int FUNC_3 (char const*,int *,int,int *) ;

struct db *FUNC_4(const char *VAR_4, bool VAR_5, const char *VAR_6[])
{
    struct db_sqlite *VAR_7 = FUNC_1(sizeof(*VAR_7));

    if (!VAR_7)
        return ((void*)0);

    int VAR_8 = VAR_5 ? VAR_1 : 0;
    int VAR_9 = FUNC_3(VAR_4, &VAR_7->sqlite, VAR_8, ((void*)0));
    if (VAR_9 != VAR_0) {
        FUNC_0(VAR_7);
        return ((void*)0);
    }

    if (VAR_6) {
        for (size_t VAR_10 = 0; VAR_6[VAR_10]; VAR_10++)
            FUNC_2(VAR_7->sqlite, VAR_6[VAR_10], ((void*)0), ((void*)0), ((void*)0));
    }

    VAR_7->base.disconnect = VAR_2;
    VAR_7->base.prepare = VAR_3;

    return (struct db *)VAR_7;
}
