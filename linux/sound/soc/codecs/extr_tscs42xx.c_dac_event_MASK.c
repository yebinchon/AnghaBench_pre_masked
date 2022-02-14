
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {int coeff_ram_synced; int coeff_ram_lock; int coeff_ram; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tscs42xx* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_1,
       struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 =
  FUNC_3(VAR_1->dapm);
 struct tscs42xx *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 FUNC_0(&VAR_5->coeff_ram_lock);

 if (!VAR_5->coeff_ram_synced) {
  VAR_6 = FUNC_4(VAR_4, VAR_5->coeff_ram, 0x00,
   VAR_0);
  if (VAR_6 < 0)
   goto exit;
  VAR_5->coeff_ram_synced = 1;
 }

 VAR_6 = 0;
exit:
 FUNC_1(&VAR_5->coeff_ram_lock);

 return VAR_6;
}
