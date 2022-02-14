
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PEXT2_FILESYS ;


 int VAR_0 ;
 int VAR_1 ;

ULONG
FUNC_0(PEXT2_FILESYS VAR_2, ULONG VAR_3)
{
    ULONG VAR_4[4] = {1, 1, 1, 1};
    ULONG VAR_5[4] = {0, 0, 0, 0};
    ULONG VAR_6 = 0;
    ULONG VAR_7, VAR_8;

    if (VAR_3 <= VAR_1)
    {
        return VAR_3;
    }

    VAR_3 -= VAR_1;

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
    {
        VAR_4[VAR_7] = VAR_4[VAR_7] << ((VAR_0 - 2) * VAR_7);

        if (VAR_7 > 0)
        {
            VAR_5[VAR_7] = 1 + (VAR_5[VAR_7 - 1] << (VAR_0 - 2));
        }
    }

    for( VAR_7=1; (VAR_7 < 4) && (VAR_3 > 0); VAR_7++)
    {
        if (VAR_3 >= VAR_4[VAR_7])
        {
            VAR_3 -= VAR_4[VAR_7];
            VAR_6 += (VAR_4[VAR_7] + VAR_5[VAR_7]);
        }
        else
        {
            ULONG VAR_9 = 0;
            ULONG VAR_10 = 0;

            for (VAR_8=VAR_7; (VAR_8 > 0) && (VAR_3 > 0); VAR_8--)
            {
                VAR_9 = (VAR_3) / (VAR_4[VAR_8-1]);
                VAR_10 = (VAR_3) % (VAR_4[VAR_8-1]);

                VAR_6 += (VAR_9 * (VAR_4[VAR_8-1] + VAR_5[VAR_8-1]) + 1);
                VAR_3 = VAR_10;
            }
        }
    }

    return (VAR_6 + VAR_1);
}
