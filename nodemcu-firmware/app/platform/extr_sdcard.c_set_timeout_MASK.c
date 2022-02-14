
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ target; } ;
typedef TYPE_1__ to_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void FUNC_1( to_t *VAR_0, uint32_t VAR_1 )
{
  uint32_t VAR_2;

  VAR_0->start = FUNC_0();

  VAR_2 = 0xffffffff - VAR_0->start;
  if (VAR_2 > VAR_1) {
    VAR_0->target = VAR_1 - VAR_2;
  } else {
    VAR_0->target = VAR_0->start + VAR_1;
  }
}
