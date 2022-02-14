
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_map_t ;
typedef scalar_t__ paddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_1(paddr_t VAR_4)
{
    ppc_map_t *VAR_5 = &VAR_2[FUNC_0(VAR_4)];
    if(!VAR_3)
    {
 VAR_3 = VAR_4;
 VAR_0 = (paddr_t)VAR_5;
 VAR_1 = FUNC_0(VAR_0) + 1;
    }
}
