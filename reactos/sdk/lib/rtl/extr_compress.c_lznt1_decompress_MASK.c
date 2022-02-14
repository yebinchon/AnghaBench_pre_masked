
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static NTSTATUS FUNC_4(UCHAR *VAR_3, ULONG VAR_4, UCHAR *VAR_5, ULONG VAR_6,
                                 ULONG VAR_7, ULONG *VAR_8, UCHAR *VAR_9)
{
    UCHAR *VAR_10 = VAR_5, *VAR_11 = VAR_5 + VAR_6;
    UCHAR *VAR_12 = VAR_3, *VAR_13 = VAR_3 + VAR_4;
    ULONG VAR_14, VAR_15;
    WORD VAR_16;
    UCHAR *VAR_17;

    if (VAR_10 + sizeof(WORD) > VAR_11)
        return VAR_1;


    while (VAR_7 >= 0x1000 && VAR_10 + sizeof(WORD) <= VAR_11)
    {

        VAR_16 = *(WORD *)VAR_10;
        VAR_10 += sizeof(WORD);
        if (!VAR_16) goto out;
        VAR_14 = (VAR_16 & 0xFFF) + 1;


        if (VAR_10 + VAR_14 > VAR_11)
            return VAR_1;

        VAR_10 += VAR_14;
        VAR_7 -= 0x1000;
    }


    if (VAR_7 && VAR_10 + sizeof(WORD) <= VAR_11)
    {

        VAR_16 = *(WORD *)VAR_10;
        VAR_10 += sizeof(WORD);
        if (!VAR_16) goto out;
        VAR_14 = (VAR_16 & 0xFFF) + 1;


        if (VAR_10 + VAR_14 > VAR_11)
            return VAR_1;

        if (VAR_12 >= VAR_13)
            goto out;

        if (VAR_16 & 0x8000)
        {

            if (!VAR_9) return VAR_0;
            VAR_17 = FUNC_0(VAR_9, 0x1000, VAR_10, VAR_14);
            if (!VAR_17) return VAR_1;
            if (VAR_17 - VAR_9 > VAR_7)
            {
                VAR_15 = FUNC_3((VAR_17 - VAR_9) - VAR_7, VAR_13 - VAR_12);
                FUNC_1(VAR_12, VAR_9 + VAR_7, VAR_15);
                VAR_12 += VAR_15;
            }
        }
        else
        {

            if (VAR_14 > VAR_7)
            {
                VAR_15 = FUNC_3(VAR_14 - VAR_7, VAR_13 - VAR_12);
                FUNC_1(VAR_12, VAR_10 + VAR_7, VAR_15);
                VAR_12 += VAR_15;
            }
        }

        VAR_10 += VAR_14;
    }


    while (VAR_10 + sizeof(WORD) <= VAR_11)
    {

        VAR_16 = *(WORD *)VAR_10;
        VAR_10 += sizeof(WORD);
        if (!VAR_16) goto out;
        VAR_14 = (VAR_16 & 0xFFF) + 1;

        if (VAR_10 + VAR_14 > VAR_11)
            return VAR_1;


        VAR_15 = ((VAR_12 - VAR_3) + VAR_7) & 0xFFF;
        if (VAR_15)
        {
            VAR_15 = 0x1000 - VAR_15;
            if (VAR_12 + VAR_15 >= VAR_13)
                goto out;
            FUNC_2(VAR_12, 0, VAR_15);
            VAR_12 += VAR_15;
        }

        if (VAR_12 >= VAR_13)
            goto out;

        if (VAR_16 & 0x8000)
        {

            VAR_12 = FUNC_0(VAR_12, VAR_13 - VAR_12, VAR_10, VAR_14);
            if (!VAR_12) return VAR_1;
        }
        else
        {

            VAR_15 = FUNC_3(VAR_14, VAR_13 - VAR_12);
            FUNC_1(VAR_12, VAR_10, VAR_15);
            VAR_12 += VAR_15;
        }

        VAR_10 += VAR_14;
    }

out:
    if (VAR_8)
        *VAR_8 = VAR_12 - VAR_3;

    return VAR_2;

}
