
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TOKEN_INFORMATION_CLASS ;
typedef int * LPVOID ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int *,int ,int *) ;
 int VAR_1 ;
 int * FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;

VOID* FUNC_10(TOKEN_INFORMATION_CLASS VAR_3)
{
    HANDLE VAR_4 = 0;
    DWORD VAR_5 = 0;
    VOID* VAR_6 = 0;

    if (FUNC_6(FUNC_1(), VAR_2, &VAR_4))
    {
        FUNC_4(VAR_4,
                            VAR_3,
                            ((void*)0),
                            VAR_5,
                            &VAR_5);

        if (FUNC_2() == VAR_0)
        {
            VAR_6 = FUNC_5(FUNC_3(), VAR_1, VAR_5);
            if (VAR_6 == ((void*)0))
            {
                FUNC_9(L"ERROR: not enough memory to allocate the token structure.\r\n");
                FUNC_8(1);
            }
        }

        if (!FUNC_4(VAR_4, VAR_3,
                                 (LPVOID)VAR_6,
                                 VAR_5,
                                 &VAR_5))
        {
            FUNC_9(L"ERROR 0x%x: could not get token information.\r\n", FUNC_2());
            FUNC_7(VAR_6);
            FUNC_8(1);
        }

        FUNC_0(VAR_4);
    }

    return VAR_6;
}
