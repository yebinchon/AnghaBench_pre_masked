
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int children_num; } ;
typedef TYPE_1__ mpc_ast_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (char*,char*) ;

mpc_ast_t *FUNC_2(mpc_ast_t *VAR_0) {

  mpc_ast_t *VAR_1;

  if (!VAR_0) { return VAR_0; }
  if (VAR_0->children_num == 0) { return VAR_0; }
  if (VAR_0->children_num == 1) { return VAR_0; }

  VAR_1 = FUNC_1(">", "");
  FUNC_0(VAR_1, VAR_0);
  return VAR_1;
}
