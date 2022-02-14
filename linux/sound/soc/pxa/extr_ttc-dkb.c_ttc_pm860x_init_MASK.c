
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct snd_soc_component*,int *,int,int,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int *,int) ;
 int FUNC_3 (int ,char*,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_9->codec_dai->component;


 FUNC_3(VAR_9->card, "Headphone Jack", VAR_3 |
         VAR_0 | VAR_1 | VAR_2,
         &VAR_5, VAR_6, FUNC_0(VAR_6));
 FUNC_3(VAR_9->card, "Microphone Jack", VAR_4,
         &VAR_7, VAR_8,
         FUNC_0(VAR_8));


 FUNC_1(VAR_10, &VAR_5, VAR_3,
         VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_10, &VAR_5, VAR_4);

 return 0;
}
