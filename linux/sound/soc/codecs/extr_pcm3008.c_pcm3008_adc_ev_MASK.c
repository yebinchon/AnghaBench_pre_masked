
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct snd_kcontrol {int dummy; } ;
struct pcm3008_setup_data {int pdad_pin; } ;
struct TYPE_2__ {struct pcm3008_setup_data* platform_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0,
     struct snd_kcontrol *VAR_1,
     int VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_2(VAR_0->dapm);
 struct pcm3008_setup_data *VAR_4 = VAR_3->dev->platform_data;

 FUNC_1(VAR_4->pdad_pin,
    FUNC_0(VAR_2));

 return 0;
}
