
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStillImageW ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,char*,int ) ;
 int FUNC_6 (int ,int,int **,int *) ;
 int * VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    static WCHAR VAR_4[] = {'w','i','n','e','s','t','i','t','e','s','t','a','p','p',0};
    IStillImageW *VAR_5 = ((void*)0);
    HRESULT VAR_6;

    if (VAR_3 == ((void*)0))
    {
        FUNC_8("No StiCreateInstanceW function\n");
        return;
    }

    VAR_6 = FUNC_6(FUNC_0(((void*)0)), VAR_2 | VAR_1, &VAR_5, ((void*)0));
    if (FUNC_4(VAR_6))
    {
        VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_4);
        if (VAR_6 == VAR_0)
            FUNC_7("Not authorized to register a launch application\n");
        else if (FUNC_4(VAR_6))
        {
            VAR_6 = FUNC_3(VAR_5, VAR_4);
            FUNC_5(FUNC_4(VAR_6), "could not unregister launch application, error 0x%X\n", VAR_6);
        }
        else
            FUNC_5(0, "could not register launch application, error 0x%X\n", VAR_6);
        FUNC_2(VAR_5);
    }
    else
        FUNC_5(0, "could not create StillImageW, hr = 0x%X\n", VAR_6);
}
