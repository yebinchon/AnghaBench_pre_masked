
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int memerrmsg; int ** strcache; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void FUNC_6 (lua_State *VAR_5) {
  global_State *VAR_6 = FUNC_0(VAR_5);
  int VAR_7, VAR_8;
  if (VAR_4 == 0) {
    VAR_4 = FUNC_4(VAR_5);
  }
  FUNC_3(VAR_5, VAR_1);

  VAR_6->memerrmsg = FUNC_2(VAR_5, VAR_0);
  FUNC_1(VAR_5, FUNC_5(VAR_6->memerrmsg));
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
      VAR_6->strcache[VAR_7][VAR_8] = VAR_6->memerrmsg;
}
