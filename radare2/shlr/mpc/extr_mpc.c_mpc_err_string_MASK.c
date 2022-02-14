
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ col; scalar_t__ row; } ;
struct TYPE_5__ {int expected_num; int recieved; int * expected; TYPE_1__ state; int filename; int failure; } ;
typedef TYPE_2__ mpc_err_t ;


 char* FUNC_0 (int,int) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int*,int*,char*,...) ;
 char* FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (char*) ;

char *FUNC_5(mpc_err_t *VAR_0) {

  int VAR_1;
  int VAR_2 = 0;
  int VAR_3 = 1023;
  char *VAR_4 = FUNC_0(1, 1024);

  if (VAR_0->failure) {
    FUNC_2(VAR_4, &VAR_2, &VAR_3,
    "%s: error: %s\n", VAR_0->filename, VAR_0->failure);
    return VAR_4;
  }

  FUNC_2(VAR_4, &VAR_2, &VAR_3,
    "%s:%i:%i: error: expected ", VAR_0->filename, VAR_0->state.row+1, VAR_0->state.col+1);

  if (VAR_0->expected_num == 0) { FUNC_2(VAR_4, &VAR_2, &VAR_3, "ERROR: NOTHING EXPECTED"); }
  if (VAR_0->expected_num == 1) { FUNC_2(VAR_4, &VAR_2, &VAR_3, "%s", VAR_0->expected[0]); }
  if (VAR_0->expected_num >= 2) {

    for (VAR_1 = 0; VAR_1 < VAR_0->expected_num-2; VAR_1++) {
      FUNC_2(VAR_4, &VAR_2, &VAR_3, "%s, ", VAR_0->expected[VAR_1]);
    }

    FUNC_2(VAR_4, &VAR_2, &VAR_3, "%s or %s",
      VAR_0->expected[VAR_0->expected_num-2],
      VAR_0->expected[VAR_0->expected_num-1]);
  }

  FUNC_2(VAR_4, &VAR_2, &VAR_3, " at ");
  FUNC_2(VAR_4, &VAR_2, &VAR_3, FUNC_1(VAR_0->recieved));
  FUNC_2(VAR_4, &VAR_2, &VAR_3, "\n");

  return FUNC_3(VAR_4, FUNC_4(VAR_4) + 1);
}
