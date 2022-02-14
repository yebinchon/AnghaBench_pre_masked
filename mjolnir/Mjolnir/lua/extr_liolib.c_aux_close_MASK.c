
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int (* lua_CFunction ) (int *) ;
struct TYPE_3__ {int (* closef ) (int *) ;} ;
typedef TYPE_1__ LStream ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (lua_State *VAR_0) {
  LStream *VAR_1 = FUNC_1(VAR_0);
  volatile lua_CFunction VAR_2 = VAR_1->closef;
  VAR_1->closef = ((void*)0);
  return (*VAR_2)(VAR_0);
}
