
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double x; double y; } ;
typedef TYPE_1__ FT_Vector ;
typedef scalar_t__ FT_Fixed ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 double FUNC_2 (double) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,double,double,double,double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void
  FUNC_5( void )
  {
    int VAR_4;


    for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 0x10000L )
    {
      FT_Vector VAR_5;
      double VAR_6, VAR_7, VAR_8;
      FT_Fixed VAR_9, VAR_10;


      FUNC_0( &VAR_5, VAR_4 );
      VAR_6 = ( VAR_4*VAR_1 );
      VAR_7 = FUNC_2(VAR_6);
      VAR_8 = FUNC_4(VAR_6);
      VAR_9 = (FT_Fixed)(VAR_7*65536.0);
      VAR_10 = (FT_Fixed)(VAR_8*65536.0);

      if ( FUNC_1( VAR_5.x-VAR_9 ) > VAR_2 ||
           FUNC_1( VAR_5.y-VAR_10 ) > VAR_2 )
      {
        VAR_3 = 1;
        FUNC_3( "FT_Vector_Unit[%3d] = ( %.7f, %.7f )  vec = ( %.7f, %.7f )\n",
                (VAR_4 >> 16),
                VAR_5.x/65536.0, VAR_5.y/65536.0,
                VAR_7, VAR_8 );
      }
    }
  }
