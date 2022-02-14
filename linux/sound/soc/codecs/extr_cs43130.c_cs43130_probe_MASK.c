
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;
struct cs43130_private {scalar_t__ xtal_ibias; int hpload_done; int regmap; int work; int wq; scalar_t__ dc_meas; int jack; struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (struct snd_soc_card*,char*,int ,int *,int *,int ) ;
 struct cs43130_private* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_18)
{
 int VAR_19;
 struct cs43130_private *VAR_20 = FUNC_7(VAR_18);
 struct snd_soc_card *VAR_21 = VAR_18->card;
 unsigned int VAR_22;

 VAR_20->component = VAR_18;

 if (VAR_20->xtal_ibias != VAR_11) {
  FUNC_5(VAR_20->regmap, VAR_0,
       VAR_10,
       VAR_20->xtal_ibias);
  FUNC_5(VAR_20->regmap, VAR_6,
       VAR_9, 0);
 }

 VAR_19 = FUNC_6(VAR_21, "Headphone", VAR_8,
        &VAR_20->jack, ((void*)0), 0);
 if (VAR_19 < 0) {
  FUNC_2(VAR_18->dev, "Cannot create jack\n");
  return VAR_19;
 }

 VAR_20->hpload_done = 0;
 if (VAR_20->dc_meas) {
  VAR_19 = FUNC_3(VAR_18->dev, &VAR_16);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_3(VAR_18->dev, &VAR_17);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_3(VAR_18->dev, &VAR_14);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_3(VAR_18->dev, &VAR_15);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_20->wq = FUNC_1("cs43130_hp");
  if (!VAR_20->wq)
   return -VAR_12;
  FUNC_0(&VAR_20->work, VAR_13);
 }

 FUNC_4(VAR_20->regmap, VAR_7, &VAR_22);
 FUNC_4(VAR_20->regmap, VAR_4, &VAR_22);
 FUNC_5(VAR_20->regmap, VAR_6,
      VAR_3 | VAR_5, 0);
 FUNC_5(VAR_20->regmap, VAR_1,
      VAR_2, 0);
 FUNC_5(VAR_20->regmap, VAR_1,
      VAR_2,
      VAR_2);

 return 0;
}
