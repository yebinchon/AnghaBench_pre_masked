
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * f; } ;
typedef TYPE_1__ LStream ;


 int * FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int,char*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char const*) ;
 char* FUNC_5 (int *,int,char*) ;
 TYPE_1__* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_0) {
  const char *VAR_1 = FUNC_3(VAR_0, 1);
  const char *VAR_2 = FUNC_5(VAR_0, 2, "r");
  LStream *VAR_3 = FUNC_6(VAR_0);
  const char *VAR_4 = VAR_2;
  FUNC_2(VAR_0, FUNC_1(VAR_4), 2, "invalid mode");
  VAR_3->f = FUNC_0(VAR_1, VAR_2);
  return (VAR_3->f == ((void*)0)) ? FUNC_4(VAR_0, 0, VAR_1) : 1;
}
