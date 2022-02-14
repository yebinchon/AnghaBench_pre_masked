
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;

__attribute__((used)) static INT
FUNC_1(const WCHAR *VAR_0)
{
    INT VAR_1, VAR_2 = 0;
    for (;;)
    {
        VAR_1 = FUNC_0(VAR_0);
        VAR_2 += VAR_1 + 1;
        VAR_0 += VAR_1 + 1;
        if (*VAR_0 == 0)
            break;
    }
    ++VAR_2;
    return VAR_2;
}
