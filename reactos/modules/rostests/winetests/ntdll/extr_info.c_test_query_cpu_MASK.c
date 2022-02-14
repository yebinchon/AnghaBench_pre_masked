
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sci ;
typedef int ULONG ;
struct TYPE_3__ {int FeatureSet; } ;
typedef TYPE_1__ SYSTEM_CPU_INFORMATION ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int,int*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    DWORD VAR_2;
    ULONG VAR_3;
    SYSTEM_CPU_INFORMATION VAR_4;

    VAR_2 = FUNC_1(VAR_1, &VAR_4, sizeof(VAR_4), &VAR_3);
    FUNC_0( VAR_2 == VAR_0, "Expected STATUS_SUCCESS, got %08x\n", VAR_2);
    FUNC_0( sizeof(VAR_4) == VAR_3, "Inconsistent length %d\n", VAR_3);


    FUNC_2("Processor FeatureSet : %08x\n", VAR_4.FeatureSet);
    FUNC_0( VAR_4.FeatureSet != 0, "Expected some features for this processor, got %08x\n", VAR_4.FeatureSet);
}
