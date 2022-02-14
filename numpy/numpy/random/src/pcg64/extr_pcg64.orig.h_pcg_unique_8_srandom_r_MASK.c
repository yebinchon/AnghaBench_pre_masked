
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pcg_state_8 {unsigned int state; } ;


 int FUNC_0 (struct pcg_state_8*) ;

inline void FUNC_1(struct pcg_state_8 *VAR_0, uint8_t VAR_1) {
  VAR_0->state = 0U;
  FUNC_0(VAR_0);
  VAR_0->state += VAR_1;
  FUNC_0(VAR_0);
}
