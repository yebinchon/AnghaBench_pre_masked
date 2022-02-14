
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* component; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9,
           int VAR_10)
{
 int VAR_11;


 if (!(VAR_8 & VAR_1)) {

  if ((VAR_8 & VAR_2) ||
      (VAR_8 & VAR_3)) {

   VAR_11 = FUNC_1(VAR_9, 0,
        VAR_4,
        VAR_10 * 32, VAR_10 * 512);
  } else {

   VAR_11 = FUNC_1(VAR_9, 0,
        VAR_4,
        VAR_10 * 50, VAR_10 * 512);
  }
 } else {
  if (VAR_8 & VAR_0) {
   VAR_11 = FUNC_1(VAR_9, 0,
        VAR_5,
        25000000, VAR_10 * 512);
  } else {
   VAR_11 = FUNC_1(VAR_9, 0,
        VAR_5,
        19200000, VAR_10 * 512);
  }
 }

 if (VAR_11 < 0) {
  FUNC_0(VAR_9->component->dev, "can't set pll: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_6,
         VAR_10 * 512, VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9->component->dev, "can't set clock %d\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
