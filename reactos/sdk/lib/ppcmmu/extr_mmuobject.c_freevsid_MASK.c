
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ppc_map_t ;
typedef int paddr_t ;
struct TYPE_3__ {scalar_t__* tree; } ;
typedef TYPE_1__ MmuVsidInfo ;


 size_t FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(int VAR_1)
{
    int VAR_2;
    MmuVsidInfo *VAR_3 = FUNC_1(VAR_1);
    if(!VAR_3) return;
    ppc_map_t *VAR_4 = &VAR_0[FUNC_0((paddr_t)VAR_3)];
    for(VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
 if(VAR_3->tree[VAR_2])
     FUNC_3(VAR_3->tree[VAR_2]);
    }
    FUNC_2(VAR_4);
}
