
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* filename; int state; scalar_t__ suppress; } ;
typedef TYPE_1__ mpc_input_t ;
struct TYPE_7__ {char recieved; void* failure; int * expected; scalar_t__ expected_num; int state; void* filename; } ;
typedef TYPE_2__ mpc_err_t ;


 void* FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (void*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static mpc_err_t *FUNC_3(mpc_input_t *VAR_0, const char *VAR_1) {
  mpc_err_t *VAR_2;
  if (VAR_0->suppress) { return ((void*)0); }
  VAR_2 = FUNC_0(VAR_0, sizeof(mpc_err_t));
  VAR_2->filename = FUNC_0(VAR_0, FUNC_2(VAR_0->filename) + 1);
  FUNC_1(VAR_2->filename, VAR_0->filename);
  VAR_2->state = VAR_0->state;
  VAR_2->expected_num = 0;
  VAR_2->expected = ((void*)0);
  VAR_2->failure = FUNC_0(VAR_0, FUNC_2(VAR_1) + 1);
  FUNC_1(VAR_2->failure, VAR_1);
  VAR_2->recieved = ' ';
  return VAR_2;
}
