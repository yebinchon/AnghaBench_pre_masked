
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int VAR_1 ;
 int FUNC_7 (int,size_t,char const*) ;
 int FUNC_8 (int,int,int,int ) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_2 )
{
  int VAR_3 = FUNC_2( VAR_2, 1 );

  FUNC_0( VAR_1, VAR_3 );

  if (FUNC_6( VAR_2, 2 ) == VAR_0) {
    size_t VAR_4;
    const char *VAR_5 = FUNC_3( VAR_2, 2, &VAR_4 );
    FUNC_1( VAR_2, 2, VAR_4 <= 64, "out of range" );

    FUNC_7( VAR_3, VAR_4 * 8, VAR_5 );

  } else {
    int VAR_6 = FUNC_2( VAR_2, 2 );
    int VAR_7 = FUNC_2( VAR_2, 3 );

    FUNC_1( VAR_2, 2, VAR_6 >= 0 && VAR_6 <= 511, "out of range" );
    FUNC_1( VAR_2, 3, VAR_7 >= 1 && VAR_7 <= 32, "out of range" );

    for (int VAR_8 = 4; VAR_8 <= FUNC_5( VAR_2 ); VAR_8++, VAR_6 += VAR_7 ) {
      u32 VAR_9 = ( u32 )FUNC_2(VAR_2, VAR_8 );

      if (VAR_6 + VAR_7 > 512) {
        return FUNC_4( VAR_2, "data range exceeded > 512 bits" );
      }

      FUNC_8( VAR_3, VAR_6, VAR_7, VAR_9 );
    }
  }

  return 0;
}
