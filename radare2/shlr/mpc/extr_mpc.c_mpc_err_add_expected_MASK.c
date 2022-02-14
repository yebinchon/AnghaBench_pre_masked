
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_input_t ;
struct TYPE_3__ {int expected_num; int * expected; } ;
typedef TYPE_1__ mpc_err_t ;


 int FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(mpc_input_t *VAR_0, mpc_err_t *VAR_1, char *VAR_2) {
  (void)VAR_0;
  VAR_1->expected_num++;
  VAR_1->expected = FUNC_1(VAR_0, VAR_1->expected, sizeof(char*) * VAR_1->expected_num);
  VAR_1->expected[VAR_1->expected_num-1] = FUNC_0(VAR_0, FUNC_3(VAR_2) + 1);
  FUNC_2(VAR_1->expected[VAR_1->expected_num-1], VAR_2);
}
