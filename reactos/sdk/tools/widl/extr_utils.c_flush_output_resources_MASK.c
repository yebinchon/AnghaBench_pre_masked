
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_4 ;
 int FUNC_4 (char const*,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__) ;

void FUNC_8( const char *VAR_8 )
{
    int VAR_9;
    unsigned int VAR_10;


    FUNC_0( !VAR_6 );

    FUNC_5( 0 );
    FUNC_5( 32 );
    FUNC_6( 0xffff );
    FUNC_6( 0x0000 );
    FUNC_6( 0xffff );
    FUNC_6( 0x0000 );
    FUNC_5( 0 );
    FUNC_6( 0 );
    FUNC_6( 0 );
    FUNC_5( 0 );
    FUNC_5( 0 );

    VAR_9 = FUNC_4( VAR_8, VAR_3 | VAR_1 | VAR_2 | VAR_0, 0666 );
    if (VAR_9 == -1) FUNC_2( "Error creating %s\n", VAR_8 );
    if (FUNC_7( VAR_9, VAR_5, VAR_6 ) != VAR_6)
        FUNC_2( "Error writing to %s\n", VAR_8 );
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
    {
        if (FUNC_7( VAR_9, VAR_7[VAR_10].data, VAR_7[VAR_10].size ) != VAR_7[VAR_10].size)
            FUNC_2( "Error writing to %s\n", VAR_8 );
        FUNC_3( VAR_7[VAR_10].data );
    }
    FUNC_1( VAR_9 );
    VAR_4 = 0;
    FUNC_3( VAR_5 );
}
