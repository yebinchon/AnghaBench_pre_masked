
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static char const*FUNC_3( const char *VAR_1, const char *VAR_2, char *VAR_3 )
{
  char *VAR_4;
  size_t VAR_5;

  if( VAR_1[0]=='L' && VAR_1[1]=='C' && VAR_1[2]=='_') {
    VAR_4 = FUNC_2( (char*)VAR_1, VAR_2 );
    if ( VAR_4 == ((void*)0) )
      return ((void*)0);
    ++VAR_4;
    VAR_5 = FUNC_0( VAR_4, ";" );
    VAR_5 = VAR_5 >= VAR_0 ? VAR_0 - 1 : VAR_5;
    FUNC_1( VAR_3, VAR_4, VAR_5 );
    VAR_3[VAR_5] = 0;
    return VAR_3;
  }
  return VAR_1;
}
