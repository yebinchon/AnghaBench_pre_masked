
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bPhysAddr; int dwPhysAddrLen; } ;
typedef TYPE_1__* PMIB_IPNETROW ;
typedef int DWORD ;
typedef int BYTE ;
typedef int AsnAny ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static DWORD FUNC_2(AsnAny *VAR_4, void *VAR_5)
{
    PMIB_IPNETROW VAR_6 = (PMIB_IPNETROW)((BYTE *)VAR_5 - FUNC_0(VAR_1,
                                        VAR_3));

    FUNC_1(VAR_4, VAR_0, VAR_6->dwPhysAddrLen, VAR_6->bPhysAddr);
    return VAR_2;
}
