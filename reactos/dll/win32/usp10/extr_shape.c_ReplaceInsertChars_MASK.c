
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef size_t INT ;
typedef int HDC ;



__attribute__((used)) static void FUNC_0(HDC VAR_0, INT VAR_1, INT* VAR_2, WCHAR *VAR_3, const WCHAR *VAR_4)
{
    int VAR_5;


    VAR_3[VAR_1] = VAR_4[0];
    VAR_1=VAR_1+1;


    for (VAR_5 = 1; VAR_5 < 3 && VAR_4[VAR_5] != 0x0000; VAR_5++)
    {
        int VAR_6;
        for (VAR_6 = *VAR_2; VAR_6 > VAR_1; VAR_6--)
            VAR_3[VAR_6] = VAR_3[VAR_6-1];
        *VAR_2= *VAR_2+1;
        VAR_3[VAR_1] = VAR_4[VAR_5];
        VAR_1 = VAR_1+1;
    }
}
