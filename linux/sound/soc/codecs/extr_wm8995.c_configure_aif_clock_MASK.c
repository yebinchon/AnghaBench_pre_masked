
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8995_priv {int* sysclk; int* mclk; int* aifclk; TYPE_1__* fll; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (int ,char*,int,int) ;
 struct wm8995_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5, int VAR_6)
{
 struct wm8995_priv *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_5);

 if (VAR_6)
  VAR_10 = 4;
 else
  VAR_10 = 0;

 switch (VAR_7->sysclk[VAR_6]) {
 case 129:
  VAR_8 = VAR_7->mclk[0];
  break;
 case 128:
  VAR_9 |= 0x8;
  VAR_8 = VAR_7->mclk[1];
  break;
 case 131:
  VAR_9 |= 0x10;
  VAR_8 = VAR_7->fll[0].out;
  break;
 case 130:
  VAR_9 |= 0x18;
  VAR_8 = VAR_7->fll[1].out;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8 >= 13500000) {
  VAR_8 /= 2;
  VAR_9 |= VAR_1;

  FUNC_0(VAR_5->dev, "Dividing AIF%d clock to %dHz\n",
   VAR_6 + 1, VAR_8);
 }

 VAR_7->aifclk[VAR_6] = VAR_8;

 FUNC_2(VAR_5, VAR_4 + VAR_10,
       VAR_3 | VAR_2,
       VAR_9);
 return 0;
}
