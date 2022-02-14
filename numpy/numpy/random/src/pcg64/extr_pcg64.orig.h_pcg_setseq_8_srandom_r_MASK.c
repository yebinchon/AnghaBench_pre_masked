
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct pcg_state_setseq_8 {unsigned int state; unsigned int inc; } ;


 int FUNC_0 (struct pcg_state_setseq_8*) ;

inline void FUNC_1(struct pcg_state_setseq_8 *VAR_0,
                                   uint8_t VAR_1, uint8_t VAR_2) {
  VAR_0->state = 0U;
  VAR_0->inc = (VAR_2 << 1u) | 1u;
  FUNC_0(VAR_0);
  VAR_0->state += VAR_1;
  FUNC_0(VAR_0);
}
