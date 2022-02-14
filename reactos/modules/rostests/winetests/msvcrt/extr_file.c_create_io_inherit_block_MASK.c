
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* lpReserved2; int cbReserved2; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef int HANDLE ;
typedef int BYTE ;



__attribute__((used)) static void FUNC_0( STARTUPINFOA *VAR_0, unsigned int VAR_1, const HANDLE *VAR_2 )
{
    static BYTE VAR_3[1024];
    BYTE *VAR_4;
    HANDLE *VAR_5;
    unsigned int VAR_6;

    VAR_0->lpReserved2 = VAR_3;
    VAR_0->cbReserved2 = sizeof(unsigned) + (sizeof(char) + sizeof(HANDLE)) * VAR_1;
    VAR_4 = VAR_3 + sizeof(unsigned);
    VAR_5 = (HANDLE *)(VAR_4 + VAR_1);

    *(unsigned*)VAR_3 = VAR_1;
    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
        VAR_4[VAR_6] = 0x81;
        VAR_5[VAR_6] = VAR_2[VAR_6];
    }
}
