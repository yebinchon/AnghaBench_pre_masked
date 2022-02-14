
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,unsigned int,size_t*) ;
 int FUNC_3 (int *,char*) ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;
 size_t FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,unsigned int,size_t) ;
 scalar_t__ FUNC_10 (int *,unsigned int) ;
 int FUNC_11 (unsigned int,char const) ;

__attribute__((used)) static int FUNC_12( lua_State *VAR_2 )
{
  unsigned VAR_3 = FUNC_1( VAR_2, 1 );
  const char *VAR_4;
  size_t VAR_5, VAR_6;
  int VAR_7;
  u32 VAR_8 = 0;
  unsigned VAR_9;

  FUNC_0( VAR_1, VAR_3 );
  if( FUNC_4( VAR_2 ) < 2 )
    return FUNC_3( VAR_2, "wrong arg type" );
  for( VAR_9 = 2; VAR_9 <= FUNC_4( VAR_2 ); VAR_9 ++ )
  {


    if( FUNC_10( VAR_2, VAR_9 ) == VAR_0 )
    {
      VAR_7 = ( int )FUNC_1( VAR_2, VAR_9 );
      if( VAR_7 < 0 || VAR_7 > 255 )
        return FUNC_3( VAR_2, "wrong arg range" );
      if( FUNC_11( VAR_3, VAR_7 ) != 1 )
        break;
      VAR_8 ++;
    }
    else if( FUNC_5( VAR_2, VAR_9 ) )
    {
      VAR_5 = FUNC_6( VAR_2, VAR_9 );
      for( VAR_6 = 0; VAR_6 < VAR_5; VAR_6 ++ )
      {
        FUNC_9( VAR_2, VAR_9, VAR_6 + 1 );
        VAR_7 = ( int )FUNC_1( VAR_2, -1 );
        FUNC_7( VAR_2, 1 );
        if( VAR_7 < 0 || VAR_7 > 255 )
          return FUNC_3( VAR_2, "wrong arg range" );
        if( FUNC_11( VAR_3, VAR_7 ) == 0 )
          break;
      }
      VAR_8 += VAR_6;
      if( VAR_6 < VAR_5 )
        break;
    }
    else
    {
      VAR_4 = FUNC_2( VAR_2, VAR_9, &VAR_5 );
      for( VAR_6 = 0; VAR_6 < VAR_5; VAR_6 ++ )
        if( FUNC_11( VAR_3, VAR_4[ VAR_6 ] ) == 0 )
          break;
      VAR_8 += VAR_6;
      if( VAR_6 < VAR_5 )
        break;
    }
  }
  FUNC_8( VAR_2, VAR_8 );
  return 1;
}
