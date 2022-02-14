
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static void FUNC_1(DWORD *VAR_0, UINT VAR_1, BOOL VAR_2)
{
    UINT VAR_3;

    if (VAR_2)
        FUNC_0(VAR_1 == 17, "expected 17, got %u\n", VAR_1);
    else
        FUNC_0(VAR_1 == 16, "expected 16, got %u\n", VAR_1);

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
    {
        VAR_0[VAR_3] = 0xff000000;
        if (VAR_3 & 1) VAR_0[VAR_3] |= 0xff;
        if (VAR_3 & 2) VAR_0[VAR_3] |= 0xff00;
        if (VAR_3 & 4) VAR_0[VAR_3] |= 0xff0000;
    }

    for (VAR_3 = 8; VAR_3 < 16; VAR_3++)
    {
        static const DWORD VAR_4[8] = { 0xc0c0c0, 0x808080, 0x800000, 0x008000,
                                           0x000080, 0x808000, 0x800080, 0x008080 };
        VAR_0[VAR_3] = 0xff000000;
        VAR_0[VAR_3] |= VAR_4[VAR_3-8];
    }

    if (VAR_2)
        VAR_0[VAR_3] = 0;
}
