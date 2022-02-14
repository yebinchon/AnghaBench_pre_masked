
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current_state; int current_step; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static __attribute__((always_inline)) inline void FUNC_1(DATA *VAR_1)
{
  VAR_1->current_step++;
  VAR_1->current_state = (VAR_1->current_state + 1) % VAR_0;
  FUNC_0(VAR_1);
}
