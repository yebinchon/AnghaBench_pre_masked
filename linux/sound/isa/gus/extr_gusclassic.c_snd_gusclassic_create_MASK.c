
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int dummy; } ;
struct snd_card {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (long*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 int * VAR_8 ;
 long* VAR_9 ;
 int FUNC_2 (struct snd_card*,long,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int ,struct snd_gus_card**) ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int*) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_10,
     struct device *VAR_11, unsigned int VAR_12,
     struct snd_gus_card **VAR_13)
{
 static long VAR_14[] = {0x220, 0x230, 0x240, 0x250, 0x260};
 static int VAR_15[] = {5, 11, 12, 9, 7, 15, 3, 4, -1};
 static int VAR_16[] = {5, 6, 7, 1, 3, -1};

 int VAR_17, VAR_18;

 if (VAR_7[VAR_12] == VAR_2) {
  VAR_7[VAR_12] = FUNC_4(VAR_15);
  if (VAR_7[VAR_12] < 0) {
   FUNC_1(VAR_11, "unable to find a free IRQ\n");
   return -VAR_0;
  }
 }
 if (VAR_5[VAR_12] == VAR_1) {
  VAR_5[VAR_12] = FUNC_3(VAR_16);
  if (VAR_5[VAR_12] < 0) {
   FUNC_1(VAR_11, "unable to find a free DMA1\n");
   return -VAR_0;
  }
 }
 if (VAR_6[VAR_12] == VAR_1) {
  VAR_6[VAR_12] = FUNC_3(VAR_16);
  if (VAR_6[VAR_12] < 0) {
   FUNC_1(VAR_11, "unable to find a free DMA2\n");
   return -VAR_0;
  }
 }

 if (VAR_9[VAR_12] != VAR_3)
  return FUNC_2(VAR_10, VAR_9[VAR_12], VAR_7[VAR_12], VAR_5[VAR_12], VAR_6[VAR_12],
    0, VAR_4[VAR_12], VAR_8[VAR_12], 0, VAR_13);

 VAR_17 = 0;
 do {
  VAR_9[VAR_12] = VAR_14[VAR_17];
  VAR_18 = FUNC_2(VAR_10, VAR_9[VAR_12], VAR_7[VAR_12], VAR_5[VAR_12], VAR_6[VAR_12],
    0, VAR_4[VAR_12], VAR_8[VAR_12], 0, VAR_13);
 } while (VAR_18 < 0 && ++VAR_17 < FUNC_0(VAR_14));

 return VAR_18;
}
