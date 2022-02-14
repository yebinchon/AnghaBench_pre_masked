
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,int ,int,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
           int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12;


 if (!(VAR_6 & VAR_1)) {
  VAR_10 = VAR_2,
  VAR_11 = VAR_8 * VAR_9;
 } else {
  VAR_10 = VAR_3;
  if (VAR_6 & VAR_0)
   VAR_11 = 25000000;
  else
   VAR_11 = 19200000;
 }
 VAR_12 = FUNC_1(VAR_7, 0, VAR_10, VAR_11, VAR_8 * 512);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7->component->dev, "can't set pll: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_2(VAR_7, VAR_4,
         VAR_8 * 512, VAR_5);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7->component->dev, "can't set clock %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
