
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int UpVal ;
struct TYPE_6__ {int ** upvals; TYPE_1__* p; } ;
struct TYPE_5__ {int sizeupvalues; } ;
typedef int StkId ;
typedef TYPE_2__ LClosure ;


 int FUNC_0 (int *,int,char*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static UpVal **FUNC_4 (lua_State *VAR_0, int VAR_1, int VAR_2, LClosure **VAR_3) {
  LClosure *VAR_4;
  StkId VAR_5 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0, FUNC_3(VAR_5), "Lua function expected");
  VAR_4 = FUNC_1(VAR_5);
  FUNC_0(VAR_0, (1 <= VAR_2 && VAR_2 <= VAR_4->p->sizeupvalues), "invalid upvalue index");
  if (VAR_3) *VAR_3 = VAR_4;
  return &VAR_4->upvals[VAR_2 - 1];
}
