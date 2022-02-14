
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int INT ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int,int,int) ;

__attribute__((used)) static void
FUNC_2(WCHAR *VAR_0)
{
    INT VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 > 0)
    {
        FUNC_1(VAR_0, VAR_1 - 1, L'\0', L'|');
        VAR_0[VAR_1 - 1] = 0;
    }
    else
    {
        VAR_0[0] = 0;
    }

}
