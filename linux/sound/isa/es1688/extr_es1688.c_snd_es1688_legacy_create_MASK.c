
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {int dummy; } ;
struct snd_card {struct snd_es1688* private_data; } ;
struct device {int dummy; } ;


 int FUNC_0 (long*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 long* VAR_9 ;
 int FUNC_2 (struct snd_card*,struct snd_es1688*,long,int ,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_10,
        struct device *VAR_11, unsigned int VAR_12)
{
 struct snd_es1688 *VAR_13 = VAR_10->private_data;
 static long VAR_14[] = {0x220, 0x240, 0x260};
 static int VAR_15[] = {5, 9, 10, 7, -1};
 static int VAR_16[] = {1, 3, 0, -1};

 int VAR_17, VAR_18;

 if (VAR_6[VAR_12] == VAR_3) {
  VAR_6[VAR_12] = FUNC_4(VAR_15);
  if (VAR_6[VAR_12] < 0) {
   FUNC_1(VAR_11, "unable to find a free IRQ\n");
   return -VAR_0;
  }
 }
 if (VAR_5[VAR_12] == VAR_2) {
  VAR_5[VAR_12] = FUNC_3(VAR_16);
  if (VAR_5[VAR_12] < 0) {
   FUNC_1(VAR_11, "unable to find a free DMA\n");
   return -VAR_0;
  }
 }

 if (VAR_9[VAR_12] != VAR_4)
  return FUNC_2(VAR_10, VAR_13, VAR_9[VAR_12], VAR_8[VAR_12],
    VAR_6[VAR_12], VAR_7[VAR_12], VAR_5[VAR_12], VAR_1);

 VAR_17 = 0;
 do {
  VAR_9[VAR_12] = VAR_14[VAR_17];
  VAR_18 = FUNC_2(VAR_10, VAR_13, VAR_9[VAR_12], VAR_8[VAR_12],
    VAR_6[VAR_12], VAR_7[VAR_12], VAR_5[VAR_12], VAR_1);
 } while (VAR_18 < 0 && ++VAR_17 < FUNC_0(VAR_14));

 return VAR_18;
}
