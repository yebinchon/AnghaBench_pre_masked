
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {TYPE_1__* ctr; } ;
typedef TYPE_2__ philox_state ;
struct TYPE_4__ {scalar_t__* v; } ;



extern void FUNC_0(uint64_t *VAR_0, philox_state *VAR_1) {
  int VAR_2, VAR_3 = 0;
  uint64_t VAR_4;
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
    if (VAR_3 == 1) {
      VAR_1->ctr->v[VAR_2]++;
      VAR_3 = VAR_1->ctr->v[VAR_2] == 0 ? 1 : 0;
    }
    VAR_4 = VAR_1->ctr->v[VAR_2];
    VAR_1->ctr->v[VAR_2] += VAR_0[VAR_2];
    if (VAR_1->ctr->v[VAR_2] < VAR_4 && VAR_3 == 0) {
      VAR_3 = 1;
    }
  }
}
