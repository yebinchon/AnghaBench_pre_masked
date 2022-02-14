
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ PINFO ;
typedef int LPWSTR ;
typedef scalar_t__ LPSTR ;
typedef int INFO ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int,scalar_t__,int,int *,int *) ;
 int FUNC_8 (int ) ;

ULONG
FUNC_9(LPWSTR VAR_1)
{
    PINFO VAR_2;
    LPSTR VAR_3;
    DWORD VAR_4 = FUNC_8(VAR_1) + 1;
    ULONG VAR_5 = 0;

    VAR_2 = (PINFO)FUNC_2(FUNC_1(),
                             0,
                             sizeof(INFO));
    VAR_3 = (LPSTR)FUNC_2(FUNC_1(),
                              0,
                              VAR_4);

    if (VAR_2 && VAR_3)
    {
        if (FUNC_7(VAR_0,
                                0,
                                VAR_1,
                                -1,
                                VAR_3,
                                VAR_4,
                                ((void*)0),
                                ((void*)0)))
        {
            if (FUNC_4(VAR_2, VAR_3))
            {
                if (FUNC_6(VAR_2))
                {
                    VAR_5 = FUNC_5(VAR_2);
                }
            }

            FUNC_0();
        }
    }

    if (VAR_2)
        FUNC_3(FUNC_1(), 0, VAR_2);
    if (VAR_3)
        FUNC_3(FUNC_1(), 0, VAR_3);

    return VAR_5;
}
