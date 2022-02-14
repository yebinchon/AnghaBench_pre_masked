
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef scalar_t__* LPTSTR ;
typedef int LPCTSTR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*,size_t,int ,int ) ;

BOOL
FUNC_1(LPTSTR VAR_0, size_t VAR_1, LPCTSTR VAR_2, va_list VAR_3)
{
    int VAR_4 = -1;
    if (VAR_1 > 0)
    {
        VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
        VAR_0[VAR_1 - 1] = 0;
    }
    return (VAR_4 >= 0 && (size_t)VAR_4 < VAR_1);
}
