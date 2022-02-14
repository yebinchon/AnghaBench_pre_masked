
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__* LPCWSTR ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static int FUNC_0(LPCWSTR VAR_0, const BOOL * VAR_1, int VAR_2)
{

    int VAR_3 = 0;
    for(; VAR_3 < VAR_2; VAR_3++)
    {
        if (VAR_0[VAR_3] == (WCHAR)'\n' || (VAR_1 && VAR_1[VAR_3]))
        {
            VAR_3++;
            break;
        }
    }

    return VAR_3;
}
