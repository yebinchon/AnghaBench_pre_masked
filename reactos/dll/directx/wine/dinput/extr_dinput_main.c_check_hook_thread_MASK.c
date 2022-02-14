
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HMODULE ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ,int *) ;
 int * FUNC_2 (int *,int ,int ,int *,int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int const*,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static BOOL FUNC_11(void)
{
    static HANDLE VAR_10;
    HMODULE VAR_11;

    FUNC_3(&VAR_5);

    FUNC_7("IDirectInputs left: %d\n", FUNC_9(&VAR_6));
    if (!FUNC_10(&VAR_6) && !VAR_10)
    {
        FUNC_4(VAR_2, (const WCHAR*)VAR_0, &VAR_11);
        VAR_7 = FUNC_1(((void*)0), VAR_1, VAR_1, ((void*)0));
        VAR_10 = FUNC_2(((void*)0), 0, VAR_9, VAR_7, 0, &VAR_8);
    }
    else if (FUNC_10(&VAR_6) && VAR_10)
    {
        DWORD VAR_12 = VAR_8;

        if (VAR_7)
        {
            FUNC_8(VAR_7, VAR_3);
            FUNC_0(VAR_7);
            VAR_7 = ((void*)0);
        }

        VAR_8 = 0;
        FUNC_6(VAR_12, VAR_4+0x10, 0, 0);
        FUNC_0(VAR_10);
        VAR_10 = ((void*)0);
    }

    FUNC_5(&VAR_5);
    return VAR_8 != 0;
}
