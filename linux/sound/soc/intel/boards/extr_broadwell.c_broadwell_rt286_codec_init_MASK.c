
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int card; TYPE_1__* codec_dai; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_soc_component*,int *) ;
 int FUNC_2 (int ,char*,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->codec_dai->component;
 int VAR_6 = 0;
 VAR_6 = FUNC_2(VAR_4->card, "Headset",
  VAR_1 | VAR_0, &VAR_2,
  VAR_3, FUNC_0(VAR_3));
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_5, &VAR_2);
 return 0;
}
