
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mpc_input_t ;
struct TYPE_9__ {scalar_t__ pos; } ;
struct TYPE_8__ {int expected_num; int * expected; int recieved; int * failure; TYPE_2__ state; int * filename; } ;
typedef TYPE_1__ mpc_err_t ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 void* FUNC_3 (int *,int) ;
 TYPE_2__ FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static mpc_err_t *FUNC_7(mpc_input_t *VAR_0, mpc_err_t** VAR_1, int VAR_2) {

  int VAR_3, VAR_4, VAR_5;
  mpc_err_t *VAR_6;

  VAR_5 = -1;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (VAR_1[VAR_3] != ((void*)0)) { VAR_5 = VAR_3; }
  }

  if (VAR_5 == -1) { return ((void*)0); }

  VAR_6 = FUNC_3(VAR_0, sizeof(mpc_err_t));
  VAR_6->state = FUNC_4();
  VAR_6->expected_num = 0;
  VAR_6->expected = ((void*)0);
  VAR_6->failure = ((void*)0);
  VAR_6->filename = FUNC_3(VAR_0, FUNC_6(VAR_1[VAR_5]->filename)+1);
  FUNC_5(VAR_6->filename, VAR_1[VAR_5]->filename);

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (!VAR_1[VAR_3]) { continue; }
    if (VAR_1[VAR_3]->state.pos > VAR_6->state.pos) { VAR_6->state = VAR_1[VAR_3]->state; }
  }

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (!VAR_1[VAR_3]) { continue; }
    if (VAR_1[VAR_3]->state.pos < VAR_6->state.pos) { continue; }

    if (VAR_1[VAR_3]->failure) {
      VAR_6->failure = FUNC_3(VAR_0, FUNC_6(VAR_1[VAR_3]->failure)+1);
      FUNC_5(VAR_6->failure, VAR_1[VAR_3]->failure);
      break;
    }

    VAR_6->recieved = VAR_1[VAR_3]->recieved;

    for (VAR_4 = 0; VAR_4 < VAR_1[VAR_3]->expected_num; VAR_4++) {
      if (!FUNC_1(VAR_0, VAR_6, VAR_1[VAR_3]->expected[VAR_4])) {
        FUNC_0(VAR_0, VAR_6, VAR_1[VAR_3]->expected[VAR_4]);
      }
    }
  }

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    if (!VAR_1[VAR_3]) { continue; }
    FUNC_2(VAR_0, VAR_1[VAR_3]);
  }

  return VAR_6;
}
