
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t TimeoutId ;
struct TYPE_2__ {int indicator; } ;


 TYPE_1__* VAR_0 ;

bool
FUNC_0(TimeoutId VAR_1, bool VAR_2)
{
 if (VAR_0[VAR_1].indicator)
 {
  if (VAR_2)
   VAR_0[VAR_1].indicator = 0;
  return 1;
 }
 return 0;
}
