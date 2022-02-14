
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;
typedef int LPCTSTR ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ,scalar_t__**,int ) ;

__attribute__((used)) static INT FUNC_2(INT (*VAR_0)(LPCTSTR, LPCTSTR),
                      LPCTSTR VAR_1, LPCTSTR VAR_2)
{
    TCHAR *VAR_3;
    INT VAR_4 = FUNC_1(VAR_1, &VAR_3, 0);
    if (*VAR_3 == FUNC_0('\0'))
    {
        INT VAR_5 = FUNC_1(VAR_2, &VAR_3, 0);
        if (*VAR_3 == FUNC_0('\0'))
        {

            return (VAR_4 < VAR_5) ? -1 : (VAR_4 > VAR_5);
        }
    }
    return VAR_0(VAR_1, VAR_2);
}
