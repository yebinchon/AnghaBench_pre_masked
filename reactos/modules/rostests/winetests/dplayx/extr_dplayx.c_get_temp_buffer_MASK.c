
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef char* LPSTR ;



__attribute__((used)) static LPSTR FUNC_0(void)
{
    static UINT VAR_0 = 0;
    static char VAR_1[10][256];

    VAR_0 = (VAR_0 + 1) % 10;
    *VAR_1[VAR_0] = 0;

    return VAR_1[VAR_0];
}
