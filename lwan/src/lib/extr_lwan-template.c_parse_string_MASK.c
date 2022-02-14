
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int template_flags; int lexer; struct lwan_var_descriptor const* descriptor; int * symtab; struct lwan_tpl* tpl; } ;
struct lwan_var_descriptor {int dummy; } ;
struct lwan_tpl {int dummy; } ;
typedef struct lexeme lexeme ;
typedef enum lwan_tpl_flag { ____Placeholder_lwan_tpl_flag } lwan_tpl_flag ;


 struct lexeme* FUNC_0 (int *) ;
 int FUNC_1 (struct parser*,struct lwan_var_descriptor const*,char const*) ;
 int FUNC_2 (struct parser*,struct lexeme*) ;
 void* FUNC_3 (struct parser*,struct lexeme*) ;

__attribute__((used)) static bool FUNC_4(struct lwan_tpl *VAR_0,
                         const char *VAR_1,
                         const struct lwan_var_descriptor *VAR_2,
                         enum lwan_tpl_flag VAR_3)
{
    struct parser VAR_4 = {
        .tpl = VAR_0,
        .symtab = ((void*)0),
        .descriptor = VAR_2,
        .template_flags = VAR_3
    };
    void *(*VAR_5)(struct parser *VAR_6, struct lexeme *VAR_7) = FUNC_3;
    struct lexeme *VAR_8;

    if (!FUNC_1(&VAR_4, VAR_2, VAR_1))
        return 0;

    while (VAR_5) {
        if (!(VAR_8 = FUNC_0(&VAR_4.lexer)))
            break;

        VAR_5 = VAR_5(&VAR_4, VAR_8);
    }

    return FUNC_2(&VAR_4, VAR_8);
}
