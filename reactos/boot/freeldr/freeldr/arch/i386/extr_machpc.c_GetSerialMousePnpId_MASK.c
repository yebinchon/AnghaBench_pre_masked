
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ PUCHAR ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static ULONG
FUNC_3(PUCHAR VAR_0, char *VAR_1)
{
    ULONG VAR_2;
    ULONG VAR_3 = 0;
    char VAR_4;
    char VAR_5;

    FUNC_2(VAR_0 + 4, 0x09);


    FUNC_1(10000);

    FUNC_2(VAR_0 + 4, 0x0b);

    FUNC_1(10000);

    for (;;)
    {
        VAR_2 = 200;
        while (((FUNC_0(VAR_0 + 5) & 1) == 0) && (VAR_2 > 0))
        {
            FUNC_1(1000);
            --VAR_2;
            if (VAR_2 == 0)
            {
                return 0;
            }
        }

        VAR_4 = FUNC_0(VAR_0);
        if (VAR_4 == 0x08 || VAR_4 == 0x28)
            break;
    }

    VAR_1[VAR_3++] = VAR_4;
    VAR_5 = VAR_4 + 1;

    for (;;)
    {
        VAR_2 = 200;
        while (((FUNC_0(VAR_0 + 5) & 1) == 0) && (VAR_2 > 0))
        {
            FUNC_1(1000);
            --VAR_2;
            if (VAR_2 == 0)
                return 0;
        }
        VAR_4 = FUNC_0(VAR_0);
        VAR_1[VAR_3++] = VAR_4;
        if (VAR_4 == VAR_5)
            break;
        if (VAR_3 >= 256)
            break;
    }

    return VAR_3;
}
