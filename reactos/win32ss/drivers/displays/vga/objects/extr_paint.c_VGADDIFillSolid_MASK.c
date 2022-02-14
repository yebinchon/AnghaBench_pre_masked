
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int right; int left; int bottom; int top; } ;
typedef int SURFOBJ ;
typedef TYPE_1__ RECTL ;
typedef int PUCHAR ;
typedef int BOOL ;


 int FUNC_0 (char*,int,int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;
 int* VAR_3 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

BOOL FUNC_6(SURFOBJ *VAR_8, RECTL VAR_9, ULONG VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    ULONG VAR_18, VAR_19, VAR_20, VAR_21;

    int VAR_22, VAR_23, VAR_24;



    if ( VAR_9.right < VAR_9.left )
    {
        VAR_11 = VAR_9.right;
        VAR_13 = VAR_9.left;
    }
    else
    {
        VAR_13 = VAR_9.right;
        VAR_11 = VAR_9.left;
    }
    if ( VAR_9.bottom < VAR_9.top )
    {
        VAR_12 = VAR_9.bottom;
        VAR_14 = VAR_9.top;
    }
    else
    {
        VAR_14 = VAR_9.bottom;
        VAR_12 = VAR_9.top;
    }


    VAR_15 = VAR_13 - VAR_11;
    VAR_16 = VAR_14 - VAR_12;

    FUNC_0("VGADDIFillSolid: x:%d, y:%d, w:%d, h:%d\n", VAR_11, VAR_12, VAR_15, VAR_16);





    VAR_18 = VAR_11;


    VAR_22 = 7 - FUNC_5(VAR_11-1);
    VAR_24 = FUNC_5(VAR_11+VAR_15);
    VAR_23 = (VAR_15-VAR_22-VAR_24) / 8;

    VAR_19 = VAR_6[(VAR_11-1)&~7] + VAR_7[VAR_12];



    if ( (VAR_22+VAR_24) > VAR_15 )
    {
        int VAR_25 = VAR_4[VAR_22] & VAR_3[VAR_24];

        FUNC_2((PUCHAR)VAR_1,0x08);
        FUNC_2((PUCHAR)VAR_0,VAR_25);

        VAR_21 = VAR_19;
        for ( VAR_17 = VAR_12; VAR_17 < VAR_12+VAR_16; VAR_17++ )
        {
            FUNC_1 ( VAR_5+VAR_21 );
            FUNC_3 ( VAR_5+VAR_21, VAR_10 );
            VAR_21 += 80;
        }
        return VAR_2;
    }

    if ( VAR_22 > 0 )
    {

        FUNC_2((PUCHAR)VAR_1,0x08);
        FUNC_2((PUCHAR)VAR_0,VAR_4[VAR_22]);

        VAR_21 = VAR_19;
        for ( VAR_17 = VAR_12; VAR_17 < VAR_12+VAR_16; VAR_17++ )
        {
            FUNC_1(VAR_5 + VAR_21);
            FUNC_3(VAR_5 + VAR_21, VAR_10);
            VAR_21 += 80;
        }


        VAR_11 = VAR_18 + 8;
    }

    if ( VAR_23 > 0 )
    {
        VAR_20=VAR_6[VAR_11] + VAR_7[VAR_12];


        FUNC_2((PUCHAR)VAR_1, 0x08);

        FUNC_2((PUCHAR)VAR_0, 0xff);

        for ( VAR_17 = VAR_12; VAR_17 < VAR_12+VAR_16; VAR_17++ )
        {
            FUNC_4(VAR_5+VAR_20, VAR_10, VAR_23);
            VAR_20 += 80;
        }
    }

    VAR_11 = VAR_18 + VAR_15 - VAR_24;
    VAR_19 = VAR_6[VAR_11] + VAR_7[VAR_12];


    FUNC_2((PUCHAR)VAR_1,0x08);
    FUNC_2((PUCHAR)VAR_0,VAR_3[VAR_24]);

    for ( VAR_17 = VAR_12; VAR_17 < VAR_12+VAR_16; VAR_17++ )
    {
        FUNC_1(VAR_5 + VAR_19);
        FUNC_3(VAR_5 + VAR_19, VAR_10);
        VAR_19 += 80;
    }

    return VAR_2;
}
