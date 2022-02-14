
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PUSHORT ;
typedef int PCPTABLEINFO ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

PUSHORT
FUNC_7(const WCHAR *VAR_5, PCPTABLEINFO VAR_6)
{
    HANDLE VAR_7;

    VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_1, ((void*)0), VAR_4, 0, ((void*)0));
    if (VAR_7 != VAR_3)
    {
        PUSHORT VAR_8;
        DWORD VAR_9;
        DWORD VAR_10;

        VAR_10 = FUNC_2(VAR_7, ((void*)0));
        VAR_8 = FUNC_6(VAR_10);
        if (VAR_8 != ((void*)0))
        {
            if (FUNC_4(VAR_7, VAR_8, VAR_10, &VAR_9, ((void*)0)) != VAR_0)
            {
                FUNC_3(VAR_8, VAR_6);
                FUNC_0(VAR_7);

                return VAR_8;
            }

            FUNC_5(VAR_8);
        }

        FUNC_0(VAR_7);
    }

    return ((void*)0);
}
