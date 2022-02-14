
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwCPOutputCount; int dwMaxCPOutputCount; int* cpOutputBuffer; } ;
typedef TYPE_1__ RTF_Info ;


 int* FUNC_0 (int*,int) ;

__attribute__((used)) static void
FUNC_1(RTF_Info *VAR_0, int VAR_1)
{


        if (VAR_0->dwCPOutputCount >= VAR_0->dwMaxCPOutputCount)
        {
                VAR_0->dwMaxCPOutputCount *= 2;
                VAR_0->cpOutputBuffer = FUNC_0(VAR_0->cpOutputBuffer, VAR_0->dwMaxCPOutputCount);
        }
        VAR_0->cpOutputBuffer[VAR_0->dwCPOutputCount++] = VAR_1;
}
