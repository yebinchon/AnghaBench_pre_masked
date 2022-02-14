
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int stack; int lexer; int chunks; TYPE_1__* tpl; } ;
struct lwan_var_descriptor {int dummy; } ;
struct TYPE_2__ {int chunks; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct parser*,struct lwan_var_descriptor const*) ;

__attribute__((used)) static bool FUNC_4(struct parser *VAR_0,
                        const struct lwan_var_descriptor *VAR_1,
                        const char *VAR_2)
{
    if (FUNC_3(VAR_0, VAR_1) < 0)
        return 0;

    FUNC_0(&VAR_0->chunks);
    VAR_0->tpl->chunks = VAR_0->chunks;

    FUNC_1(&VAR_0->lexer, VAR_2);
    FUNC_2(&VAR_0->stack);

    return 1;
}
