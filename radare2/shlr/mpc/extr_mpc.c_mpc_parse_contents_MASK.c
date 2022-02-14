
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int * output; } ;
typedef TYPE_1__ mpc_result_t ;
typedef int mpc_parser_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int *,int *,TYPE_1__*) ;

int FUNC_4(const char *VAR_0, mpc_parser_t *VAR_1, mpc_result_t *VAR_2) {

  FILE *VAR_3 = FUNC_1(VAR_0, "rb");
  int VAR_4;

  if (!VAR_3) {
    VAR_2->output = ((void*)0);
    VAR_2->error = FUNC_2(VAR_0, "Unable to open file!");
    return 0;
  }

  VAR_4 = FUNC_3(VAR_0, VAR_3, VAR_1, VAR_2);
  FUNC_0(VAR_3);
  return VAR_4;
}
