
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 size_t const FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(const WCHAR *VAR_3, DWORD *VAR_4)
{
    DWORD VAR_5;

    for(VAR_5=0; VAR_5<6; VAR_5++) {
        if(VAR_3[VAR_5] >= FUNC_0(VAR_2) || VAR_2[VAR_3[VAR_5]] == 0xff)
            return VAR_0;
    }
    if(VAR_3[6] != '=' || VAR_3[7] != '=')
        return VAR_0;

    *VAR_4 = (VAR_2[VAR_3[0]] << 2)
        + (VAR_2[VAR_3[1]] >> 4)
        + ((VAR_2[VAR_3[1]] & 0xf) << 12)
        + ((VAR_2[VAR_3[2]] >> 2) << 8)
        + ((VAR_2[VAR_3[2]] & 0x3) << 22)
        + (VAR_2[VAR_3[3]] << 16)
        + ((VAR_2[VAR_3[4]] << 2) << 24)
        + ((VAR_2[VAR_3[5]] >> 4) << 24);
    return VAR_1;
}
