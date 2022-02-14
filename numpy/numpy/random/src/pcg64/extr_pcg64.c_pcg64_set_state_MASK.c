
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int has_uint32; int uinteger; TYPE_1__* pcg_state; } ;
typedef TYPE_2__ pcg64_state ;
typedef int pcg128_t ;
struct TYPE_4__ {int state; int inc; } ;



extern void FUNC_0(pcg64_state *VAR_0, uint64_t *VAR_1,
                            int VAR_2, uint32_t VAR_3) {







  VAR_0->pcg_state->state = (((pcg128_t)VAR_1[0]) << 64) | VAR_1[1];
  VAR_0->pcg_state->inc = (((pcg128_t)VAR_1[2]) << 64) | VAR_1[3];






  VAR_0->has_uint32 = VAR_2;
  VAR_0->uinteger = VAR_3;
}
