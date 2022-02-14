
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 size_t FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (unsigned int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_1 )
{
  uint8_t VAR_2[8];
  size_t VAR_3;
  int VAR_4, VAR_5;
  unsigned VAR_6 = FUNC_1( VAR_1, 1 );
  const char *VAR_7;
  FUNC_0( VAR_0, VAR_6 );

  if( FUNC_4( VAR_1, 2 ) )
  {
    VAR_3 = FUNC_5( VAR_1, 2 );
    if (VAR_3!=8)
      return FUNC_3( VAR_1, "wrong arg range" );
    for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++ )
    {
      FUNC_7( VAR_1, 2, VAR_5 + 1 );
      VAR_4 = ( int )FUNC_1( VAR_1, -1 );
      FUNC_6( VAR_1, 1 );
      if( VAR_4 > 255 )
        return FUNC_3( VAR_1, "wrong arg range" );
      VAR_2[VAR_5] = (uint8_t)VAR_4;
    }
  }
  else
  {
    VAR_7 = FUNC_2( VAR_1, 2, &VAR_3 );
    if (VAR_3!=8)
      return FUNC_3( VAR_1, "wrong arg range" );
    for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5 ++ ){
      VAR_2[VAR_5] = VAR_7[VAR_5];
    }
  }

  FUNC_8(VAR_6, VAR_2);
  return 0;
}
