
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int children_num; struct TYPE_4__** children; int contents; int tag; } ;
typedef TYPE_1__ mpc_ast_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(mpc_ast_t *VAR_0, mpc_ast_t *VAR_1) {

  int VAR_2;

  if (FUNC_0(VAR_0->tag, VAR_1->tag) != 0) { return 0; }
  if (FUNC_0(VAR_0->contents, VAR_1->contents) != 0) { return 0; }
  if (VAR_0->children_num != VAR_1->children_num) { return 0; }

  for (VAR_2 = 0; VAR_2 < VAR_0->children_num; VAR_2++) {
    if (!FUNC_1(VAR_0->children[VAR_2], VAR_1->children[VAR_2])) { return 0; }
  }

  return 1;
}
