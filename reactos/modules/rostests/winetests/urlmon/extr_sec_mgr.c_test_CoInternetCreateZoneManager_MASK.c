
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef int IInternetZoneManager ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int *,int **,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    IInternetZoneManager *VAR_6 = ((void*)0);
    IUnknown *VAR_7 = ((void*)0);
    HRESULT VAR_8;

    FUNC_8("simple zone manager tests...\n");

    VAR_8 = FUNC_7(((void*)0), &VAR_6, 0);
    FUNC_6(VAR_8 == VAR_5, "CoInternetCreateZoneManager result: 0x%x\n", VAR_8);
    if (FUNC_0(VAR_8))
        return;

    VAR_8 = FUNC_1(VAR_6, &VAR_4, (void **) &VAR_7);
    FUNC_6(FUNC_4(VAR_8), "got 0x%x with %p (expected Success)\n", VAR_8, VAR_7);
    if (VAR_7)
        FUNC_3(VAR_7);

    VAR_8 = FUNC_1(VAR_6, &VAR_1, (void **) &VAR_7);
    FUNC_6(FUNC_4(VAR_8), "got 0x%x with %p (expected Success)\n", VAR_8, VAR_7);
    if (VAR_7)
        FUNC_3(VAR_7);


    VAR_8 = FUNC_1(VAR_6, &VAR_2, (void **) &VAR_7);
    if (FUNC_4(VAR_8)) {
        FUNC_3(VAR_7);

        VAR_8 = FUNC_1(VAR_6, &VAR_3, (void **) &VAR_7);
        FUNC_6(VAR_8 == VAR_5 || FUNC_5(VAR_8 == VAR_0 ),
           "got 0x%x (expected S_OK)\n", VAR_8);
        if (VAR_7)
            FUNC_3(VAR_7);
        else
            FUNC_9("InternetZoneManagerEx2 not supported\n");

    }
    else
        FUNC_9("InternetZoneManagerEx not supported\n");

    VAR_8 = FUNC_2(VAR_6);
    FUNC_6(VAR_8 == VAR_5, "got 0x%x (expected S_OK)\n", VAR_8);

}
