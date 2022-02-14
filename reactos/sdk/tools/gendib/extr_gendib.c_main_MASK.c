
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DestBpp ;


 int FUNC_0 (char*,unsigned int) ;

int
FUNC_1(int VAR_0, char *VAR_1[])
{
    unsigned VAR_2;
    static unsigned VAR_3[] =
    { 8, 16, 32 };

    if (VAR_0 < 2)
        return 0;

    for (VAR_2 = 0; VAR_2 < sizeof(VAR_3) / sizeof(VAR_3[0]); VAR_2++)
    {
        FUNC_0(VAR_1[1], VAR_3[VAR_2]);
    }

    return 0;
}
