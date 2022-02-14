
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {int* sysclk; int* mclk; int* aifclk; TYPE_1__* fll; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 (int ,char*,int,int) ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4, int VAR_5)
{
 struct wm8994_priv *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (VAR_5)
  VAR_9 = 4;
 else
  VAR_9 = 0;

 switch (VAR_6->sysclk[VAR_5]) {
 case 129:
  VAR_7 = VAR_6->mclk[0];
  break;

 case 128:
  VAR_8 |= 0x8;
  VAR_7 = VAR_6->mclk[1];
  break;

 case 131:
  VAR_8 |= 0x10;
  VAR_7 = VAR_6->fll[0].out;
  break;

 case 130:
  VAR_8 |= 0x18;
  VAR_7 = VAR_6->fll[1].out;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_7 >= 13500000) {
  VAR_7 /= 2;
  VAR_8 |= VAR_1;

  FUNC_0(VAR_4->dev, "Dividing AIF%d clock to %dHz\n",
   VAR_5 + 1, VAR_7);
 }

 VAR_6->aifclk[VAR_5] = VAR_7;

 FUNC_2(VAR_4, VAR_3 + VAR_9,
       VAR_2 | VAR_1,
       VAR_8);

 return 0;
}
