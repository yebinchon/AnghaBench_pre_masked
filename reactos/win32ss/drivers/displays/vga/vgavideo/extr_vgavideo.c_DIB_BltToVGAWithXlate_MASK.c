
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLATEOBJ ;
typedef size_t ULONG ;
typedef int* PUCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int) ;
 int* VAR_2 ;
 size_t VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;

void FUNC_4(int VAR_6, int VAR_7, int VAR_8, int VAR_9, void *VAR_10, int VAR_11, XLATEOBJ* VAR_12)
{
    PUCHAR VAR_13, VAR_14 = VAR_10;
    ULONG VAR_15, VAR_16;
    ULONG VAR_17 = VAR_6 + VAR_8;
    ULONG VAR_18 = VAR_7 + VAR_9;
    ULONG VAR_19;

    for (VAR_15 = VAR_6; VAR_15 < VAR_17; VAR_15++)
    {
        VAR_13 = VAR_14;
        VAR_19 = VAR_4[VAR_15] + VAR_5[VAR_7];

        FUNC_1((PUCHAR)VAR_1, 0x08);
        FUNC_1((PUCHAR)VAR_0, VAR_2[VAR_15]);

        if (0 == ((VAR_15 - VAR_6) % 2))
        {
            for (VAR_16 = VAR_7; VAR_16 < VAR_18; VAR_16++)
            {
                FUNC_0(VAR_3 + VAR_19);
                FUNC_2(VAR_3 + VAR_19, FUNC_3(VAR_12, (*VAR_13 & 0xf0) >> 4));
                VAR_19 += 80;
                VAR_13 += VAR_11;
            }
        }
        else
        {
            for (VAR_16 = VAR_7; VAR_16 < VAR_18; VAR_16++)
            {
                FUNC_0(VAR_3 + VAR_19);
                FUNC_2(VAR_3 + VAR_19, FUNC_3(VAR_12, *VAR_13 & 0x0f));
                VAR_19 += 80;
                VAR_13 += VAR_11;
            }
        }

        if (0 != ((VAR_15 - VAR_6) % 2))
            VAR_14++;
    }
}
