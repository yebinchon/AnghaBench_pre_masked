
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xen_front_cfg_card {int num_pcm_instances; struct xen_front_cfg_pcm_instance* pcm_instances; } ;
struct xen_snd_front_info {int xb_dev; TYPE_2__* evt_pairs; struct xen_front_cfg_card cfg; } ;
struct xen_front_cfg_pcm_instance {int num_streams_pb; int num_streams_cap; TYPE_3__* streams_cap; TYPE_1__* streams_pb; } ;
struct TYPE_6__ {int index; int xenstore_path; } ;
struct TYPE_5__ {int evt; int req; } ;
struct TYPE_4__ {int index; int xenstore_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xenbus_transaction,int *,int ,int ,int ) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (struct xenbus_transaction,int) ;
 int FUNC_3 (struct xenbus_transaction*) ;

int FUNC_4(struct xen_snd_front_info *VAR_5)
{
 struct xen_front_cfg_card *VAR_6 = &VAR_5->cfg;
 struct xenbus_transaction VAR_7;
 int VAR_8, VAR_9;

again:
 VAR_8 = FUNC_3(&VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5->xb_dev, VAR_8,
     "starting transaction");
  return VAR_8;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_pcm_instances; VAR_9++) {
  struct xen_front_cfg_pcm_instance *VAR_10;
  int VAR_11, VAR_12;

  VAR_10 = &VAR_6->pcm_instances[VAR_9];

  for (VAR_11 = 0; VAR_11 < VAR_10->num_streams_pb; VAR_11++) {
   VAR_12 = VAR_10->streams_pb[VAR_11].index;

   VAR_8 = FUNC_0(VAR_7,
           &VAR_5->evt_pairs[VAR_12].req,
           VAR_10->streams_pb[VAR_11].xenstore_path,
           VAR_4,
           VAR_1);
   if (VAR_8 < 0)
    goto fail;

   VAR_8 = FUNC_0(VAR_7,
           &VAR_5->evt_pairs[VAR_12].evt,
           VAR_10->streams_pb[VAR_11].xenstore_path,
           VAR_3,
           VAR_2);
   if (VAR_8 < 0)
    goto fail;
  }

  for (VAR_11 = 0; VAR_11 < VAR_10->num_streams_cap; VAR_11++) {
   VAR_12 = VAR_10->streams_cap[VAR_11].index;

   VAR_8 = FUNC_0(VAR_7,
           &VAR_5->evt_pairs[VAR_12].req,
           VAR_10->streams_cap[VAR_11].xenstore_path,
           VAR_4,
           VAR_1);
   if (VAR_8 < 0)
    goto fail;

   VAR_8 = FUNC_0(VAR_7,
           &VAR_5->evt_pairs[VAR_12].evt,
           VAR_10->streams_cap[VAR_11].xenstore_path,
           VAR_3,
           VAR_2);
   if (VAR_8 < 0)
    goto fail;
  }
 }
 VAR_8 = FUNC_2(VAR_7, 0);
 if (VAR_8 < 0) {
  if (VAR_8 == -VAR_0)
   goto again;

  FUNC_1(VAR_5->xb_dev, VAR_8,
     "completing transaction");
  goto fail_to_end;
 }
 return 0;
fail:
 FUNC_2(VAR_7, 1);
fail_to_end:
 FUNC_1(VAR_5->xb_dev, VAR_8, "writing XenStore");
 return VAR_8;
}
