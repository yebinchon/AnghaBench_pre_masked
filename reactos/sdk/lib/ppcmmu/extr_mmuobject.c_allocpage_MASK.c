
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* addr; } ;
typedef TYPE_1__ ppc_map_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ MmuFreePage ;


 TYPE_2__* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

ppc_map_t *FUNC_3()
{
    MmuFreePage *VAR_5 = 0;

    if (VAR_0)
    {
        if ((void *)VAR_0 == (void *)VAR_3)
        {
            FUNC_1("Problem! FreeList: page 0 is free\n");
            while(1);
        }

 VAR_5 = VAR_0;
 VAR_0 = VAR_0->next;
        ((ppc_map_t*)VAR_5)->addr = VAR_1;
 return ((ppc_map_t*)VAR_5);
    }
    else
    {
        while(!FUNC_2(VAR_2) && VAR_2 < FUNC_0(VAR_4))
        {
            VAR_2++;
        }
        if (VAR_2 < FUNC_0(VAR_4))
        {
            if (VAR_2 < 0x30)
            {
                FUNC_1("Problem! NextPage is low (%x)\n", VAR_2);
                while(1);
            }

            VAR_3[VAR_2].addr = VAR_1;
            return &VAR_3[VAR_2++];
        }
        else
        {
            return ((void*)0);
        }
    }
}
