
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int res ;
typedef scalar_t__ ULONG ;


 int FUNC_0 (int,char*,int,scalar_t__,...) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_0, VAR_1;
    ULONG VAR_2;
    ULONG VAR_3[512];

    if (!&FUNC_1)
    {
        FUNC_2("RtlRandom is not available\n");
        return;
    }

    VAR_2 = 0;
    for (VAR_0 = 0; VAR_0 < sizeof(VAR_3) / sizeof(VAR_3[0]); VAR_0++)
    {
        VAR_3[VAR_0] = FUNC_1(&VAR_2);
        FUNC_0(VAR_2 != VAR_3[VAR_0], "%i: seed is same as res %x\n", VAR_0, VAR_2);
        for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++)
            FUNC_0(VAR_3[VAR_0] != VAR_3[VAR_1], "res[%i] (%x) is same as res[%i] (%x)\n", VAR_1, VAR_3[VAR_1], VAR_0, VAR_3[VAR_0]);
    }
}
