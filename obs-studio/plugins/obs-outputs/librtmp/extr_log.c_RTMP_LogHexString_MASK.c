
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int line ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 (int const) ;
 int FUNC_2 (char*,char,int) ;

void FUNC_3(int VAR_5, const uint8_t *VAR_6, unsigned long VAR_7)
{



    char VAR_8[80];
    unsigned long VAR_9;

    if ( !VAR_6 || VAR_5 > (int)VAR_3 )
        return;


    VAR_8[0] = '\0';

    for ( VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9++ )
    {
        int VAR_10 = VAR_9 % 16;
        unsigned VAR_11;

        if( !VAR_10 )
        {
            if( VAR_9 ) FUNC_0( VAR_5, "%s", VAR_8 );
            FUNC_2( VAR_8, ' ', sizeof(VAR_8)-2 );
            VAR_8[sizeof(VAR_8)-2] = '\0';

            VAR_11 = VAR_9 % 0x0ffffU;

            VAR_8[2] = VAR_4[0x0f & (VAR_11 >> 12)];
            VAR_8[3] = VAR_4[0x0f & (VAR_11 >> 8)];
            VAR_8[4] = VAR_4[0x0f & (VAR_11 >> 4)];
            VAR_8[5] = VAR_4[0x0f & VAR_11];
            VAR_8[6] = ':';
        }

        VAR_11 = 9 + VAR_10*3 + ((VAR_10 >= 8)?1:0);
        VAR_8[VAR_11] = VAR_4[0x0f & ( VAR_6[VAR_9] >> 4 )];
        VAR_8[VAR_11+1] = VAR_4[0x0f & VAR_6[VAR_9]];

        VAR_11 = 60 + VAR_10 + ((VAR_10 >= 8)?1:0);

        if ( FUNC_1( VAR_6[VAR_9] ))
        {
            VAR_8[60 + VAR_10] = VAR_6[VAR_9];
        }
        else
        {
            VAR_8[60 + VAR_10] = '.';
        }
    }

    FUNC_0( VAR_5, "%s", VAR_8 );
}
