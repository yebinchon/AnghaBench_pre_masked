
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct SParser {char const* name; int buff; int * z; } ;
struct TYPE_7__ {int errfunc; int top; } ;
typedef TYPE_1__ lua_State ;
typedef int ZIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct SParser*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

int FUNC_4 (lua_State *VAR_1, ZIO *VAR_2, const char *VAR_3) {
  struct SParser VAR_4;
  int VAR_5;
  VAR_4.z = VAR_2; VAR_4.name = VAR_3;
  FUNC_2(VAR_1, &VAR_4.buff);
  VAR_5 = FUNC_0(VAR_1, VAR_0, &VAR_4, FUNC_3(VAR_1, VAR_1->top), VAR_1->errfunc);
  FUNC_1(VAR_1, &VAR_4.buff);
  return VAR_5;
}
