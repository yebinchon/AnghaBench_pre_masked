
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab {int hash; struct symtab* next; } ;
struct parser {struct symtab* symtab; } ;
struct lwan_var_descriptor {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct symtab*) ;
 int FUNC_1 (int ,scalar_t__,struct lwan_var_descriptor const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 struct symtab* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct parser *VAR_3,
                       const struct lwan_var_descriptor *VAR_4)
{
    struct symtab *VAR_5;
    int VAR_6;

    if (!VAR_4)
        return -VAR_0;

    VAR_5 = FUNC_4(sizeof(*VAR_5));
    if (!VAR_5)
        return -VAR_2;

    VAR_5->hash = FUNC_3(((void*)0), ((void*)0));
    if (!VAR_5->hash) {
        VAR_6 = -VAR_1;
        goto hash_new_err;
    }

    VAR_5->next = VAR_3->symtab;
    VAR_3->symtab = VAR_5;

    for (; VAR_4->name; VAR_4++) {
        VAR_6 = FUNC_1(VAR_3->symtab->hash, VAR_4->name, VAR_4);

        if (VAR_6 < 0)
            goto hash_add_err;
    }

    return 0;

hash_add_err:
    FUNC_2(VAR_5->hash);
hash_new_err:
    FUNC_0(VAR_5);

    return VAR_6;
}
