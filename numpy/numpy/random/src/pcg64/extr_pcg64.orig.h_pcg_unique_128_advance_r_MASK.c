
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {int state; } ;
typedef int pcg128_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

inline void FUNC_1(struct pcg_state_128 *VAR_1,
                                     pcg128_t VAR_2) {
  VAR_1->state =
      FUNC_0(VAR_1->state, VAR_2, VAR_0,
                          (pcg128_t)(((intptr_t)VAR_1) | 1u));
}
