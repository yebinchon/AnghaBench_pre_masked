
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int* pinstate; size_t current_state; int mask; } ;
typedef TYPE_1__ DATA ;


 int FUNC_0 (int,int,int ,int ) ;

__attribute__((used)) static __attribute__((always_inline)) inline void FUNC_1(DATA *VAR_0)
{
  uint32_t VAR_1 = VAR_0->pinstate[VAR_0->current_state];

  FUNC_0(VAR_1, VAR_0->mask & ~VAR_1, 0, 0);
}
