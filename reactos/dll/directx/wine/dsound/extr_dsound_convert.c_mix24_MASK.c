
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,int*,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(BYTE *VAR_0, INT *VAR_1, unsigned VAR_2)
{
    FUNC_0("%p - %p %d\n", VAR_0, VAR_1, VAR_2);
    VAR_2 /= 3;
    while (VAR_2--)
    {
        DWORD VAR_3;
        VAR_3 = ((DWORD)VAR_0[2] << 16) + ((DWORD)VAR_0[1] << 8) + (DWORD)VAR_0[0];
        if (VAR_0[2] & 0x80)
            VAR_3 |= 0xFF000000U;
        *(VAR_1++) += VAR_3;
        ++VAR_0;
    }
}
