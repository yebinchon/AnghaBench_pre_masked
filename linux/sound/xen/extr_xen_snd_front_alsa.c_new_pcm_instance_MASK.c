
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct xen_snd_front_pcm_stream_info {int dummy; } ;
struct xen_snd_front_pcm_instance_info {int num_pcm_streams_pb; int num_pcm_streams_cap; struct snd_pcm* pcm; TYPE_5__* streams_cap; TYPE_3__* streams_pb; int pcm_hw; struct xen_snd_front_card_info* card_info; } ;
struct xen_snd_front_card_info {TYPE_7__* card; TYPE_2__* front_info; } ;
struct xen_front_cfg_pcm_instance {int num_streams_pb; int num_streams_cap; int device_id; int name; TYPE_6__* streams_cap; TYPE_4__* streams_pb; int pcm_hw; } ;
struct snd_pcm {int nonatomic; int name; scalar_t__ info_flags; struct xen_snd_front_pcm_instance_info* private_data; } ;
struct TYPE_14__ {int card_dev; } ;
struct TYPE_13__ {int index; int pcm_hw; } ;
struct TYPE_12__ {int index; int pcm_hw; } ;
struct TYPE_11__ {int index; int pcm_hw; } ;
struct TYPE_10__ {int index; int pcm_hw; } ;
struct TYPE_9__ {TYPE_1__* xb_dev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int ,int,int) ;
 void* FUNC_1 (int *,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_7__*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_3 (struct snd_pcm*,int ,int *) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct xen_snd_front_card_info *VAR_6,
       struct xen_front_cfg_pcm_instance *VAR_7,
       struct xen_snd_front_pcm_instance_info *VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10, VAR_11;

 FUNC_0(&VAR_6->front_info->xb_dev->dev,
  "New PCM device \"%s\" with id %d playback %d capture %d",
  VAR_7->name,
  VAR_7->device_id,
  VAR_7->num_streams_pb,
  VAR_7->num_streams_cap);

 VAR_8->card_info = VAR_6;

 VAR_8->pcm_hw = VAR_7->pcm_hw;

 if (VAR_7->num_streams_pb) {
  VAR_8->streams_pb =
    FUNC_1(&VAR_6->card->card_dev,
          VAR_7->num_streams_pb,
          sizeof(struct xen_snd_front_pcm_stream_info),
          VAR_1);
  if (!VAR_8->streams_pb)
   return -VAR_0;
 }

 if (VAR_7->num_streams_cap) {
  VAR_8->streams_cap =
    FUNC_1(&VAR_6->card->card_dev,
          VAR_7->num_streams_cap,
          sizeof(struct xen_snd_front_pcm_stream_info),
          VAR_1);
  if (!VAR_8->streams_cap)
   return -VAR_0;
 }

 VAR_8->num_pcm_streams_pb =
   VAR_7->num_streams_pb;
 VAR_8->num_pcm_streams_cap =
   VAR_7->num_streams_cap;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_pcm_streams_pb; VAR_11++) {
  VAR_8->streams_pb[VAR_11].pcm_hw =
   VAR_7->streams_pb[VAR_11].pcm_hw;
  VAR_8->streams_pb[VAR_11].index =
   VAR_7->streams_pb[VAR_11].index;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->num_pcm_streams_cap; VAR_11++) {
  VAR_8->streams_cap[VAR_11].pcm_hw =
   VAR_7->streams_cap[VAR_11].pcm_hw;
  VAR_8->streams_cap[VAR_11].index =
   VAR_7->streams_cap[VAR_11].index;
 }

 VAR_10 = FUNC_2(VAR_6->card, VAR_7->name,
     VAR_7->device_id,
     VAR_7->num_streams_pb,
     VAR_7->num_streams_cap,
     &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_9->private_data = VAR_8;
 VAR_9->info_flags = 0;

 VAR_9->nonatomic = 1;
 FUNC_4(VAR_9->name, "Virtual card PCM", sizeof(VAR_9->name));

 if (VAR_7->num_streams_pb)
  FUNC_3(VAR_9, VAR_3,
    &VAR_5);

 if (VAR_7->num_streams_cap)
  FUNC_3(VAR_9, VAR_2,
    &VAR_4);

 VAR_8->pcm = VAR_9;
 return 0;
}
