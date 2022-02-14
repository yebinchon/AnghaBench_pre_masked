
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ target; } ;
typedef TYPE_1__ to_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static uint8_t FUNC_1( to_t *VAR_2 )
{
  uint32_t VAR_3 = FUNC_0();

  if (VAR_2->start < VAR_2->target) {
    if ((VAR_3 >= VAR_2->start) && (VAR_3 <= VAR_2->target)) {
      return VAR_0;
    } else {
      return VAR_1;
    }
  } else {
    if ((VAR_3 >= VAR_2->start) || (VAR_3 <= VAR_2->target)) {
      return VAR_0;
    } else {
      return VAR_1;
    }
  }
}
