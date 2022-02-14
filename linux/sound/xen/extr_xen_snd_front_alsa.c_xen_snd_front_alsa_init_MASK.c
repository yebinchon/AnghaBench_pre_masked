
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_snd_front_pcm_instance_info {int dummy; } ;
struct xen_front_cfg_card {int num_pcm_instances; int name_long; int name_short; int * pcm_instances; int pcm_hw; } ;
struct xen_snd_front_info {struct xen_snd_front_card_info* card_info; struct xen_front_cfg_card cfg; TYPE_1__* xb_dev; } ;
struct xen_snd_front_card_info {int num_pcm_instances; int * pcm_instances; int pcm_hw; struct snd_card* card; struct xen_snd_front_info* front_info; } ;
struct snd_card {int longname; int shortname; int driver; struct xen_snd_front_card_info* private_data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int * FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct xen_snd_front_card_info*,int *,int *) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct device*,int ,int ,int ,int,struct snd_card**) ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(struct xen_snd_front_info *VAR_4)
{
 struct device *VAR_5 = &VAR_4->xb_dev->dev;
 struct xen_front_cfg_card *VAR_6 = &VAR_4->cfg;
 struct xen_snd_front_card_info *VAR_7;
 struct snd_card *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_5, "Creating virtual sound card\n");

 VAR_9 = FUNC_4(VAR_5, 0, VAR_3, VAR_2,
      sizeof(struct xen_snd_front_card_info), &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = VAR_8->private_data;
 VAR_7->front_info = VAR_4;
 VAR_4->card_info = VAR_7;
 VAR_7->card = VAR_8;
 VAR_7->pcm_instances =
   FUNC_1(VAR_5, VAR_6->num_pcm_instances,
         sizeof(struct xen_snd_front_pcm_instance_info),
         VAR_1);
 if (!VAR_7->pcm_instances) {
  VAR_9 = -VAR_0;
  goto fail;
 }

 VAR_7->num_pcm_instances = VAR_6->num_pcm_instances;
 VAR_7->pcm_hw = VAR_6->pcm_hw;

 for (VAR_10 = 0; VAR_10 < VAR_6->num_pcm_instances; VAR_10++) {
  VAR_9 = FUNC_2(VAR_7, &VAR_6->pcm_instances[VAR_10],
           &VAR_7->pcm_instances[VAR_10]);
  if (VAR_9 < 0)
   goto fail;
 }

 FUNC_6(VAR_8->driver, VAR_3, sizeof(VAR_8->driver));
 FUNC_6(VAR_8->shortname, VAR_6->name_short, sizeof(VAR_8->shortname));
 FUNC_6(VAR_8->longname, VAR_6->name_long, sizeof(VAR_8->longname));

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 < 0)
  goto fail;

 return 0;

fail:
 FUNC_3(VAR_8);
 return VAR_9;
}
