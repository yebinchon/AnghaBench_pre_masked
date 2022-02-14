
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int inc; } ;
typedef TYPE_1__ pcg_state_setseq_128 ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(pcg_state_setseq_128 *VAR_1) {
  VAR_1->state = VAR_1->state * VAR_0 + VAR_1->inc;
}
