
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_2__ {int bCommand; } ;
typedef int LPVOID ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ D3DHAL_DP2COMMAND ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int) ;

VOID FUNC_2(DWORD * VAR_0)
{
    INT VAR_1;
    D3DHAL_DP2COMMAND VAR_2;
    DWORD VAR_3[2];

    for (VAR_1=0;VAR_1<256;VAR_1++)
    {
       VAR_2.bCommand = VAR_1;
       VAR_0[VAR_1] = FUNC_0 ( (LPVOID) &VAR_2, (LPVOID *) VAR_3) ;
       FUNC_1("D3DParseUnknownCommand return code = %x command %d \n", (UINT)VAR_0[VAR_1], VAR_1);
    }
}
