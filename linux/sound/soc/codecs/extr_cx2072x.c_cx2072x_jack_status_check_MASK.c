
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cx2072x_priv {int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int) ;
 struct cx2072x_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(void *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6;
 struct cx2072x_priv *VAR_8 = FUNC_5(VAR_7);
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 int VAR_11 = 0;

 FUNC_1(&VAR_8->lock);

 FUNC_3(VAR_8->regmap, VAR_1, &VAR_9);
 VAR_9 = VAR_9 >> 24;
 FUNC_3(VAR_8->regmap, VAR_0, &VAR_10);

 if (VAR_9 == 0x80) {
  VAR_10 = VAR_10 >> 8;

  if (VAR_10 & 0x8) {

   VAR_11 |= VAR_5;
   if (VAR_10 & 0x2)
    VAR_11 |= VAR_3;
  } else if (VAR_10 & 0x4) {

   VAR_11 |= VAR_4;
  } else {

   VAR_11 |= VAR_4;
  }
 }


 FUNC_4(VAR_8->regmap, VAR_2, 0x12 << 24);

 FUNC_2(&VAR_8->lock);

 FUNC_0(VAR_7->dev, "CX2072X_HSDETECT type=0x%X,Jack state = %x\n",
  VAR_10, VAR_11);
 return VAR_11;
}
