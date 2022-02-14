
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef int* PUCHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(int VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6, int VAR_7, ULONG VAR_8)

{
    PUCHAR VAR_9 = VAR_6, VAR_10 = VAR_6;
    BOOLEAN VAR_11 = VAR_0;
    ULONG VAR_12, VAR_13;
    ULONG VAR_14 = VAR_2 + VAR_4;
    ULONG VAR_15 = VAR_3 + VAR_5;
    UCHAR VAR_16, VAR_17;


    if(FUNC_0(VAR_4) > 0)
    {
        VAR_11 = VAR_1;
        VAR_14 -= 1;
    }

    for (VAR_13=VAR_3; VAR_13<VAR_15; VAR_13++)
    {
        for (VAR_12=VAR_2; VAR_12<VAR_14; VAR_12+=2)
        {
            VAR_16 = (*VAR_9 & 0xf0) >> 4;
            VAR_17 = *VAR_9 & 0x0f;
            if(VAR_16 != VAR_8) FUNC_1(VAR_12, VAR_13, VAR_16);
            if(VAR_17 != VAR_8) FUNC_1(VAR_12+1, VAR_13, VAR_17);
            VAR_9++;
        }

        if (VAR_11)
        {
            VAR_16 = *VAR_9;
            if(VAR_16 != VAR_8) FUNC_1(VAR_14, VAR_13, VAR_16);
            VAR_9++;
        }

        VAR_10 += VAR_7;
        VAR_9 = VAR_10;
    }
}
