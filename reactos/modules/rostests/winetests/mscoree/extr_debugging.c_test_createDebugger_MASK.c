
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int ICorDebug ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int,int ,int **) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_9(void)
{
    HRESULT VAR_5;
    IUnknown *VAR_6;
    ICorDebug *VAR_7;

    VAR_5 = FUNC_7(0, VAR_4, &VAR_6);
    FUNC_6(VAR_5 == VAR_0, "CreateDebuggingInterfaceFromVersion returned %08x\n", VAR_5);

    VAR_5 = FUNC_7(1, VAR_4, &VAR_6);
    FUNC_6(VAR_5 == VAR_0, "CreateDebuggingInterfaceFromVersion returned %08x\n", VAR_5);

    VAR_5 = FUNC_7(2, VAR_4, &VAR_6);
    FUNC_6(VAR_5 == VAR_0, "CreateDebuggingInterfaceFromVersion returned %08x\n", VAR_5);

    VAR_5 = FUNC_7(4, VAR_4, &VAR_6);
    FUNC_6(VAR_5 == VAR_0, "CreateDebuggingInterfaceFromVersion returned %08x\n", VAR_5);

    VAR_5 = FUNC_7(3, VAR_4, ((void*)0));
    FUNC_6(VAR_5 == VAR_0, "CreateDebuggingInterfaceFromVersion returned %08x\n", VAR_5);

    VAR_5 = FUNC_7(3, VAR_4, &VAR_6);
    if(VAR_5 == VAR_3)
    {
        VAR_5 = FUNC_3(VAR_6, &VAR_1, (void**)&VAR_7);
        FUNC_6(VAR_5 == VAR_3, "expected S_OK got %08x\n", VAR_5);
        if(VAR_5 == VAR_3)
        {
            VAR_5 = FUNC_0(VAR_7);
            FUNC_6(VAR_5 == VAR_3, "expected S_OK got %08x\n", VAR_5);
            if(VAR_5 == VAR_3)
            {
                VAR_5 = FUNC_2(VAR_7, ((void*)0));
                FUNC_6(VAR_5 == VAR_0, "expected E_INVALIDARG got %08x\n", VAR_5);

                VAR_5 = FUNC_2(VAR_7, &VAR_2);
                FUNC_6(VAR_5 == VAR_3, "expected S_OK got %08x\n", VAR_5);


                FUNC_5(VAR_7, 0);
            }

            FUNC_1(VAR_7);
        }
        FUNC_4(VAR_6);
    }
    else
    {
        FUNC_8(".NET 2.0 or mono not installed.\n");
    }
}
