
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitmapsize; int* bitmap; } ;
typedef TYPE_1__ datapagemap_t ;
typedef int BlockNumber ;


 int FUNC_0 (int*,int ,int) ;
 int* FUNC_1 (int*,int) ;

void
FUNC_2(datapagemap_t *VAR_0, BlockNumber VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = VAR_1 / 8;
 VAR_3 = VAR_1 % 8;


 if (VAR_0->bitmapsize <= VAR_2)
 {
  int VAR_4 = VAR_0->bitmapsize;
  int VAR_5;







  VAR_5 = VAR_2 + 1;
  VAR_5 += 10;

  VAR_0->bitmap = FUNC_1(VAR_0->bitmap, VAR_5);


  FUNC_0(&VAR_0->bitmap[VAR_4], 0, VAR_5 - VAR_4);

  VAR_0->bitmapsize = VAR_5;
 }


 VAR_0->bitmap[VAR_2] |= (1 << VAR_3);
}
