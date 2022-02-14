
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpc_mem_t ;
struct TYPE_3__ {scalar_t__ mem; } ;
typedef TYPE_1__ mpc_input_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(mpc_input_t *VAR_1, void *VAR_2) {
  return
    (char*)VAR_2 >= (char*)(VAR_1->mem) &&
    (char*)VAR_2 < (char*)(VAR_1->mem) + (VAR_0 * sizeof(mpc_mem_t));
}
