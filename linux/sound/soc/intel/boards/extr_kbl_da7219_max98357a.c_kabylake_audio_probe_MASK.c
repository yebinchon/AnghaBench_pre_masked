
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; TYPE_1__* id_entry; } ;
struct kbl_codec_private {int hdmi_pcm_list; } ;
struct TYPE_2__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct kbl_codec_private* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,struct snd_soc_card*) ;
 struct snd_soc_card* VAR_2 ;
 int FUNC_3 (struct snd_soc_card*,struct kbl_codec_private*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct kbl_codec_private *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->hdmi_pcm_list);

 VAR_2 =
  (struct snd_soc_card *)VAR_3->id_entry->driver_data;

 VAR_2->dev = &VAR_3->dev;
 FUNC_3(VAR_2, VAR_4);
 return FUNC_2(&VAR_3->dev, VAR_2);
}
