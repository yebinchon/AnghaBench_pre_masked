
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int has_uint32; int uinteger; int * s; } ;
typedef TYPE_1__ sfc64_state ;



extern void FUNC_0(sfc64_state *VAR_0, uint64_t *VAR_1, int VAR_2,
                            uint32_t VAR_3) {
  int VAR_4;

  for (VAR_4=0; VAR_4<4; VAR_4++) {
    VAR_0->s[VAR_4] = VAR_1[VAR_4];
  }
  VAR_0->has_uint32 = VAR_2;
  VAR_0->uinteger = VAR_3;
}
