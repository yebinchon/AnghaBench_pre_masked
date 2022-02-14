
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
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
     struct snd_kcontrol *VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_4(VAR_4->dapm);

 if (FUNC_0(VAR_6 != VAR_3))
  return -VAR_2;


 FUNC_3(VAR_7, VAR_1, 0x0f00, 0x0200);
 FUNC_2(FUNC_1(1));
 FUNC_3(VAR_7, VAR_1, 0x0f00, 0x0f00);
 FUNC_3(VAR_7, VAR_0, 0x1000, 0x1000);

 return 0;
}
