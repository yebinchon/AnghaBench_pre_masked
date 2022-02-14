
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ppc_map_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ MmuVsidInfo ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

void FUNC_2()
{
    int VAR_1,VAR_2;
    ppc_map_t *VAR_3;
    MmuVsidInfo *VAR_4;
    FUNC_1("Address spaces:\n");
    for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
    {
        FUNC_0(VAR_4);
    }
}
