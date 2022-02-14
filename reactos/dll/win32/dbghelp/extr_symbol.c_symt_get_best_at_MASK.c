
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int num_sorttab; TYPE_1__** addr_sorttab; } ;
typedef int ULONG64 ;
struct TYPE_4__ {scalar_t__ tag; } ;
struct TYPE_3__ {TYPE_2__ symt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct module*,int,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;

int FUNC_2(struct module* VAR_1, int VAR_2)
{
    ULONG64 VAR_3;
    int VAR_4 = VAR_2;
    if (VAR_1->addr_sorttab[VAR_2]->symt.tag == VAR_0)
    {
        FUNC_1(&VAR_1->addr_sorttab[VAR_2]->symt, &VAR_3);
        while (VAR_2 > 0 &&
               VAR_1->addr_sorttab[VAR_2]->symt.tag == VAR_0 &&
               !FUNC_0(VAR_1, VAR_2 - 1, VAR_3))
            VAR_2--;
        if (VAR_1->addr_sorttab[VAR_2]->symt.tag == VAR_0)
        {
            VAR_2 = VAR_4;
            while (VAR_2 < VAR_1->num_sorttab - 1 &&
                   VAR_1->addr_sorttab[VAR_2]->symt.tag == VAR_0 &&
                   !FUNC_0(VAR_1, VAR_2 + 1, VAR_3))
                VAR_2++;
        }

        if (VAR_1->addr_sorttab[VAR_2]->symt.tag == VAR_0)
            VAR_2 = VAR_4;
    }
    return VAR_2;
}
