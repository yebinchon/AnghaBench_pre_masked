
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT32 ;
typedef int * PUCHAR ;



VOID
FUNC_0(
    PUCHAR VAR_0,
    PUCHAR VAR_1)
{
    UINT32 VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
        {
            *VAR_0 = VAR_1[VAR_2 * 8 + VAR_3];
            VAR_0++;
        }


        for (VAR_3 = 8; VAR_3 < 32; VAR_3++)
        {
            *VAR_0 = 0;
            VAR_0++;
        }
    }
}
