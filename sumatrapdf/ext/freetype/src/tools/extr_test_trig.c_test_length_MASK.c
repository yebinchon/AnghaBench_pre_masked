
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double x; double y; } ;
typedef TYPE_1__ FT_Vector ;
typedef double FT_Fixed ;


 int VAR_0 ;
 double FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,double,double,double,double) ;
 double FUNC_4 (int) ;

__attribute__((used)) static void
  FUNC_5( void )
  {
    int VAR_4;


    for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 0x10000L )
    {
      FT_Vector VAR_5;
      FT_Fixed VAR_6, VAR_7;


      VAR_6 = (FT_Fixed)(500.0*65536.0);
      VAR_5.x = (FT_Fixed)( VAR_6 * FUNC_2( VAR_4*VAR_1 ) );
      VAR_5.y = (FT_Fixed)( VAR_6 * FUNC_4( VAR_4*VAR_1 ) );
      VAR_7 = FUNC_0( &VAR_5 );

      if ( FUNC_1( VAR_7-VAR_6 ) > VAR_2 )
      {
        VAR_3 = 1;
        FUNC_3( "FT_Length( %.7f, %.7f ) = %.5f, length = %.5f\n",
                VAR_5.x/65536.0, VAR_5.y/65536.0, VAR_7/65536.0, VAR_6/65536.0 );
      }
    }
  }
