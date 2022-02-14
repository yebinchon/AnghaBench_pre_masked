
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double FT_Fixed ;


 int VAR_0 ;
 int FUNC_0 (double,double) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 double FUNC_2 (double) ;
 int FUNC_3 (char*,double,double,int,int) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void
  FUNC_5( void )
  {
    int VAR_2;


    for ( VAR_2 = 0; VAR_2 < VAR_0; VAR_2 += 0x10000L )
    {
      FT_Fixed VAR_3, VAR_4;
      double VAR_5, VAR_6, VAR_7, VAR_8;
      int VAR_9;


      VAR_5 = 5.0;
      VAR_6 = VAR_2*VAR_1;

      VAR_7 = VAR_5 * FUNC_2(VAR_6);
      VAR_8 = VAR_5 * FUNC_4(VAR_6);

      VAR_3 = (FT_Fixed)(VAR_7*65536.0);
      VAR_4 = (FT_Fixed)(VAR_8*65536.0);

      VAR_9 = FUNC_0( VAR_3, VAR_4 );
      if ( VAR_9 < 0 )
        VAR_9 += VAR_0;

      if ( FUNC_1( VAR_2 - VAR_9 ) > 1 )
      {
        FUNC_3( "FT_Atan2( %.7f, %.7f ) = %.5f, atan = %.5f\n",
                VAR_3/65536.0, VAR_4/65536.0, VAR_9/65536.0, VAR_2/65536.0 );
      }
    }
  }
