
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct db_stmt {int dummy; } ;
struct TYPE_2__ {int i; } ;
struct db_row {TYPE_1__ u; } ;
typedef int JsonNode ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct db_stmt*,struct db_row*,int) ;
 int FUNC_2 (struct db_stmt*,struct db_row*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static JsonNode *
FUNC_7(struct db_stmt *VAR_0, struct db_row VAR_1[], struct db_row VAR_2[])
{
    JsonNode *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_6() % 10000;

    VAR_1[0].u.i = VAR_4;

    if (FUNC_0(!FUNC_1(VAR_0, VAR_1, 1)))
        goto out;

    if (FUNC_0(!FUNC_2(VAR_0, VAR_2)))
        goto out;

    VAR_3 = FUNC_5();
    if (FUNC_0(!VAR_3))
        goto out;

    FUNC_3(VAR_3, "id", FUNC_4(VAR_4));
    FUNC_3(VAR_3, "randomNumber", FUNC_4(VAR_2[0].u.i));

out:
    return VAR_3;
}
