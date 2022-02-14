
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* filename; int state; scalar_t__ suppress; } ;
typedef TYPE_1__ mpc_input_t ;
struct TYPE_8__ {int expected_num; int recieved; int * failure; void** expected; int state; void* filename; } ;
typedef TYPE_2__ mpc_err_t ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static mpc_err_t *FUNC_4(mpc_input_t *VAR_0, const char *VAR_1) {
  mpc_err_t *VAR_2;
  if (VAR_0->suppress) { return ((void*)0); }
  VAR_2 = FUNC_1(VAR_0, sizeof(mpc_err_t));
  VAR_2->filename = FUNC_1(VAR_0, FUNC_3(VAR_0->filename) + 1);
  FUNC_2(VAR_2->filename, VAR_0->filename);
  VAR_2->state = VAR_0->state;
  VAR_2->expected_num = 1;
  VAR_2->expected = FUNC_1(VAR_0, sizeof(char*));
  VAR_2->expected[0] = FUNC_1(VAR_0, FUNC_3(VAR_1) + 1);
  FUNC_2(VAR_2->expected[0], VAR_1);
  VAR_2->failure = ((void*)0);
  VAR_2->recieved = FUNC_0(VAR_0);
  return VAR_2;
}
