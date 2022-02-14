
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8971_priv {int charge_work; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct wm8971_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_2,
 enum snd_soc_bias_level VAR_3)
{
 struct wm8971_priv *VAR_4 = FUNC_6(VAR_2);
 u16 VAR_5 = FUNC_7(VAR_2, VAR_0) & 0xfe3e;

 switch (VAR_3) {
 case 130:

  FUNC_8(VAR_2, VAR_0, VAR_5 | 0x00c1);
  break;
 case 129:

  FUNC_1(&VAR_4->charge_work);
  break;
 case 128:
  if (FUNC_5(VAR_2) == 131) {
   FUNC_4(VAR_2);

   FUNC_8(VAR_2, VAR_0, VAR_5 | 0x01c0);
   FUNC_3(VAR_1,
    &VAR_4->charge_work, FUNC_2(1000));
  } else {

   FUNC_8(VAR_2, VAR_0, VAR_5 | 0x0140);
  }

  break;
 case 131:
  FUNC_0(&VAR_4->charge_work);
  FUNC_8(VAR_2, VAR_0, 0x0001);
  break;
 }
 return 0;
}
