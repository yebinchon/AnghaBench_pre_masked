
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int HardErrorDisabled; } ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_4;
    BOOL VAR_5;
    DWORD VAR_6;
    NTSTATUS VAR_7;

    if (!&FUNC_4 || !&FUNC_5)
    {
        FUNC_6("RtlGetThreadErrorMode and/or RtlSetThreadErrorMode not available\n");
        return;
    }

    if (!&FUNC_3 || !FUNC_3(FUNC_0(), &VAR_5))
        VAR_5 = VAR_0;

    VAR_4 = FUNC_4();

    VAR_7 = FUNC_5(0x70, &VAR_6);
    FUNC_2(VAR_7 == VAR_2 ||
       VAR_7 == VAR_3,
       "RtlSetThreadErrorMode failed with error 0x%08x\n", VAR_7);
    FUNC_2(VAR_6 == VAR_4,
       "RtlSetThreadErrorMode returned mode 0x%x, expected 0x%x\n",
       VAR_6, VAR_4);
    FUNC_2(FUNC_4() == 0x70,
       "RtlGetThreadErrorMode returned 0x%x, expected 0x%x\n", VAR_6, 0x70);
    if (!VAR_5)
    {
        FUNC_2(FUNC_1()->HardErrorDisabled == 0x70,
           "The TEB contains 0x%x, expected 0x%x\n",
           FUNC_1()->HardErrorDisabled, 0x70);
    }

    VAR_7 = FUNC_5(0, &VAR_6);
    FUNC_2(VAR_7 == VAR_2 ||
       VAR_7 == VAR_3,
       "RtlSetThreadErrorMode failed with error 0x%08x\n", VAR_7);
    FUNC_2(VAR_6 == 0x70,
       "RtlSetThreadErrorMode returned mode 0x%x, expected 0x%x\n",
       VAR_6, 0x70);
    FUNC_2(FUNC_4() == 0,
       "RtlGetThreadErrorMode returned 0x%x, expected 0x%x\n", VAR_6, 0);
    if (!VAR_5)
    {
        FUNC_2(FUNC_1()->HardErrorDisabled == 0,
           "The TEB contains 0x%x, expected 0x%x\n",
           FUNC_1()->HardErrorDisabled, 0);
    }

    for (VAR_6 = 1; VAR_6; VAR_6 <<= 1)
    {
        VAR_7 = FUNC_5(VAR_6, ((void*)0));
        if (VAR_6 & 0x70)
            FUNC_2(VAR_7 == VAR_2 ||
               VAR_7 == VAR_3,
               "RtlSetThreadErrorMode(%x,NULL) failed with error 0x%08x\n",
               VAR_6, VAR_7);
        else
            FUNC_2(VAR_7 == VAR_1,
               "RtlSetThreadErrorMode(%x,NULL) returns 0x%08x, "
               "expected STATUS_INVALID_PARAMETER_1\n",
               VAR_6, VAR_7);
    }

    FUNC_5(VAR_4, ((void*)0));
}
