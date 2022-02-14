
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int children_num; int state; struct TYPE_9__** children; } ;
typedef TYPE_1__ mpc_val_t ;
typedef TYPE_1__ mpc_ast_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;

mpc_val_t *FUNC_3(int VAR_0, mpc_val_t **VAR_1) {

  int VAR_2, VAR_3;
  mpc_ast_t** VAR_4 = (mpc_ast_t**)VAR_1;
  mpc_ast_t *VAR_5;

  if (VAR_0 == 0) { return ((void*)0); }
  if (VAR_0 == 1) { return VAR_1[0]; }
  if (VAR_0 == 2 && !VAR_1[1]) { return VAR_1[0]; }
  if (VAR_0 == 2 && !VAR_1[0]) { return VAR_1[1]; }

  VAR_5 = FUNC_2(">", "");

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {

    if (!VAR_4[VAR_2]) { continue; }

    if (VAR_4[VAR_2] && VAR_4[VAR_2]->children_num > 0) {

      for (VAR_3 = 0; VAR_3 < VAR_4[VAR_2]->children_num; VAR_3++) {
        FUNC_0(VAR_5, VAR_4[VAR_2]->children[VAR_3]);
      }

      FUNC_1(VAR_4[VAR_2]);

    } else if (VAR_4[VAR_2] && VAR_4[VAR_2]->children_num == 0) {
      FUNC_0(VAR_5, VAR_4[VAR_2]);
    }

  }

  if (VAR_5->children_num) {
    VAR_5->state = VAR_5->children[0]->state;
  }

  return VAR_5;
}
