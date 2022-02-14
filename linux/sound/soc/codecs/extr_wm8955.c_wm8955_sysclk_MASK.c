
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ,int,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_6,
    struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_1(VAR_6->dapm);
 int VAR_10 = 0;




 FUNC_0(VAR_9, VAR_5,
       VAR_2, 0);
 FUNC_0(VAR_9, VAR_1,
       VAR_4 | VAR_3, 0);

 switch (VAR_8) {
 case 129:
  break;
 case 128:
  VAR_10 = FUNC_2(VAR_9);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}
