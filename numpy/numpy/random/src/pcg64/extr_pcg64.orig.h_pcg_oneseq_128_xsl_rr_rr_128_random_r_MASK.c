
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {int state; } ;
typedef int pcg128_t ;


 int FUNC_0 (struct pcg_state_128*) ;
 int FUNC_1 (int ) ;

inline pcg128_t
FUNC_2(struct pcg_state_128 *VAR_0) {
  FUNC_0(VAR_0);
  return FUNC_1(VAR_0->state);
}
