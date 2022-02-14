
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int children_num; struct TYPE_7__** children; } ;
typedef TYPE_1__ mpc_ast_t ;


 TYPE_1__** FUNC_0 (TYPE_1__**,int) ;

mpc_ast_t *FUNC_1(mpc_ast_t *VAR_0, mpc_ast_t *VAR_1) {
  VAR_0->children_num++;
  VAR_0->children = FUNC_0(VAR_0->children, sizeof(mpc_ast_t*) * VAR_0->children_num);
  VAR_0->children[VAR_0->children_num-1] = VAR_1;
  return VAR_0;
}
