
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {int state; } ;
typedef int pcg128_t ;


 int VAR_0 ;

inline void FUNC_0(struct pcg_state_128 *VAR_1) {
  VAR_1->state = VAR_1->state * VAR_0 +
               (pcg128_t)(((intptr_t)VAR_1) | 1u);
}
