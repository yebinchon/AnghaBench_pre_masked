
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bitmapsize; int* bitmap; } ;
typedef TYPE_1__ datapagemap_t ;
struct TYPE_5__ {int nextblkno; TYPE_1__* map; } ;
typedef TYPE_2__ datapagemap_iterator_t ;
typedef int BlockNumber ;



bool
FUNC_0(datapagemap_iterator_t *VAR_0, BlockNumber *VAR_1)
{
 datapagemap_t *VAR_2 = VAR_0->map;

 for (;;)
 {
  BlockNumber VAR_3 = VAR_0->nextblkno;
  int VAR_4 = VAR_3 / 8;
  int VAR_5 = VAR_3 % 8;

  if (VAR_4 >= VAR_2->bitmapsize)
   break;

  VAR_0->nextblkno++;

  if (VAR_2->bitmap[VAR_4] & (1 << VAR_5))
  {
   *VAR_1 = VAR_3;
   return 1;
  }
 }


 return 0;
}
