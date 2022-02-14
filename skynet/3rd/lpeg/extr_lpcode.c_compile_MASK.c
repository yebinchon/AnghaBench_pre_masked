
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {int ncode; int * L; TYPE_1__* p; } ;
struct TYPE_8__ {int * code; int tree; } ;
typedef TYPE_1__ Pattern ;
typedef int Instruction ;
typedef TYPE_2__ CompileState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;

Instruction *FUNC_4 (lua_State *VAR_3, Pattern *VAR_4) {
  CompileState VAR_5;
  VAR_5.p = VAR_4; VAR_5.ncode = 0; VAR_5.L = VAR_3;
  FUNC_3(VAR_3, VAR_4, 2);
  FUNC_1(&VAR_5, VAR_4->tree, 0, VAR_1, VAR_2);
  FUNC_0(&VAR_5, VAR_0, 0);
  FUNC_3(VAR_3, VAR_4, VAR_5.ncode);
  FUNC_2(&VAR_5);
  return VAR_4->code;
}
