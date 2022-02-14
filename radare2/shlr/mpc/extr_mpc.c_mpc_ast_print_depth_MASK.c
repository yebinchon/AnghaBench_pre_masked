
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ col; scalar_t__ row; } ;
struct TYPE_5__ {char* tag; int children_num; struct TYPE_5__** children; int contents; TYPE_1__ state; } ;
typedef TYPE_2__ mpc_ast_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(mpc_ast_t *VAR_0, int VAR_1, FILE *VAR_2) {

  int VAR_3;

  if (!VAR_0) {
    FUNC_0(VAR_2, "NULL\n");
    return;
  }

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) { FUNC_0(VAR_2, "  "); }

  if (FUNC_1(VAR_0->contents)) {
    FUNC_0(VAR_2, "%s:%lu:%lu '%s'\n", VAR_0->tag,
      (long unsigned int)(VAR_0->state.row+1),
      (long unsigned int)(VAR_0->state.col+1),
      VAR_0->contents);
  } else {
    FUNC_0(VAR_2, "%s \n", VAR_0->tag);
  }

  for (VAR_3 = 0; VAR_3 < VAR_0->children_num; VAR_3++) {
    FUNC_2(VAR_0->children[VAR_3], VAR_1+1, VAR_2);
  }

}
