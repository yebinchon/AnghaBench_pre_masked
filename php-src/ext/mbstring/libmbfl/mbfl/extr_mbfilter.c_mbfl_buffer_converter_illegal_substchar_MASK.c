
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* filter1; TYPE_1__* filter2; } ;
typedef TYPE_3__ mbfl_buffer_converter ;
struct TYPE_6__ {int illegal_substchar; } ;
struct TYPE_5__ {int illegal_substchar; } ;



int
FUNC_0(mbfl_buffer_converter *VAR_0, int VAR_1)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->filter2 != ((void*)0)) {
   VAR_0->filter2->illegal_substchar = VAR_1;
  } else if (VAR_0->filter1 != ((void*)0)) {
   VAR_0->filter1->illegal_substchar = VAR_1;
  } else {
   return 0;
  }
 }

 return 1;
}
