
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    NTSTATUS VAR_2;

    if (!&FUNC_1)
    {
        FUNC_2("RtlDeleteTimer is not available\n");
        return;
    }

    VAR_2 = FUNC_1(((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_2 == VAR_1 ||
       VAR_2 == VAR_0,
       "expected STATUS_INVALID_PARAMETER_1 or STATUS_INVALID_PARAMETER, got %x\n", VAR_2);
}
