
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {struct snd_soc_component* disc_data; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* card; } ;
struct TYPE_6__ {int pins; } ;
struct TYPE_5__ {int (* close ) (struct tty_struct*) ;} ;
struct TYPE_4__ {struct snd_soc_dapm_context dapm; } ;


 int FUNC_0 (int *) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;
 int FUNC_7 (struct tty_struct*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->disc_data;
 struct snd_soc_dapm_context *VAR_5 = &VAR_4->card->dapm;

 FUNC_1(&VAR_1);


 FUNC_0(&VAR_0.pins);

 if (!VAR_4)
  return;

 VAR_2.close(VAR_3);


 FUNC_4(VAR_5);

 FUNC_2(VAR_5, "Mouthpiece");
 FUNC_3(VAR_5, "Earpiece");
 FUNC_3(VAR_5, "Microphone");
 FUNC_2(VAR_5, "Speaker");
 FUNC_2(VAR_5, "AGCIN");

 FUNC_6(VAR_5);

 FUNC_5(VAR_5);
}
