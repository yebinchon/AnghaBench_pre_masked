
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_7 (int,int,int *) ;
 int FUNC_8 (int,int,int) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_1 )
{
  int VAR_2 = FUNC_2( VAR_1, 1 );

  FUNC_0( VAR_0, VAR_2 );

  if (FUNC_4( VAR_1 ) == 2) {
    uint8_t VAR_3[64];
    int VAR_4 = FUNC_2( VAR_1, 2 );

    FUNC_1( VAR_1, 2, VAR_4 >= 1 && VAR_4 <= 64, "out of range" );

    FUNC_7( VAR_2, VAR_4 * 8, VAR_3 );

    FUNC_6( VAR_1, VAR_3, VAR_4 );
    return 1;

  } else {
    int VAR_5 = FUNC_2( VAR_1, 2 );
    int VAR_6 = FUNC_2( VAR_1, 3 );
    int VAR_7 = FUNC_2( VAR_1, 4 ), VAR_8;

    FUNC_1( VAR_1, 2, VAR_5 >= 0 && VAR_5 <= 511, "out of range" );
    FUNC_1( VAR_1, 3, VAR_6 >= 1 && VAR_6 <= 32, "out of range" );

    if (VAR_5 + VAR_6 * VAR_7 > 512) {
      return FUNC_3( VAR_1, "out of range" );
    }

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
      FUNC_5( VAR_1, FUNC_8( VAR_2, VAR_5 + (VAR_6 * VAR_8), VAR_6 ) );
    }
    return VAR_7;
  }
}
