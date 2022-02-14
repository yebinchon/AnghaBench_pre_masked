
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef scalar_t__ HANDLE ;
typedef int DEVMODEA ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,char*,int *,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,scalar_t__*,int *) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static void FUNC_12(void)
{
    HANDLE VAR_4;
    LONG VAR_5, VAR_6;
    DEVMODEA *VAR_7;
    char VAR_8[] = "";

    if (!VAR_3)
    {
        FUNC_9("There is no default printer installed\n");
        return;
    }

    VAR_4 = 0;
    VAR_6 = FUNC_6(VAR_3, &VAR_4, ((void*)0));
    if (!VAR_6)
    {
        FUNC_9("Unable to open the default printer (%s)\n", VAR_3);
        return;
    }
    FUNC_8(VAR_4 != 0, "wrong hprn %p\n", VAR_4);

    VAR_5 = FUNC_1(0, VAR_4, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_11("DEVMODEA required size %d\n", VAR_5);
    FUNC_8(VAR_5 >= sizeof(DEVMODEA), "unexpected DocumentPropertiesA ret value %d\n", VAR_5);

    VAR_7 = FUNC_4(FUNC_3(), VAR_1, VAR_5);

    VAR_6 = FUNC_1(0, VAR_4, ((void*)0), VAR_7, VAR_7, VAR_0);
    FUNC_8(VAR_6 == VAR_2, "DocumentPropertiesA ret value %d != expected IDOK\n", VAR_6);

    VAR_6 = FUNC_1(0, VAR_4, VAR_8, VAR_7, VAR_7, VAR_0);
    FUNC_8(VAR_6 == VAR_2, "DocumentPropertiesA ret value %d != expected IDOK\n", VAR_6);

    FUNC_10(VAR_7, VAR_5, VAR_3);

    FUNC_5(FUNC_3(), 0, VAR_7);

    FUNC_7(0xdeadbeef);
    VAR_6 = FUNC_0(VAR_4);
    FUNC_8(VAR_6, "ClosePrinter error %d\n", FUNC_2());
}
