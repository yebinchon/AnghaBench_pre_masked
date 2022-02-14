
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ppc_map_t ;
struct TYPE_2__ {struct TYPE_2__* next; } ;
typedef int MmuVsidTree ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 () ;

MmuVsidTree *FUNC_2()
{
    if(VAR_0)
    {
 MmuVsidTree *VAR_4 = (MmuVsidTree*)VAR_0;
 VAR_0 = VAR_0->next;
 return VAR_4;
    }
    else if(VAR_3 >= 3 || !VAR_1)
    {
 ppc_map_t *VAR_5 = FUNC_1();
 VAR_1 = (MmuVsidTree*)FUNC_0((VAR_5 - VAR_2));
 VAR_3 = 1;
 return VAR_1;
    }
    else
    {
 return &VAR_1[VAR_3++];
    }
}
