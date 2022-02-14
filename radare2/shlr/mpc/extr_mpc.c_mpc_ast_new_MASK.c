
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * children; scalar_t__ children_num; int state; void* contents; void* tag; } ;
typedef TYPE_1__ mpc_ast_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (char const*) ;

mpc_ast_t *FUNC_4(const char *VAR_0, const char *VAR_1) {

  mpc_ast_t *VAR_2 = FUNC_0(sizeof(mpc_ast_t));

  VAR_2->tag = FUNC_0(FUNC_3(VAR_0) + 1);
  FUNC_2(VAR_2->tag, VAR_0);

  VAR_2->contents = FUNC_0(FUNC_3(VAR_1) + 1);
  FUNC_2(VAR_2->contents, VAR_1);

  VAR_2->state = FUNC_1();

  VAR_2->children_num = 0;
  VAR_2->children = ((void*)0);
  return VAR_2;

}
