
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT ;
typedef size_t BYTE ;



__attribute__((used)) static UINT FUNC_0( BYTE *const *VAR_0, UINT VAR_1, UINT VAR_2, UINT VAR_3 )
{
    UINT VAR_4 = 0, VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_4 += VAR_0[VAR_1][VAR_2 + VAR_5] << VAR_5 * 8;

    return VAR_4;
}
