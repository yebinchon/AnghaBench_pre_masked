
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;



__attribute__((used)) static int FUNC_0(HWND VAR_0, HWND *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
        if (!VAR_1[VAR_3]) break;
        if (VAR_1[VAR_3] == VAR_0) return VAR_3;
    }
    return -1;
}
