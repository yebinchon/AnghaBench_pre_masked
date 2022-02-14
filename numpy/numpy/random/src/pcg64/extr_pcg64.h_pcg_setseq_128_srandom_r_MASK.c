
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int state; unsigned int inc; } ;
typedef TYPE_1__ pcg_state_setseq_128 ;
typedef unsigned int pcg128_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(pcg_state_setseq_128 *VAR_0,
                                            pcg128_t VAR_1,
                                            pcg128_t VAR_2) {
  VAR_0->state = 0U;
  VAR_0->inc = (VAR_2 << 1u) | 1u;
  FUNC_0(VAR_0);
  VAR_0->state += VAR_1;
  FUNC_0(VAR_0);
}
