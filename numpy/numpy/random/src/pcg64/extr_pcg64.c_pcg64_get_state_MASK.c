
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int has_uint32; int uinteger; TYPE_1__* pcg_state; } ;
typedef TYPE_2__ pcg64_state ;
struct TYPE_4__ {int state; int inc; } ;



extern void FUNC_0(pcg64_state *VAR_0, uint64_t *VAR_1,
                            int *VAR_2, uint32_t *VAR_3) {







  VAR_1[0] = (uint64_t)(VAR_0->pcg_state->state >> 64);
  VAR_1[1] = (uint64_t)(VAR_0->pcg_state->state & 0xFFFFFFFFFFFFFFFFULL);
  VAR_1[2] = (uint64_t)(VAR_0->pcg_state->inc >> 64);
  VAR_1[3] = (uint64_t)(VAR_0->pcg_state->inc & 0xFFFFFFFFFFFFFFFFULL);






  VAR_2[0] = VAR_0->has_uint32;
  VAR_3[0] = VAR_0->uinteger;
}
