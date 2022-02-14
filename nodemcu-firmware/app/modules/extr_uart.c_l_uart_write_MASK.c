
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u8 ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,size_t*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int,char const) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9( lua_State* VAR_3 )
{
  int VAR_4;
  const char* VAR_5;
  size_t VAR_6, VAR_7;
  int VAR_8 = FUNC_4( VAR_3 ), VAR_9;

  VAR_4 = FUNC_1( VAR_3, 1 );
  FUNC_0( VAR_2, VAR_4 );
  for( VAR_9 = 2; VAR_9 <= VAR_8; VAR_9 ++ )
  {
    if( FUNC_7( VAR_3, VAR_9 ) == VAR_0 )
    {
      VAR_6 = FUNC_5( VAR_3, VAR_9 );
      if( VAR_6 > 255 )
        return FUNC_3( VAR_3, "invalid number" );
      FUNC_8( VAR_4, ( u8 )VAR_6 );
    }
    else
    {
      FUNC_2( VAR_3, VAR_9, VAR_1 );
      VAR_5 = FUNC_6( VAR_3, VAR_9, &VAR_6 );
      for( VAR_7 = 0; VAR_7 < VAR_6; VAR_7 ++ )
        FUNC_8( VAR_4, VAR_5[ VAR_7 ] );
    }
  }
  return 0;
}
