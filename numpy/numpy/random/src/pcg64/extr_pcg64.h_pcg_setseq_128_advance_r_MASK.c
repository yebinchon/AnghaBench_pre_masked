
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inc; int state; } ;
typedef TYPE_1__ pcg_state_setseq_128 ;
typedef int pcg128_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(pcg_state_setseq_128 *VAR_1,
                                            pcg128_t VAR_2) {
  VAR_1->state = FUNC_0(VAR_1->state, VAR_2,
                                   VAR_0, VAR_1->inc);
}
