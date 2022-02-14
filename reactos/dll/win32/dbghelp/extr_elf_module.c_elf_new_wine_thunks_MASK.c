
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct symtab_elt {TYPE_2__* symp; TYPE_1__ ht_elt; int compiland; scalar_t__ used; } ;
struct symt_ht {int symt; } ;
struct module {scalar_t__ reloc_delta; int sortlist_valid; } ;
struct location {scalar_t__ offset; int reg; int kind; } ;
struct hash_table_iter {int dummy; } ;
struct hash_table {int dummy; } ;
struct elf_thunk_area {int ordinal; } ;
typedef scalar_t__ ULONG64 ;
struct TYPE_4__ {scalar_t__ st_value; int st_size; int st_info; } ;
typedef scalar_t__ DWORD_PTR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_3 (scalar_t__,struct elf_thunk_area const*) ;
 int FUNC_4 (struct hash_table const*,struct hash_table_iter*,int *) ;
 struct symtab_elt* FUNC_5 (struct hash_table_iter*) ;
 int VAR_3 ;
 struct symt_ht* FUNC_6 (struct module*,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (struct module*,int ,int ,scalar_t__,int ,int *) ;
 int FUNC_9 (struct module*,int ,int ,int,struct location,int ,int *) ;
 int FUNC_10 (struct module*,int ,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_11(struct module* VAR_4, const struct hash_table* VAR_5,
                               const struct elf_thunk_area* VAR_6)
{
    int VAR_7;
    struct hash_table_iter VAR_8;
    struct symtab_elt* VAR_9;
    DWORD_PTR VAR_10;
    struct symt_ht* VAR_11;

    FUNC_4(VAR_5, &VAR_8, ((void*)0));
    while ((VAR_9 = FUNC_5(&VAR_8)))
    {
        if (VAR_9->used) continue;

        VAR_10 = VAR_4->reloc_delta + VAR_9->symp->st_value;

        VAR_7 = FUNC_3(VAR_9->symp->st_value, VAR_6);
        if (VAR_7 >= 0)
        {
            FUNC_10(VAR_4, VAR_9->compiland, VAR_9->ht_elt.name, VAR_6[VAR_7].ordinal,
                           VAR_10, VAR_9->symp->st_size);
        }
        else
        {
            ULONG64 VAR_12;
            struct location VAR_13;

            VAR_11 = FUNC_6(VAR_4, VAR_10);
            if (VAR_11 && !FUNC_7(&VAR_11->symt, &VAR_12))
                VAR_12 = VAR_10;
            if (!VAR_11 || VAR_10 != VAR_12)
            {




                switch (FUNC_1(VAR_9->symp->st_info))
                {
                case 129:
                    FUNC_8(VAR_4, VAR_9->compiland, VAR_9->ht_elt.name,
                                      VAR_10, VAR_9->symp->st_size, ((void*)0));
                    break;
                case 128:
                    VAR_13.kind = VAR_3;
                    VAR_13.reg = 0;
                    VAR_13.offset = VAR_10;
                    FUNC_9(VAR_4, VAR_9->compiland, VAR_9->ht_elt.name,
                                             FUNC_0(VAR_9->symp->st_info) == VAR_1,
                                             VAR_13, VAR_9->symp->st_size, ((void*)0));
                    break;
                default:
                    FUNC_2("Shouldn't happen\n");
                    break;
                }







                VAR_4->sortlist_valid = VAR_2;
            }
        }
    }

    VAR_4->sortlist_valid = VAR_0;
    return VAR_2;
}
