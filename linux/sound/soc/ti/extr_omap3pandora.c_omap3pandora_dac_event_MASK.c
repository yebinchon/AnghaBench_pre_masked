
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {TYPE_1__* dapm; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 int VAR_5;





 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_5(VAR_1);
  if (VAR_5) {
   FUNC_1(VAR_2->dapm->dev, "Failed to power DAC: %d\n", VAR_5);
   return VAR_5;
  }
  FUNC_3(1);
  FUNC_2(VAR_0, 1);
 } else {
  FUNC_2(VAR_0, 0);
  FUNC_3(1);
  FUNC_4(VAR_1);
 }

 return 0;
}
