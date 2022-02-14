
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void const* output; int error; } ;
typedef TYPE_1__ mpc_result_t ;
typedef int mpc_parser_t ;
typedef int (* mpc_dtor_t ) (void const*) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char const*,int *,TYPE_1__*) ;
 int FUNC_3 (char*) ;

int FUNC_4(mpc_parser_t *VAR_0, const char *VAR_1, const void *VAR_2,
  int(*VAR_3)(const void*, const void*),
  mpc_dtor_t VAR_4,
  void(*VAR_5)(const void*)) {

  mpc_result_t VAR_6;
  if (FUNC_2("<test>", VAR_1, VAR_0, &VAR_6)) {

    if (VAR_3(VAR_6.output, VAR_2)) {
      VAR_4(VAR_6.output);
      return 1;
    } else {
      FUNC_3("Got "); VAR_5(VAR_6.output); FUNC_3("\n");
      FUNC_3("Expected "); VAR_5(VAR_2); FUNC_3("\n");
      VAR_4(VAR_6.output);
      return 0;
    }

  } else {
    FUNC_1(VAR_6.error);
    FUNC_0(VAR_6.error);
    return 0;

  }

}
