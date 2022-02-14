
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static const char *FUNC_1( const char *VAR_1, char *VAR_2 )
{
  char *VAR_3 = FUNC_0( "LC_ALL" );

  if ( VAR_3 != ((void*)0) && *VAR_3 != 0 ) {
    return VAR_3;
  }
  VAR_3 = FUNC_0( VAR_1 );
  if ( VAR_3 != ((void*)0) && *VAR_3 != 0 ) {
    return VAR_3;
  }
  VAR_3 = FUNC_0( "LANG" );
  if ( VAR_3 != ((void*)0) && *VAR_3 != 0 ) {
    return VAR_3;
  }

  return VAR_0;
}
