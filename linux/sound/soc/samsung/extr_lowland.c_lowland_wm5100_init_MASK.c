
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,int,int *,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_component*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->codec_dai->component;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_12, VAR_8,
           VAR_6, VAR_1,
           VAR_5);
 if (VAR_13 < 0) {
  FUNC_1("Failed to set SYSCLK clock source: %d\n", VAR_13);
  return VAR_13;
 }


 VAR_13 = FUNC_3(VAR_12, VAR_7, 0,
           VAR_0, 0);
 if (VAR_13 < 0) {
  FUNC_1("Failed to set OPCLK rate: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_11->card, "Headset", VAR_4 |
        VAR_3 | VAR_2,
        &VAR_9, VAR_10,
        FUNC_0(VAR_10));
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_12, &VAR_9);

 return 0;
}
