
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int* PVOID ;
typedef int* PUSHORT ;
typedef int* PULONG ;
typedef int* PUCHAR ;
typedef int NTSTATUS ;


 int* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;

NTSTATUS
FUNC_2(
    PUCHAR VAR_3,
    ULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    ULONG VAR_7,
    PVOID * VAR_8,
    PULONG VAR_9)
{
    ULONG VAR_10;
    ULONG VAR_11, VAR_12;

    VAR_10 = VAR_4 / (VAR_7 / 8) / VAR_5;

    if (VAR_6 > VAR_5)
    {
        if (VAR_7 == 8)
        {
            PUCHAR VAR_13 = FUNC_0(VAR_0, VAR_10 * VAR_6);
            if (!VAR_13)
                return VAR_1;

            for(VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_10 * VAR_5; VAR_11 += VAR_6, VAR_12 += VAR_5)
            {
                ULONG VAR_14 = 0;

                FUNC_1(&VAR_13[VAR_11], &VAR_3[VAR_12], VAR_5 * sizeof(UCHAR));

                do
                {

                     VAR_13[VAR_11+VAR_5 + VAR_14] = VAR_3[VAR_12 + (VAR_14 % VAR_5)];
                }while(VAR_14++ < VAR_6 - VAR_5);
            }
            *VAR_8 = VAR_13;
            *VAR_9 = VAR_10 * VAR_6;
        }
        else if (VAR_7 == 16)
        {
            PUSHORT VAR_15 = FUNC_0(VAR_0, VAR_10 * VAR_6);
            if (!VAR_15)
                return VAR_1;

            for(VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_10 * VAR_5; VAR_11 += VAR_6, VAR_12 += VAR_5)
            {
                ULONG VAR_16 = 0;

                FUNC_1(&VAR_15[VAR_11], &VAR_3[VAR_12], VAR_5 * sizeof(USHORT));

                do
                {
                     VAR_15[VAR_11+VAR_5 + VAR_16] = VAR_3[VAR_12 + (VAR_16 % VAR_5)];
                }while(VAR_16++ < VAR_6 - VAR_5);
            }
            *VAR_8 = VAR_15;
            *VAR_9 = VAR_10 * VAR_6;
        }
        else if (VAR_7 == 24)
        {
            PUCHAR VAR_17 = FUNC_0(VAR_0, VAR_10 * VAR_6);
            if (!VAR_17)
                return VAR_1;

            for(VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_10 * VAR_5; VAR_11 += VAR_6, VAR_12 += VAR_5)
            {
                ULONG VAR_18 = 0;

                FUNC_1(&VAR_17[VAR_11], &VAR_3[VAR_12], VAR_5 * 3);

                do
                {
                     FUNC_1(&VAR_17[(VAR_11+VAR_5 + VAR_18) * 3], &VAR_3[(VAR_12 + (VAR_18 % VAR_5)) * 3], 3);
                }while(VAR_18++ < VAR_6 - VAR_5);
            }
            *VAR_8 = VAR_17;
            *VAR_9 = VAR_10 * VAR_6;
        }
        else if (VAR_7 == 32)
        {
            PULONG VAR_19 = FUNC_0(VAR_0, VAR_10 * VAR_6);
            if (!VAR_19)
                return VAR_1;

            for(VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_10 * VAR_5; VAR_11 += VAR_6, VAR_12 += VAR_5)
            {
                ULONG VAR_20 = 0;

                FUNC_1(&VAR_19[VAR_11], &VAR_3[VAR_12], VAR_5 * sizeof(ULONG));

                do
                {
                     VAR_19[VAR_11+VAR_5 + VAR_20] = VAR_3[VAR_12 + (VAR_20 % VAR_5)];
                }while(VAR_20++ < VAR_6 - VAR_5);
            }
            *VAR_8 = VAR_19;
            *VAR_9 = VAR_10 * VAR_6;
        }

    }
    else
    {
        PUSHORT VAR_21 = FUNC_0(VAR_0, VAR_10 * VAR_6);
        if (!VAR_21)
            return VAR_1;

        for(VAR_11 = 0, VAR_12 = 0; VAR_12 < VAR_10 * VAR_5; VAR_11 += VAR_6, VAR_12 += VAR_5)
        {



            FUNC_1(&VAR_21[VAR_11], &VAR_3[VAR_12], VAR_6 * (VAR_7/8));
        }

        *VAR_8 = VAR_21;
        *VAR_9 = VAR_10 * VAR_6;
    }
    return VAR_2;
}
