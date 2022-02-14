
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int * PUCHAR ;



__attribute__((used)) static PUCHAR FUNC_0(UCHAR *VAR_0, ULONG VAR_1, UCHAR *VAR_2, ULONG VAR_3)
{
    UCHAR *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    ULONG VAR_8, VAR_9;
    ULONG VAR_10, VAR_11;
    WORD VAR_12, VAR_13;

    VAR_4 = VAR_2;
    VAR_5 = VAR_2 + VAR_3;
    VAR_6 = VAR_0;
    VAR_7 = VAR_0 + VAR_1;


    while (VAR_4 < VAR_5 && VAR_6 < VAR_7)
    {

        VAR_12 = 0x8000 | *VAR_4++;


        while ((VAR_12 & 0xFF00) && VAR_4 < VAR_5)
        {
            if (VAR_12 & 1)
            {

                if (VAR_4 + sizeof(WORD) > VAR_5)
                    return ((void*)0);
                VAR_13 = *(WORD *)VAR_4;
                VAR_4 += sizeof(WORD);


                for (VAR_8 = 12; VAR_8 > 4; VAR_8--)
                    if ((1 << (VAR_8 - 1)) < VAR_6 - VAR_0) break;
                VAR_9 = 16 - VAR_8;
                VAR_11 = (VAR_13 & ((1 << VAR_9) - 1)) + 3;
                VAR_10 = (VAR_13 >> VAR_9) + 1;


                if (VAR_6 < VAR_0 + VAR_10)
                    return ((void*)0);



                while (VAR_11--)
                {
                    if (VAR_6 >= VAR_7) return VAR_6;
                    *VAR_6 = *(VAR_6 - VAR_10);
                    VAR_6++;
                }
            }
            else
            {

                if (VAR_6 >= VAR_7) return VAR_6;
                *VAR_6++ = *VAR_4++;
            }
            VAR_12 >>= 1;
        }

    }

    return VAR_6;
}
