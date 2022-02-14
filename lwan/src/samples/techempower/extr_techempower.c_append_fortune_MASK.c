
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fortune_array {int dummy; } ;
struct coro {int dummy; } ;
struct TYPE_2__ {int id; char* message; } ;
struct Fortune {TYPE_1__ item; } ;


 scalar_t__ FUNC_0 (int) ;
 char* FUNC_1 (struct coro*,char const*) ;
 struct Fortune* FUNC_2 (struct fortune_array*) ;

__attribute__((used)) static bool FUNC_3(struct coro *VAR_0, struct fortune_array *VAR_1,
                           int VAR_2, const char *VAR_3)
{
    struct Fortune *VAR_4;
    char *VAR_5;

    VAR_5 = FUNC_1(VAR_0, VAR_3);
    if (FUNC_0(!VAR_5))
        return 0;

    VAR_4 = FUNC_2(VAR_1);
    if (FUNC_0(!VAR_4))
        return 0;

    VAR_4->item.id = VAR_2;
    VAR_4->item.message = VAR_5;

    return 1;
}
