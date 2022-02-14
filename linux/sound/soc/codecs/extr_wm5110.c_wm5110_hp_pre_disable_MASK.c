
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct arizona_priv {int out_down_delay; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct arizona_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_3(VAR_6->dapm);
 struct arizona_priv *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9 = FUNC_1(VAR_7, VAR_2);

 switch (VAR_6->shift) {
 case 129:
  if (!(VAR_9 & VAR_0)) {
   FUNC_2(VAR_7,
            VAR_3,
            VAR_4,
            VAR_4);
   FUNC_2(VAR_7,
            VAR_3,
            VAR_4, 0);
   VAR_8->out_down_delay += 27;
  }
  break;
 case 128:
  if (!(VAR_9 & VAR_1)) {
   FUNC_2(VAR_7,
            VAR_3,
            VAR_5,
            VAR_5);
   FUNC_2(VAR_7,
            VAR_3,
            VAR_5, 0);
   VAR_8->out_down_delay += 27;
  }
  break;
 default:
  break;
 }

 return 0;
}
