
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ndigi; int lastrepeat; int* repeated; TYPE_1__* calls; } ;
typedef TYPE_2__ ax25_digi ;
struct TYPE_5__ {int * ax25_call; } ;


 int VAR_0 ;

void FUNC_0(const ax25_digi *VAR_1, ax25_digi *VAR_2)
{
 int VAR_3;

 VAR_2->ndigi = VAR_1->ndigi;
 VAR_2->lastrepeat = VAR_1->ndigi - VAR_1->lastrepeat - 2;


 for (VAR_3 = 0; VAR_3 < VAR_1->ndigi; VAR_3++) {
  VAR_2->calls[VAR_3] = VAR_1->calls[VAR_1->ndigi - VAR_3 - 1];

  if (VAR_3 <= VAR_2->lastrepeat) {
   VAR_2->calls[VAR_3].ax25_call[6] |= VAR_0;
   VAR_2->repeated[VAR_3] = 1;
  } else {
   VAR_2->calls[VAR_3].ax25_call[6] &= ~VAR_0;
   VAR_2->repeated[VAR_3] = 0;
  }
 }
}
