
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xen_front_cfg_card {int num_pcm_instances; struct xen_front_cfg_pcm_instance* pcm_instances; } ;
struct xen_snd_front_info {int num_evt_pairs; TYPE_4__* evt_pairs; TYPE_1__* xb_dev; struct xen_front_cfg_card cfg; } ;
struct xen_snd_front_evtchnl_pair {int dummy; } ;
struct xen_front_cfg_pcm_instance {int num_streams_pb; int num_streams_cap; TYPE_3__* streams_cap; TYPE_2__* streams_pb; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int evt; int req; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct xen_snd_front_info*,int,int *,int ) ;
 TYPE_4__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct xen_snd_front_info*) ;

int FUNC_4(struct xen_snd_front_info *VAR_4,
         int VAR_5)
{
 struct xen_front_cfg_card *VAR_6 = &VAR_4->cfg;
 struct device *VAR_7 = &VAR_4->xb_dev->dev;
 int VAR_8, VAR_9 = 0;

 VAR_4->evt_pairs =
   FUNC_2(VAR_5,
    sizeof(struct xen_snd_front_evtchnl_pair),
    VAR_3);
 if (!VAR_4->evt_pairs)
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_6->num_pcm_instances; VAR_8++) {
  struct xen_front_cfg_pcm_instance *VAR_10;
  int VAR_11, VAR_12;

  VAR_10 = &VAR_6->pcm_instances[VAR_8];

  for (VAR_11 = 0; VAR_11 < VAR_10->num_streams_pb; VAR_11++) {
   VAR_12 = VAR_10->streams_pb[VAR_11].index;

   VAR_9 = FUNC_1(VAR_4, VAR_12,
         &VAR_4->evt_pairs[VAR_12].req,
         VAR_2);
   if (VAR_9 < 0) {
    FUNC_0(VAR_7, "Error allocating control channel\n");
    goto fail;
   }

   VAR_9 = FUNC_1(VAR_4, VAR_12,
         &VAR_4->evt_pairs[VAR_12].evt,
         VAR_1);
   if (VAR_9 < 0) {
    FUNC_0(VAR_7, "Error allocating in-event channel\n");
    goto fail;
   }
  }

  for (VAR_11 = 0; VAR_11 < VAR_10->num_streams_cap; VAR_11++) {
   VAR_12 = VAR_10->streams_cap[VAR_11].index;

   VAR_9 = FUNC_1(VAR_4, VAR_12,
         &VAR_4->evt_pairs[VAR_12].req,
         VAR_2);
   if (VAR_9 < 0) {
    FUNC_0(VAR_7, "Error allocating control channel\n");
    goto fail;
   }

   VAR_9 = FUNC_1(VAR_4, VAR_12,
         &VAR_4->evt_pairs[VAR_12].evt,
         VAR_1);
   if (VAR_9 < 0) {
    FUNC_0(VAR_7, "Error allocating in-event channel\n");
    goto fail;
   }
  }
 }

 VAR_4->num_evt_pairs = VAR_5;
 return 0;

fail:
 FUNC_3(VAR_4);
 return VAR_9;
}
