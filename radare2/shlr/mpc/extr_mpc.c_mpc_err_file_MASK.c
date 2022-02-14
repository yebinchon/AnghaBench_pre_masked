
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char recieved; void* failure; int * expected; scalar_t__ expected_num; int state; void* filename; } ;
typedef TYPE_1__ mpc_err_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static mpc_err_t *FUNC_4(const char *VAR_0, const char *VAR_1) {
  mpc_err_t *VAR_2;
  VAR_2 = FUNC_0(sizeof(mpc_err_t));
  VAR_2->filename = FUNC_0(FUNC_3(VAR_0) + 1);
  FUNC_2(VAR_2->filename, VAR_0);
  VAR_2->state = FUNC_1();
  VAR_2->expected_num = 0;
  VAR_2->expected = ((void*)0);
  VAR_2->failure = FUNC_0(FUNC_3(VAR_1) + 1);
  FUNC_2(VAR_2->failure, VAR_1);
  VAR_2->recieved = ' ';
  return VAR_2;
}
