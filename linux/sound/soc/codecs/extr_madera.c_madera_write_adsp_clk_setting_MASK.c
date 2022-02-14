
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp {int num; int dev; scalar_t__ base; int regmap; } ;
struct madera_priv {unsigned int* adsp_rate_cache; TYPE_1__* madera; } ;
struct TYPE_2__ {int type; int dev; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct madera_priv *VAR_6,
      struct wm_adsp *VAR_7,
      unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10 = VAR_4;
 int VAR_11;

 VAR_9 = VAR_6->adsp_rate_cache[VAR_7->num - 1] << VAR_5;

 switch (VAR_6->madera->type) {
 case 130:
 case 129:
 case 128:

  VAR_10 |= VAR_0;
  VAR_9 |= (VAR_8 << VAR_1);
  break;
 default:

  FUNC_0(VAR_6->madera->dev, "Set DSP frequency to 0x%x\n", VAR_8);

  VAR_11 = FUNC_3(VAR_7->regmap,
       VAR_7->base + VAR_3, VAR_8);
  if (VAR_11)
   goto err;
  break;
 }

 VAR_11 = FUNC_2(VAR_7->regmap,
     VAR_7->base + VAR_2,
     VAR_10, VAR_9);
 if (VAR_11)
  goto err;

 FUNC_0(VAR_6->madera->dev, "Set DSP clocking to 0x%x\n", VAR_9);

 return 0;

err:
 FUNC_1(VAR_7->dev, "Failed to set DSP%d clock: %d\n", VAR_7->num, VAR_11);

 return VAR_11;
}
