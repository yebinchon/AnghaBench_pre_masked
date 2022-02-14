
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcg_state_128 {int state; } ;
typedef int pcg128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

inline void FUNC_1(struct pcg_state_128 *VAR_2,
                                     pcg128_t VAR_3) {
  VAR_2->state = FUNC_0(
      VAR_2->state, VAR_3, VAR_1, VAR_0);
}
