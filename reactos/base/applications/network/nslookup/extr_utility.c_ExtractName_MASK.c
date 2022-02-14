
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UCHAR ;
typedef int* PCHAR ;



int FUNC_0( PCHAR VAR_0, PCHAR VAR_1, USHORT VAR_2, UCHAR VAR_3 )
{
    int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;

    VAR_6 = VAR_2;


    VAR_5 = VAR_3;
    if( 0 == VAR_3 ) VAR_5 = 255;

    while( VAR_5 > 0 )
    {
        VAR_9 = VAR_0[VAR_6] & 0xFF;
        VAR_6 += 1;
        if( !VAR_10 ) VAR_4 += 1;

        if( 0xC0 == VAR_9 )
        {
            if( !VAR_10 ) VAR_4 += 1;
            VAR_10 = 1;
            VAR_5 += (255 - VAR_3);
            VAR_6 = VAR_0[VAR_6];
        }
        else
        {
            for( VAR_7 = 0; VAR_7 < VAR_9; VAR_7 += 1 )
            {
                VAR_1[VAR_8] = VAR_0[VAR_6];

                VAR_6 += 1;
                if( !VAR_10 ) VAR_4 += 1;
                VAR_8 += 1;
                VAR_5 -= 1;
            }

            VAR_5 -= 1;

            if( !VAR_0[VAR_6] || (VAR_5 < 1) ) break;

            VAR_1[VAR_8] = '.';
            VAR_8 += 1;
        }
    };

    if( !VAR_10 )
    {
        if( !VAR_3 ) VAR_4 += 1;
    }

    VAR_1[VAR_8] = '\0';

    return VAR_4;
}
