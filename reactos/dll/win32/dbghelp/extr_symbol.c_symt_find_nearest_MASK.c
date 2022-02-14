
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt_ht {int symt; } ;
struct module {int num_sorttab; struct symt_ht** addr_sorttab; int sortlist_valid; } ;
typedef scalar_t__ ULONG64 ;
typedef scalar_t__ DWORD_PTR ;


 scalar_t__ FUNC_0 (struct module*,int,scalar_t__) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (struct module*,int) ;
 int FUNC_4 (struct module*,int *,scalar_t__*) ;

struct symt_ht* FUNC_5(struct module* VAR_0, DWORD_PTR VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    ULONG64 VAR_5, VAR_6;

    if (!VAR_0->sortlist_valid || !VAR_0->addr_sorttab)
    {
        if (!FUNC_1(VAR_0)) return ((void*)0);
    }




    VAR_4 = 0;
    VAR_3 = VAR_0->num_sorttab;

    FUNC_2(&VAR_0->addr_sorttab[0]->symt, &VAR_5);
    if (VAR_1 <= VAR_5)
    {
        VAR_4 = FUNC_3(VAR_0, 0);
        return VAR_0->addr_sorttab[VAR_4];
    }

    if (VAR_3)
    {
        FUNC_2(&VAR_0->addr_sorttab[VAR_3 - 1]->symt, &VAR_5);
        FUNC_4(VAR_0, &VAR_0->addr_sorttab[VAR_3 - 1]->symt, &VAR_6);
        if (VAR_1 >= VAR_5 + VAR_6) return ((void*)0);
    }

    while (VAR_3 > VAR_4 + 1)
    {
        VAR_2 = (VAR_3 + VAR_4) / 2;
        if (FUNC_0(VAR_0, VAR_2, VAR_1) < 0)
            VAR_4 = VAR_2;
        else
            VAR_3 = VAR_2;
    }
    if (VAR_4 != VAR_3 && VAR_3 != VAR_0->num_sorttab &&
        FUNC_0(VAR_0, VAR_3, VAR_1) <= 0)
        VAR_4 = VAR_3;




    VAR_4 = FUNC_3(VAR_0, VAR_4);







    return VAR_0->addr_sorttab[VAR_4];
}
