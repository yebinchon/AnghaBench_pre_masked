
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int AddrSize; int PhysAddr; int LogAddr; } ;
typedef int TDI_STATUS ;
typedef TYPE_1__* PVOID ;
typedef int PNEIGHBOR_CACHE_ENTRY ;
typedef int PIP_INTERFACE ;
typedef TYPE_1__* PIPARP_ENTRY ;
typedef int IP_ADDRESS ;
typedef int IPARP_ENTRY ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

TDI_STATUS FUNC_4(PIP_INTERFACE VAR_3, PVOID VAR_4, UINT VAR_5)
{
    PIPARP_ENTRY VAR_6 = VAR_4;
    IP_ADDRESS VAR_7;
    PNEIGHBOR_CACHE_ENTRY VAR_8;

    if (!VAR_4 || VAR_5 < sizeof(IPARP_ENTRY))
        return VAR_1;

    FUNC_0(&VAR_7, VAR_6->LogAddr);

    if ((VAR_8 = FUNC_2(&VAR_7, VAR_3)))
        FUNC_3(VAR_8);

    if (FUNC_1(VAR_3,
                      &VAR_7,
                      VAR_6->PhysAddr,
                      VAR_6->AddrSize,
                      VAR_0,
                      0))
        return VAR_2;
    else
        return VAR_1;
}
