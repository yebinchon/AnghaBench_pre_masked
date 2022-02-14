
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {int argc; char** argv; int status; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct Smain*) ;
 int * FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;

int FUNC_5 (int VAR_3, char **VAR_4) {
  int VAR_5;
  struct Smain VAR_6;
  lua_State *VAR_7 = FUNC_3();
  if (VAR_7 == ((void*)0)) {
    FUNC_0(VAR_4[0], "cannot create state: not enough memory");
    return VAR_0;
  }
  VAR_6.argc = VAR_3;
  VAR_6.argv = VAR_4;
  VAR_5 = FUNC_2(VAR_7, &VAR_2, &VAR_6);
  FUNC_4(VAR_7, VAR_5);
  FUNC_1(VAR_7);
  return (VAR_5 || VAR_6.status) ? VAR_0 : VAR_1;
}
