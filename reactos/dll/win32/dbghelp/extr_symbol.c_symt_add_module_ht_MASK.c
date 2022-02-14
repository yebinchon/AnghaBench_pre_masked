
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_ht {int symt; int hash_elt; } ;
struct module {int sortlist_valid; scalar_t__ num_symbols; struct symt_ht** addr_sorttab; int ht_symbols; } ;
typedef int ULONG64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct module*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct module* VAR_1, struct symt_ht* VAR_2)
{
    ULONG64 VAR_3;

    FUNC_0(&VAR_1->ht_symbols, &VAR_2->hash_elt);



    if (FUNC_1(&VAR_2->symt, &VAR_3) &&
        FUNC_2(VAR_1, VAR_1->num_symbols + 1))
    {
        VAR_1->addr_sorttab[VAR_1->num_symbols++] = VAR_2;
        VAR_1->sortlist_valid = VAR_0;
    }
}
