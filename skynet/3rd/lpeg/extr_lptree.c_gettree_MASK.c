
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int * tree; } ;
typedef int TTree ;
typedef TYPE_1__ Pattern ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static TTree *FUNC_2 (lua_State *VAR_0, int VAR_1, int *VAR_2) {
  Pattern *VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
    *VAR_2 = FUNC_1(VAR_0, VAR_1);
  return VAR_3->tree;
}
