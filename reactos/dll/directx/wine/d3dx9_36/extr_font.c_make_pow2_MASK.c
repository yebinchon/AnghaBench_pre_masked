
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;



__attribute__((used)) static UINT FUNC_0(UINT VAR_0)
{
    UINT VAR_1 = 1;


    if (VAR_0 >= 0x80000000)
        return 0x80000000;

    while (VAR_1 < VAR_0)
        VAR_1 <<= 1;

    return VAR_1;
}
