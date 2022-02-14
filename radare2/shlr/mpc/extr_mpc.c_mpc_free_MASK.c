
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpc_mem_t ;
struct TYPE_4__ {scalar_t__* mem_full; scalar_t__ mem; } ;
typedef TYPE_1__ mpc_input_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,void*) ;

__attribute__((used)) static void FUNC_2(mpc_input_t *VAR_0, void *VAR_1) {
  size_t VAR_2;
  if (!FUNC_1(VAR_0, VAR_1)) { FUNC_0(VAR_1); return; }
  VAR_2 = ((size_t)(((char*)VAR_1) - ((char*)VAR_0->mem))) / sizeof(mpc_mem_t);
  VAR_0->mem_full[VAR_2] = 0;
}
