
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sse; scalar_t__ us; } ;
typedef TYPE_1__ timelib_time ;



int FUNC_0(timelib_time *VAR_0, timelib_time *VAR_1)
{
 if (VAR_0->sse == VAR_1->sse) {
  if (VAR_0->us == VAR_1->us) {
   return 0;
  }

  return (VAR_0->us < VAR_1->us) ? -1 : 1;
 }

 return (VAR_0->sse < VAR_1->sse) ? -1 : 1;
}
