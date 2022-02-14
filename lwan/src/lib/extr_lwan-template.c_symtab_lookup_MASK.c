
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int hash; struct symtab* next; } ;
struct parser {struct symtab* symtab; } ;
struct lwan_var_descriptor {int dummy; } ;


 struct lwan_var_descriptor* FUNC_0 (int ,char const*) ;

__attribute__((used)) static struct lwan_var_descriptor *FUNC_1(struct parser *VAR_0,
                                                 const char *VAR_1)
{
    for (struct symtab *VAR_2 = VAR_0->symtab; VAR_2; VAR_2 = VAR_2->next) {
        struct lwan_var_descriptor *VAR_3 = FUNC_0(VAR_2->hash, VAR_1);
        if (VAR_3)
            return VAR_3;
    }

    return ((void*)0);
}
