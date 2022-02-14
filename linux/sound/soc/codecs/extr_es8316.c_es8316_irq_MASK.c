
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct es8316_priv {int lock; TYPE_1__* jack; scalar_t__ jd_inverted; int regmap; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct es8316_priv *VAR_10 = VAR_9;
 struct snd_soc_component *VAR_11 = VAR_10->component;
 unsigned int VAR_12;

 FUNC_3(&VAR_10->lock);

 FUNC_5(VAR_10->regmap, VAR_0, &VAR_12);
 if (VAR_12 == 0x00)
  goto out;


 if (!VAR_10->jack)
  goto out;

 if (VAR_10->jd_inverted)
  VAR_12 ^= VAR_2;

 FUNC_0(VAR_11->dev, "gpio flags %#04x\n", VAR_12);
 if (VAR_12 & VAR_2) {

  if (VAR_10->jack->status & VAR_7)
   FUNC_1(VAR_11);

  if (VAR_10->jack->status & VAR_5) {
   FUNC_6(VAR_10->jack, 0,
         VAR_6 | VAR_4);
   FUNC_0(VAR_11->dev, "jack unplugged\n");
  }
 } else if (!(VAR_10->jack->status & VAR_5)) {

  FUNC_2(VAR_11);
  FUNC_5(VAR_10->regmap, VAR_0, &VAR_12);
  if (VAR_10->jd_inverted)
   VAR_12 ^= VAR_2;
  FUNC_0(VAR_11->dev, "gpio flags %#04x\n", VAR_12);
  if (VAR_12 & VAR_2) {

   FUNC_1(VAR_11);
  } else if (VAR_12 & VAR_1) {

   FUNC_6(VAR_10->jack,
         VAR_6,
         VAR_6);

  } else {

   FUNC_6(VAR_10->jack,
         VAR_5,
         VAR_6);

   FUNC_1(VAR_11);
  }
 } else if (VAR_10->jack->status & VAR_7) {

  if (VAR_12 & VAR_1) {

   FUNC_6(VAR_10->jack, 0, VAR_4);
  } else {

   FUNC_6(VAR_10->jack,
         VAR_4,
         VAR_4);
  }
 }

out:
 FUNC_4(&VAR_10->lock);
 return VAR_3;
}
