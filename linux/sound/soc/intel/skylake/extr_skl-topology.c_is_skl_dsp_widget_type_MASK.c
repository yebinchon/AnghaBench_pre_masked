
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int id; TYPE_1__* dapm; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;
__attribute__((used)) static int FUNC_0(struct snd_soc_dapm_widget *VAR_0,
      struct device *VAR_1)
{
 if (VAR_0->dapm->dev != VAR_1)
  return 0;

 switch (VAR_0->id) {
 case 132:
 case 133:
 case 135:
 case 134:
 case 131:
 case 128:
 case 129:
 case 130:

  return 0;
 default:
  return 1;
 }
}
