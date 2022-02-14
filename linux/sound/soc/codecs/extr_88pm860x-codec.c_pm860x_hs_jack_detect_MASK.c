
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int hp_det; int hook_det; int hs_shrt; int lo_shrt; struct snd_soc_jack* hp_jack; } ;
struct pm860x_priv {int i2c; TYPE_1__ det; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct pm860x_priv*) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct pm860x_priv* FUNC_2 (struct snd_soc_component*) ;

int FUNC_3(struct snd_soc_component *VAR_8,
     struct snd_soc_jack *VAR_9,
     int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 struct pm860x_priv *VAR_14 = FUNC_2(VAR_8);
 int VAR_15;

 VAR_14->det.hp_jack = VAR_9;
 VAR_14->det.hp_det = VAR_10;
 VAR_14->det.hook_det = VAR_11;
 VAR_14->det.hs_shrt = VAR_12;
 VAR_14->det.lo_shrt = VAR_13;

 if (VAR_10 & VAR_7)
  FUNC_1(VAR_14->i2c, VAR_5,
    VAR_4, VAR_4);

 if (VAR_12) {
  VAR_15 = VAR_1 | VAR_0;
  FUNC_1(VAR_14->i2c, VAR_6, VAR_15, VAR_15);
 }

 if (VAR_13) {
  VAR_15 = VAR_3 | VAR_2;
  FUNC_1(VAR_14->i2c, VAR_6, VAR_15, VAR_15);
 }


 FUNC_0(0, VAR_14);
 return 0;
}
