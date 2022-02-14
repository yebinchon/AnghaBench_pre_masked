
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwValue ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static DWORD FUNC_3(void)
{
    HKEY VAR_9;
    DWORD VAR_10, VAR_11, VAR_12;
    DWORD VAR_13 = VAR_4 | VAR_5 | VAR_3;

    if (FUNC_1(VAR_1, VAR_6, &VAR_9) == VAR_0)
    {

        VAR_12 = sizeof(VAR_11);
        if (FUNC_2(VAR_9, VAR_7, ((void*)0), &VAR_10, (LPBYTE) &VAR_11, &VAR_12) == VAR_0)
        {
            if (VAR_10 == VAR_2)
                VAR_13 = (VAR_13 & ~0x0000FFFF) | ((VAR_11 & 0x0000FFFF) << 0);
        }


        VAR_12 = sizeof(VAR_11);
        if (FUNC_2(VAR_9, VAR_8, ((void*)0), &VAR_10, (LPBYTE) &VAR_11, &VAR_12) == VAR_0)
        {
            if (VAR_10 == VAR_2)
                VAR_13 = (VAR_13 & ~0xFFFF0000) | ((VAR_11 & 0x0000FFFF) << 16);
        }

        FUNC_0(VAR_9);
    }
    return VAR_13;
}
