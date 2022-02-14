
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8904_priv {int devtype; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int capture; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct wm8904_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2)
{
 struct wm8904_priv *VAR_3 = FUNC_2(VAR_2);

 switch (VAR_3->devtype) {
 case 129:
  break;
 case 128:
  FUNC_1(&VAR_1.capture, 0, sizeof(VAR_1.capture));
  break;
 default:
  FUNC_0(VAR_2->dev, "Unknown device type %d\n",
   VAR_3->devtype);
  return -VAR_0;
 }

 FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 return 0;
}
