
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpc_input_t ;
struct TYPE_4__ {int expected_num; char** expected; } ;
typedef TYPE_1__ mpc_err_t ;


 char* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,size_t) ;
 void* FUNC_3 (int *,char**,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char const*) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static mpc_err_t *FUNC_7(mpc_input_t *VAR_0, mpc_err_t *VAR_1, const char *VAR_2) {

  int VAR_3 = 0;
  size_t VAR_4 = 0;
  char *VAR_5 = ((void*)0);

  if (!VAR_1) { return ((void*)0); }

  if (VAR_1->expected_num == 0) {
    VAR_5 = FUNC_0(VAR_0, 1, 1);
    VAR_1->expected_num = 1;
    VAR_1->expected = FUNC_3(VAR_0, VAR_1->expected, sizeof(char*) * VAR_1->expected_num);
    VAR_1->expected[0] = VAR_5;
    return VAR_1;
  }

  else if (VAR_1->expected_num == 1) {
    VAR_5 = FUNC_2(VAR_0, FUNC_6(VAR_2) + FUNC_6(VAR_1->expected[0]) + 1);
    FUNC_5(VAR_5, VAR_2);
    FUNC_4(VAR_5, VAR_1->expected[0]);
    FUNC_1(VAR_0, VAR_1->expected[0]);
    VAR_1->expected[0] = VAR_5;
    return VAR_1;
  }

  else if (VAR_1->expected_num > 1) {

    VAR_4 += FUNC_6(VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_1->expected_num-2; VAR_3++) {
      VAR_4 += FUNC_6(VAR_1->expected[VAR_3]) + FUNC_6(", ");
    }
    VAR_4 += FUNC_6(VAR_1->expected[VAR_1->expected_num-2]);
    VAR_4 += FUNC_6(" or ");
    VAR_4 += FUNC_6(VAR_1->expected[VAR_1->expected_num-1]);

    VAR_5 = FUNC_2(VAR_0, VAR_4 + 1);

    FUNC_5(VAR_5, VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_1->expected_num-2; VAR_3++) {
      FUNC_4(VAR_5, VAR_1->expected[VAR_3]); FUNC_4(VAR_5, ", ");
    }
    FUNC_4(VAR_5, VAR_1->expected[VAR_1->expected_num-2]);
    FUNC_4(VAR_5, " or ");
    FUNC_4(VAR_5, VAR_1->expected[VAR_1->expected_num-1]);

    for (VAR_3 = 0; VAR_3 < VAR_1->expected_num; VAR_3++) { FUNC_1(VAR_0, VAR_1->expected[VAR_3]); }

    VAR_1->expected_num = 1;
    VAR_1->expected = FUNC_3(VAR_0, VAR_1->expected, sizeof(char*) * VAR_1->expected_num);
    VAR_1->expected[0] = VAR_5;
    return VAR_1;
  }

  return ((void*)0);
}
