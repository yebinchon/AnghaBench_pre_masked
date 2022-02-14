
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* card; int mmio; TYPE_3__* dma_adb; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_7__ {int nr_periods; int period_real; int period_virt; int period_bytes; int substream; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(vortex_t * VAR_4, int VAR_5)
{
 stream_t *VAR_6 = &VAR_4->dma_adb[VAR_5];
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_7 =
     (FUNC_1(VAR_4->mmio, VAR_3 + (VAR_5 << 2)) &
      VAR_0) >> VAR_1;
 if (VAR_6->nr_periods >= 4)
  VAR_10 = (VAR_7 - VAR_6->period_real) & 3;
 else {
  VAR_10 = (VAR_7 - VAR_6->period_real);
  if (VAR_10 < 0)
   VAR_10 += VAR_6->nr_periods;
 }
 if (VAR_10 == 0)
  return 0;


 if (VAR_6->nr_periods > 4) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {

   VAR_8 = VAR_6->period_virt + VAR_11 + 4;
   if (VAR_8 >= VAR_6->nr_periods)
    VAR_8 -= VAR_6->nr_periods;

   VAR_9 = VAR_6->period_real + VAR_11;
   if (VAR_9 >= 4)
    VAR_9 -= 4;

   FUNC_2(VAR_4->mmio,
    VAR_2 + (((VAR_5 << 2) + VAR_9) << 2),
    FUNC_3(VAR_6->substream,
    VAR_6->period_bytes * VAR_8));

   FUNC_1(VAR_4->mmio, VAR_2 +
          (((VAR_5 << 2) + VAR_9) << 2));
  }
 }
 VAR_6->period_virt += VAR_10;
 VAR_6->period_real = VAR_7;
 if (VAR_6->period_virt >= VAR_6->nr_periods)
  VAR_6->period_virt -= VAR_6->nr_periods;
 if (VAR_10 != 1)
  FUNC_0(VAR_4->card->dev,
    "%d virt=%d, real=%d, delta=%d\n",
    VAR_5, VAR_6->period_virt, VAR_6->period_real, VAR_10);

 return VAR_10;
}
