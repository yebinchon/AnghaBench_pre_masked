
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hs_shrt; int hook_det; int lo_shrt; int hp_det; int mic_det; int mic_jack; int hp_jack; } ;
struct pm860x_priv {TYPE_2__* component; TYPE_1__ det; int i2c; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_12, void *VAR_13)
{
 struct pm860x_priv *VAR_14 = VAR_13;
 int VAR_15, VAR_16, VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 VAR_15 = FUNC_2(VAR_14->i2c, VAR_5);
 VAR_16 = FUNC_2(VAR_14->i2c, VAR_4);
 VAR_19 = VAR_14->det.hs_shrt | VAR_14->det.hook_det | VAR_14->det.lo_shrt
  | VAR_14->det.hp_det;


 if (VAR_15 & (VAR_0 | VAR_3 | VAR_6 | VAR_7 |
        VAR_8 | VAR_9))
  FUNC_4(FUNC_1(VAR_14->component->dev));


 if ((VAR_14->det.hp_det & VAR_10)
  && (VAR_15 & VAR_0))
  VAR_17 |= VAR_10;

 if ((VAR_14->det.mic_det & VAR_11)
  && (VAR_15 & VAR_3))
  VAR_18 |= VAR_11;

 if (VAR_14->det.hs_shrt && (VAR_16 & (VAR_6 | VAR_7)))
  VAR_17 |= VAR_14->det.hs_shrt;

 if (VAR_14->det.hook_det && (VAR_15 & VAR_1))
  VAR_17 |= VAR_14->det.hook_det;

 if (VAR_14->det.lo_shrt && (VAR_16 & (VAR_8 | VAR_9)))
  VAR_17 |= VAR_14->det.lo_shrt;

 if (VAR_17)
  FUNC_3(VAR_14->det.hp_jack, VAR_17, VAR_19);
 if (VAR_18)
  FUNC_3(VAR_14->det.mic_jack, VAR_11,
        VAR_11);

 FUNC_0(VAR_14->component->dev, "headphone report:0x%x, mask:%x\n",
  VAR_17, VAR_19);
 FUNC_0(VAR_14->component->dev, "microphone report:0x%x\n", VAR_18);
 return VAR_2;
}
