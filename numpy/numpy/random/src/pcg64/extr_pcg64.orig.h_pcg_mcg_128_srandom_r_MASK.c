
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {unsigned int state; } ;
typedef unsigned int pcg128_t ;



inline void FUNC_0(struct pcg_state_128 *VAR_0,
                                  pcg128_t VAR_1) {
  VAR_0->state = VAR_1 | 1u;
}
