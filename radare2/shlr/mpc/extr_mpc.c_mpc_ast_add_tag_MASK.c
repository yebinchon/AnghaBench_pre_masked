
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* tag; } ;
typedef TYPE_1__ mpc_ast_t ;


 int FUNC_0 (char const*,char const*,int) ;
 char const* FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;

mpc_ast_t *FUNC_3(mpc_ast_t *VAR_0, const char *VAR_1) {
  if (!VAR_0) { return VAR_0; }
  VAR_0->tag = FUNC_1(VAR_0->tag, FUNC_2(VAR_1) + 1 + FUNC_2(VAR_0->tag) + 1);
  FUNC_0(VAR_0->tag + FUNC_2(VAR_1) + 1, VAR_0->tag, FUNC_2(VAR_0->tag)+1);
  FUNC_0(VAR_0->tag, VAR_1, FUNC_2(VAR_1));
  FUNC_0(VAR_0->tag + FUNC_2(VAR_1), "|", 1);
  return VAR_0;
}
