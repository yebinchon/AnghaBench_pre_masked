
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef size_t BYTE ;



__attribute__((used)) static UINT FUNC_0(const BYTE *VAR_0, UINT VAR_1, UINT VAR_2)
{
    UINT VAR_3 = 0, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 += (VAR_0[VAR_1 + VAR_4] << VAR_4 * 8);

    return VAR_3;
}
