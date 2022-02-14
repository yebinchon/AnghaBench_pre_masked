
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u16 ;
struct snd_soc_component {int dummy; } ;
struct sgtl5000_priv {void** mute_state; } ;
 void* FUNC_0 (struct snd_soc_component*,int const) ;
 int FUNC_1 (struct snd_soc_component*,int const,void*) ;
 struct sgtl5000_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int) ;
 int FUNC_4 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_0,
     int VAR_1, int VAR_2)
{
 static const u16 VAR_3[] = {





  133,





  132,
  132
 };

 struct sgtl5000_priv *VAR_4 =
  FUNC_2(VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_4->mute_state[VAR_2] =
   FUNC_0(VAR_0, VAR_3[VAR_2]);
  break;
 case 130:
  FUNC_4(VAR_0, VAR_2);
  FUNC_1(VAR_0, VAR_3[VAR_2],
          VAR_4->mute_state[VAR_2]);
  break;
 case 129:
  VAR_4->mute_state[VAR_2] =
   FUNC_0(VAR_0, VAR_3[VAR_2]);
  FUNC_3(VAR_0, VAR_2);
  break;
 case 131:
  FUNC_1(VAR_0, VAR_3[VAR_2],
          VAR_4->mute_state[VAR_2]);
  break;
 default:
  break;
 }

 return 0;
}
