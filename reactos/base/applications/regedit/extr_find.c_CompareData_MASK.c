
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_2(
    DWORD VAR_9,
    LPCWSTR VAR_10,
    LPCWSTR VAR_11)
{
    INT VAR_12, VAR_13 = FUNC_1(VAR_10), VAR_14 = FUNC_1(VAR_11);
    if (VAR_9 == VAR_4 || VAR_9 == VAR_3)
    {
        if (VAR_8 & VAR_6)
        {
            if (VAR_8 & VAR_5)
                return 2 == FUNC_0(VAR_1, 0,
                                          VAR_10, VAR_13, VAR_11, VAR_14);
            else
                return 2 == FUNC_0(VAR_1,
                                          VAR_2, VAR_10, VAR_13, VAR_11, VAR_14);
        }

        for(VAR_12 = 0; VAR_12 <= VAR_13 - VAR_14; VAR_12++)
        {
            if (VAR_8 & VAR_5)
            {
                if (2 == FUNC_0(VAR_1, 0,
                                       VAR_10 + VAR_12, VAR_14, VAR_11, VAR_14))
                    return VAR_7;
            }
            else
            {
                if (2 == FUNC_0(VAR_1,
                                       VAR_2, VAR_10 + VAR_12, VAR_14, VAR_11, VAR_14))
                    return VAR_7;
            }
        }
    }
    return VAR_0;
}
