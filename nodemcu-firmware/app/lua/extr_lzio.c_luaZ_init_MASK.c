
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
typedef int lua_Reader ;
struct TYPE_3__ {int * p; scalar_t__ i; scalar_t__ n; void* data; int reader; int * L; } ;
typedef TYPE_1__ ZIO ;



void FUNC_0 (lua_State *VAR_0, ZIO *VAR_1, lua_Reader VAR_2, void *VAR_3) {
  VAR_1->L = VAR_0;
  VAR_1->reader = VAR_2;
  VAR_1->data = VAR_3;
  VAR_1->n = VAR_1->i = 0;
  VAR_1->p = ((void*)0);
}
