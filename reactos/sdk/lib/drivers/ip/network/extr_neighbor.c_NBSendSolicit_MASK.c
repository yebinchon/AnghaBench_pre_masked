
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int State; int Interface; int * LinkAddress; int Address; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

VOID FUNC_2(PNEIGHBOR_CACHE_ENTRY VAR_2)







{
    FUNC_1(VAR_0, ("Called. NCE (0x%X).\n", VAR_2));

    FUNC_0(&VAR_2->Address,
                (VAR_2->State & VAR_1) ? ((void*)0) : VAR_2->LinkAddress,
                VAR_2->Interface);
}
