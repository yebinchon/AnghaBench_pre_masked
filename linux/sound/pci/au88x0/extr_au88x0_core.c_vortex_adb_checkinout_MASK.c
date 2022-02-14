
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* fixed_res; TYPE_2__* card; TYPE_1__* dma_adb; } ;
typedef TYPE_3__ vortex_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int* resources; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int* VAR_3 ;

__attribute__((used)) static char
FUNC_1(vortex_t * VAR_4, int VAR_5[], int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = VAR_3[VAR_7], VAR_10 = 0;

 if (VAR_6) {

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_10 |= VAR_4->dma_adb[VAR_8].resources[VAR_7];
  }
  VAR_10 |= VAR_4->fixed_res[VAR_7];

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if ((VAR_10 & (1 << VAR_8)) == 0) {
    if (VAR_5 != ((void*)0))
     VAR_5[VAR_7] |= (1 << VAR_8);
    else
     VAR_4->dma_adb[VAR_8].resources[VAR_7] |= (1 << VAR_8);





    return VAR_8;
   }
  }
 } else {
  if (VAR_5 == ((void*)0))
   return -VAR_0;

  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (VAR_5[VAR_7] & (1 << VAR_8)) {
    VAR_5[VAR_7] &= ~(1 << VAR_8);





    return VAR_8;
   }
  }
 }
 FUNC_0(VAR_4->card->dev,
  "FATAL: ResManager: resource type %d exhausted.\n",
  VAR_7);
 return -VAR_1;
}
