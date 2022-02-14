
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__) ;

void FUNC_5( const char *VAR_6 )
{
    int VAR_7 = FUNC_3( VAR_6, VAR_3 | VAR_1 | VAR_2 | VAR_0, 0666 );
    if (VAR_7 == -1) FUNC_1( "Error creating %s\n", VAR_6 );
    if (FUNC_4( VAR_7, VAR_4, VAR_5 ) != VAR_5)
        FUNC_1( "Error writing to %s\n", VAR_6 );
    FUNC_0( VAR_7 );
    FUNC_2( VAR_4 );
}
