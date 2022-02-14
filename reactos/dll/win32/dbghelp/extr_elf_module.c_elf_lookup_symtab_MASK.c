
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* name; } ;
struct symtab_elt {int used; TYPE_4__ const* symp; TYPE_2__* compiland; TYPE_1__ ht_elt; } ;
struct symt_compiland {int source; } ;
struct symt {int dummy; } ;
struct TYPE_8__ {int ModuleName; } ;
struct module {TYPE_3__ module; } ;
struct hash_table_iter {int dummy; } ;
struct hash_table {int dummy; } ;
struct TYPE_9__ {scalar_t__ st_value; } ;
struct TYPE_7__ {int source; } ;
typedef TYPE_4__ Elf_Sym ;


 int FUNC_0 (char*,char const*,char const*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hash_table const*,struct hash_table_iter*,char const*) ;
 struct symtab_elt* FUNC_3 (struct hash_table_iter*) ;
 char* FUNC_4 (struct module const*,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static const Elf_Sym* FUNC_7(const struct module* VAR_0,
                                          const struct hash_table* VAR_1,
                                          const char* VAR_2, const struct symt* VAR_3)
{
    struct symtab_elt* VAR_4 = ((void*)0);
    struct symtab_elt* VAR_5 = ((void*)0);
    struct hash_table_iter VAR_6;
    struct symtab_elt* VAR_7;
    const char* VAR_8;
    const char* VAR_9;
    const char* VAR_10;





    if (VAR_3)
    {
        VAR_8 = FUNC_4(VAR_0,
                                    ((const struct symt_compiland*)VAR_3)->source);
        VAR_9 = FUNC_6(VAR_8, '/');
        if (!VAR_9++) VAR_9 = VAR_8;
    }
    else VAR_8 = VAR_9 = ((void*)0);

    FUNC_2(VAR_1, &VAR_6, VAR_2);
    while ((VAR_7 = FUNC_3(&VAR_6)))
    {
        if (VAR_7->used || FUNC_5(VAR_7->ht_elt.name, VAR_2)) continue;

        VAR_4 = VAR_7;
        if ((VAR_7->compiland && !VAR_8) || (!VAR_7->compiland && VAR_8))
            continue;
        if (VAR_7->compiland && VAR_8)
        {
            const char* VAR_11 = FUNC_4(VAR_0, VAR_7->compiland->source);
            if (FUNC_5(VAR_11, VAR_8))
            {
                VAR_10 = FUNC_6(VAR_11, '/');
                if (!VAR_10++) VAR_10 = VAR_11;
                if (FUNC_5(VAR_10, VAR_9)) continue;
            }
        }
        if (VAR_5)
        {
            FUNC_0("Already found symbol %s (%s) in symtab %s @%08x and %s @%08x\n",
                  VAR_2, VAR_8,
                  FUNC_4(VAR_0, VAR_5->compiland->source), (unsigned int)VAR_5->symp->st_value,
                  FUNC_4(VAR_0, VAR_7->compiland->source), (unsigned int)VAR_7->symp->st_value);
        }
        else
        {
            VAR_5 = VAR_7;
            VAR_7->used = 1;
        }
    }
    if (!VAR_5 && !(VAR_5 = VAR_4))
    {
        FUNC_0("Couldn't find symbol %s!%s in symtab\n",
              FUNC_1(VAR_0->module.ModuleName), VAR_2);
        return ((void*)0);
    }
    return VAR_5->symp;
}
