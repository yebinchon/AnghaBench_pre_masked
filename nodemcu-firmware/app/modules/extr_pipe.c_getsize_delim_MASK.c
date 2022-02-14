
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int,int,char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int,size_t*) ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static char FUNC_5 (lua_State *VAR_3, int VAR_4, int *VAR_5) {
  char VAR_6;
  int VAR_7;
  if( FUNC_4( VAR_3, VAR_4 ) == VAR_2 ) {
    VAR_7 = FUNC_1( VAR_3, VAR_4 );
    FUNC_0(VAR_3, VAR_7 > 0, VAR_4, "invalid chunk size");
    VAR_6 = '\0';
  } else if (FUNC_2(VAR_3, VAR_4)) {
    VAR_7 = VAR_0;
    VAR_6 = '\n';
  } else {
    size_t VAR_8;
    const char *VAR_9 = FUNC_3( VAR_3, 2, &VAR_8);
    VAR_7 = VAR_8 == 2 && VAR_9[1] == '+' ? VAR_1 : VAR_0 ;
    FUNC_0(VAR_3, VAR_8 + VAR_7 == 0, VAR_4, "invalid delimiter");
    VAR_6 = VAR_9[0];
  }
  if (VAR_5)
    *VAR_5 = VAR_7;
  return VAR_6;
}
