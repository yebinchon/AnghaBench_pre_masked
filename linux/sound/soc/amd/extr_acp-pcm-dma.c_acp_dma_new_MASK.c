
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int pcm; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct device {int dummy; } ;
struct audio_drv_data {int asic_type; } ;
struct TYPE_2__ {struct device* parent; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct audio_drv_data* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,struct device*,int ,int ) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_6,
            VAR_0);
 struct audio_drv_data *VAR_8 = FUNC_0(VAR_7->dev);
 struct device *VAR_9 = VAR_7->dev->parent;

 switch (VAR_8->asic_type) {
 case 128:
  FUNC_1(VAR_6->pcm,
            VAR_3,
            VAR_9,
            VAR_5,
            VAR_4);
  break;
 default:
  FUNC_1(VAR_6->pcm,
            VAR_3,
            VAR_9,
            VAR_2,
            VAR_1);
  break;
 }
 return 0;
}
