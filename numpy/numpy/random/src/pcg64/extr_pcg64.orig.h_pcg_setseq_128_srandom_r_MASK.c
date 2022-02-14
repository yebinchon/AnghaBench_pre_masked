
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_setseq_128 {unsigned int state; unsigned int inc; } ;
typedef unsigned int pcg128_t ;


 int FUNC_0 (struct pcg_state_setseq_128*) ;

inline void FUNC_1(struct pcg_state_setseq_128 *VAR_0,
                                     pcg128_t VAR_1, pcg128_t VAR_2) {
  VAR_0->state = 0U;
  VAR_0->inc = (VAR_2 << 1u) | 1u;
  FUNC_0(VAR_0);
  VAR_0->state += VAR_1;
  FUNC_0(VAR_0);
}
