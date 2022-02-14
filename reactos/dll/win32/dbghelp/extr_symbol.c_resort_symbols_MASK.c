
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt_ht {int dummy; } ;
struct TYPE_2__ {int NumSyms; } ;
struct module {int num_symbols; int num_sorttab; int sortlist_valid; struct symt_ht** addr_sorttab; TYPE_1__ module; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct symt_ht** FUNC_1 (int ,int ,int) ;
 struct symt_ht** FUNC_2 (int ,int ,struct symt_ht**,int) ;
 int VAR_1 ;
 int FUNC_3 (struct symt_ht**,struct symt_ht**,int) ;
 int FUNC_4 (struct symt_ht**,struct symt_ht**,int) ;
 int FUNC_5 (struct symt_ht**,int,int,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct module*,int,struct symt_ht*) ;

__attribute__((used)) static BOOL FUNC_7(struct module* VAR_3)
{
    int VAR_4;

    if (!(VAR_3->module.NumSyms = VAR_3->num_symbols))
        return VAR_0;





    VAR_4 = VAR_3->num_symbols - VAR_3->num_sorttab;
    FUNC_5(&VAR_3->addr_sorttab[VAR_3->num_sorttab], VAR_4, sizeof(struct symt_ht*), VAR_2);
    if (VAR_3->num_sorttab)
    {
        int VAR_5, VAR_6 = VAR_3->num_sorttab, VAR_7;
        static struct symt_ht** VAR_8;
        static unsigned VAR_9;

        if (VAR_9 < VAR_4)
        {
            static struct symt_ht** VAR_10;
            if (VAR_8)
                VAR_10 = FUNC_2(FUNC_0(), 0, VAR_8, VAR_4 * sizeof(struct symt_ht*));
            else
                VAR_10 = FUNC_1(FUNC_0(), 0, VAR_4 * sizeof(struct symt_ht*));
            if (!VAR_10)
            {
                VAR_3->num_sorttab = 0;
                return FUNC_7(VAR_3);
            }
            VAR_8 = VAR_10;
            VAR_9 = VAR_4;
        }
        FUNC_3(VAR_8, &VAR_3->addr_sorttab[VAR_3->num_sorttab], VAR_4 * sizeof(struct symt_ht*));
        FUNC_5(VAR_8, VAR_4, sizeof(struct symt_ht*), VAR_2);

        for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
        {
            VAR_7 = VAR_6;
            VAR_6 = FUNC_6(VAR_3, VAR_6, VAR_8[VAR_5]);
            FUNC_4(&VAR_3->addr_sorttab[VAR_6 + VAR_5 + 1],
                    &VAR_3->addr_sorttab[VAR_6],
                    (VAR_7 - VAR_6) * sizeof(struct symt_ht*));
            VAR_3->addr_sorttab[VAR_6 + VAR_5] = VAR_8[VAR_5];
        }
    }
    VAR_3->num_sorttab = VAR_3->num_symbols;
    return VAR_3->sortlist_valid = VAR_1;
}
