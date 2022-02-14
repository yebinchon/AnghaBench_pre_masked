
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * closef; } ;
typedef TYPE_1__ LStream ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static LStream *FUNC_2 (lua_State *VAR_1) {
  LStream *VAR_2 = (LStream *)FUNC_1(VAR_1, sizeof(LStream));
  VAR_2->closef = ((void*)0);
  FUNC_0(VAR_1, VAR_0);
  return VAR_2;
}
