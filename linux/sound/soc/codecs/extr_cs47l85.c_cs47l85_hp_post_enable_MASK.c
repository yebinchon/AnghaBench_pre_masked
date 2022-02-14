
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dapm_widget *VAR_4)
{
 struct snd_soc_component *VAR_5 =
  FUNC_3(VAR_4->dapm);
 unsigned int VAR_6;
 int VAR_7;

 switch (VAR_4->shift) {
 case 129:
 case 128:
  VAR_7 = FUNC_1(VAR_5, VAR_3,
          &VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_5->dev,
    "Failed to check output enables: %d\n", VAR_7);
   return;
  }

  VAR_6 &= (VAR_1 | VAR_2);

  if (VAR_6 != (VAR_1 | VAR_2))
   break;

  FUNC_2(VAR_5,
           VAR_0,
           0x0001, 1);
  break;
 default:
  break;
 }
}
