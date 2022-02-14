
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pcg_state_64 {int state; } ;


 int VAR_0 ;

inline void FUNC_0(struct pcg_state_64 *VAR_1) {
  VAR_1->state =
      VAR_1->state * VAR_0 + (uint64_t)(((intptr_t)VAR_1) | 1u);
}
