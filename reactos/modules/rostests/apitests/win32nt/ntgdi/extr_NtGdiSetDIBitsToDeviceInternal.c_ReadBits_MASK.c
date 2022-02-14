
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PDWORD ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int) ;

void
FUNC_1(HDC VAR_0, PDWORD VAR_1)
{
    int VAR_2,VAR_3;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
        DWORD VAR_4 = 0;
        for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
            VAR_4 |= (0x80 & FUNC_0(VAR_0, 2 + VAR_2, 3 + VAR_3)) >> VAR_2;
        VAR_1[VAR_3] = VAR_4;
    }
}
