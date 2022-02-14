
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int mic_det; struct snd_soc_jack* mic_jack; } ;
struct pm860x_priv {int i2c; TYPE_1__ det; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct pm860x_priv*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct pm860x_priv* FUNC_2 (struct snd_soc_component*) ;

int FUNC_3(struct snd_soc_component *VAR_3,
      struct snd_soc_jack *VAR_4, int VAR_5)
{
 struct pm860x_priv *VAR_6 = FUNC_2(VAR_3);

 VAR_6->det.mic_jack = VAR_4;
 VAR_6->det.mic_det = VAR_5;

 if (VAR_5 & VAR_2)
  FUNC_1(VAR_6->i2c, VAR_1,
    VAR_0, VAR_0);


 FUNC_0(0, VAR_6);
 return 0;
}
