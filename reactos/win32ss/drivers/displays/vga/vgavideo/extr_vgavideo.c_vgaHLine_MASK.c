
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef int PUCHAR ;
typedef int LONG ;
typedef int INT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int* VAR_3 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

BOOL FUNC_5(INT VAR_8, INT VAR_9, INT VAR_10, UCHAR VAR_11)
{
    ULONG VAR_12, VAR_13, VAR_14;

    LONG VAR_15, VAR_16, VAR_17;

    VAR_12 = VAR_8;
    VAR_15 = 7 - FUNC_4(VAR_8-1);
    VAR_17 = FUNC_4(VAR_8+VAR_10);
    VAR_16 = (VAR_10-VAR_15-VAR_17) / 8;

    VAR_13 = VAR_6[(VAR_8-1)&~7] + VAR_7[VAR_9];



    if ( (VAR_15+VAR_17) > VAR_10 )
    {
        int VAR_18 = VAR_4[VAR_15] & VAR_3[VAR_17];

        FUNC_1((PUCHAR)VAR_1,0x08);
        FUNC_1((PUCHAR)VAR_0,VAR_18);

        FUNC_0(VAR_5 + VAR_13);
        FUNC_2(VAR_5 + VAR_13, VAR_11);

        return VAR_2;
    }


    if ( VAR_15 > 0 )
    {

        FUNC_1((PUCHAR)VAR_1,0x08);
        FUNC_1((PUCHAR)VAR_0,VAR_4[VAR_15]);

        FUNC_0(VAR_5 + VAR_13);
        FUNC_2(VAR_5 + VAR_13, VAR_11);


        VAR_8 = VAR_12 + 8;
    }

    if ( VAR_16 > 0 )
    {
        VAR_14 = VAR_6[VAR_8] + VAR_7[VAR_9];


        FUNC_1((PUCHAR)VAR_1, 0x08);
        FUNC_1((PUCHAR)VAR_0, 0xff);
        FUNC_3(VAR_5+VAR_14, VAR_11, VAR_16);
    }

    if ( VAR_17 > 0 )
    {
        VAR_8 = VAR_12 + VAR_10 - VAR_17;
        VAR_13 = VAR_6[VAR_8] + VAR_7[VAR_9];


        FUNC_1((PUCHAR)VAR_1,0x08);
        FUNC_1((PUCHAR)VAR_0, VAR_3[VAR_17]);
        FUNC_0(VAR_5 + VAR_13);
        FUNC_2(VAR_5 + VAR_13, VAR_11);
    }

    return VAR_2;
}
