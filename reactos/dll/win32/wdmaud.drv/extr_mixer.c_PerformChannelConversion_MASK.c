
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
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (char*,int,int) ;

DWORD
FUNC_4(
    PUCHAR VAR_2,
    ULONG VAR_3,
    ULONG VAR_4,
    ULONG VAR_5,
    ULONG VAR_6,
    PVOID * VAR_7,
    PULONG VAR_8)
{
    ULONG VAR_9;
    ULONG VAR_10, VAR_11;

    VAR_9 = VAR_3 / (VAR_6 / 8) / VAR_4;

    FUNC_3(L"PerformChannelConversion OldChannels %u NewChannels %u\n", VAR_4, VAR_5);

    if (VAR_5 > VAR_4)
    {
        if (VAR_6 == 8)
        {
            PUCHAR VAR_12 = FUNC_1(FUNC_0(), 0, VAR_9 * VAR_5);
            if (!VAR_12)
                return VAR_0;

            for(VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9 * VAR_4; VAR_10 += VAR_5, VAR_11 += VAR_4)
            {
                ULONG VAR_13 = 0;

                FUNC_2(&VAR_12[VAR_10], &VAR_2[VAR_11], VAR_4 * sizeof(UCHAR));

                do
                {

                     VAR_12[VAR_10+VAR_4 + VAR_13] = VAR_2[VAR_11 + (VAR_13 % VAR_4)];
                }while(VAR_13++ < VAR_5 - VAR_4);
            }
            *VAR_7 = VAR_12;
            *VAR_8 = VAR_9 * VAR_5;
        }
        else if (VAR_6 == 16)
        {
            PUSHORT VAR_14 = FUNC_1(FUNC_0(), 0, VAR_9 * VAR_5);
            if (!VAR_14)
                return VAR_0;

            for(VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9 * VAR_4; VAR_10 += VAR_5, VAR_11 += VAR_4)
            {
                ULONG VAR_15 = 0;

                FUNC_2(&VAR_14[VAR_10], &VAR_2[VAR_11], VAR_4 * sizeof(USHORT));

                do
                {
                     VAR_14[VAR_10+VAR_4 + VAR_15] = VAR_2[VAR_11 + (VAR_15 % VAR_4)];
                }while(VAR_15++ < VAR_5 - VAR_4);
            }
            *VAR_7 = VAR_14;
            *VAR_8 = VAR_9 * VAR_5;
        }
        else if (VAR_6 == 24)
        {
            PUCHAR VAR_16 = FUNC_1(FUNC_0(), 0, VAR_9 * VAR_5);
            if (!VAR_16)
                return VAR_0;

            for(VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9 * VAR_4; VAR_10 += VAR_5, VAR_11 += VAR_4)
            {
                ULONG VAR_17 = 0;

                FUNC_2(&VAR_16[VAR_10], &VAR_2[VAR_11], VAR_4 * 3);

                do
                {
                     FUNC_2(&VAR_16[(VAR_10+VAR_4 + VAR_17) * 3], &VAR_2[(VAR_11 + (VAR_17 % VAR_4)) * 3], 3);
                }while(VAR_17++ < VAR_5 - VAR_4);
            }
            *VAR_7 = VAR_16;
            *VAR_8 = VAR_9 * VAR_5;
        }
        else if (VAR_6 == 32)
        {
            PULONG VAR_18 = FUNC_1(FUNC_0(), 0, VAR_9 * VAR_5);
            if (!VAR_18)
                return VAR_0;

            for(VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9 * VAR_4; VAR_10 += VAR_5, VAR_11 += VAR_4)
            {
                ULONG VAR_19 = 0;

                FUNC_2(&VAR_18[VAR_10], &VAR_2[VAR_11], VAR_4 * sizeof(ULONG));

                do
                {
                     VAR_18[VAR_10+VAR_4 + VAR_19] = VAR_2[VAR_11 + (VAR_19 % VAR_4)];
                }while(VAR_19++ < VAR_5 - VAR_4);
            }
            *VAR_7 = VAR_18;
            *VAR_8 = VAR_9 * VAR_5;
        }

    }
    else
    {
        PUSHORT VAR_20 = FUNC_1(FUNC_0(), 0, VAR_9 * VAR_5);
        if (!VAR_20)
            return VAR_0;

        for(VAR_10 = 0, VAR_11 = 0; VAR_11 < VAR_9 * VAR_4; VAR_10 += VAR_5, VAR_11 += VAR_4)
        {



            FUNC_2(&VAR_20[VAR_10], &VAR_2[VAR_11], VAR_5 * (VAR_6/8));
        }

        *VAR_7 = VAR_20;
        *VAR_8 = VAR_9 * VAR_5;
    }
    return VAR_1;
}
