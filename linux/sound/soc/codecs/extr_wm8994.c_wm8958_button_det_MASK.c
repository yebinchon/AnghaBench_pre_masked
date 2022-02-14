
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8994_priv {int btn_mask; TYPE_1__* micdet; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_6, u16 VAR_7)
{
 struct wm8994_priv *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 VAR_9 = 0;
 if (VAR_7 & 0x4)
  VAR_9 |= VAR_0;

 if (VAR_7 & 0x8)
  VAR_9 |= VAR_1;

 if (VAR_7 & 0x10)
  VAR_9 |= VAR_2;

 if (VAR_7 & 0x20)
  VAR_9 |= VAR_3;

 if (VAR_7 & 0x40)
  VAR_9 |= VAR_4;

 if (VAR_7 & 0x80)
  VAR_9 |= VAR_5;

 FUNC_1(VAR_8->micdet[0].jack, VAR_9,
       VAR_8->btn_mask);
}
