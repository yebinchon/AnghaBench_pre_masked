
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_64 {int state; } ;


 int VAR_0 ;
 int VAR_1 ;

inline void FUNC_0(struct pcg_state_64 *VAR_2) {
  VAR_2->state =
      VAR_2->state * VAR_1 + VAR_0;
}
