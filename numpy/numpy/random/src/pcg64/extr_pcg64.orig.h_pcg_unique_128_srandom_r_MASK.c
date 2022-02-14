
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {unsigned int state; } ;
typedef scalar_t__ pcg128_t ;


 int FUNC_0 (struct pcg_state_128*) ;

inline void FUNC_1(struct pcg_state_128 *VAR_0,
                                     pcg128_t VAR_1) {
  VAR_0->state = 0U;
  FUNC_0(VAR_0);
  VAR_0->state += VAR_1;
  FUNC_0(VAR_0);
}
