
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int dummy; } ;
struct snd_card {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (struct snd_card*,int ,scalar_t__,scalar_t__,int,int ,int ,int ,int ,struct snd_gus_card**) ;
 scalar_t__ FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_8,
       struct device *VAR_9, unsigned int VAR_10,
       struct snd_gus_card **VAR_11)
{
 static int VAR_12[] = {11, 12, 15, 9, 5, 7, 3, -1};
 static int VAR_13[] = {5, 6, 7, 3, 1, -1};

 if (VAR_5[VAR_10] == VAR_2) {
  VAR_5[VAR_10] = FUNC_3(VAR_12);
  if (VAR_5[VAR_10] < 0) {
   FUNC_0(VAR_9, "unable to find a free IRQ for GF1\n");
   return -VAR_0;
  }
 }
 if (VAR_4[VAR_10] == VAR_1) {
  VAR_4[VAR_10] = FUNC_2(VAR_13);
  if (VAR_4[VAR_10] < 0) {
   FUNC_0(VAR_9, "unable to find a free DMA for GF1\n");
   return -VAR_0;
  }
 }
 return FUNC_1(VAR_8, VAR_6[VAR_10], VAR_5[VAR_10], VAR_4[VAR_10], -1,
   0, VAR_3[VAR_10], VAR_7[VAR_10], 0, VAR_11);
}
