
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xensnd_event_page {int dummy; } ;
struct xenbus_device {int dev; int otherend_id; } ;
struct xen_sndif_sring {int dummy; } ;
struct xen_snd_front_info {struct xenbus_device* xb_dev; } ;
struct TYPE_6__ {struct xensnd_event_page* page; } ;
struct TYPE_8__ {int * sring; } ;
struct TYPE_5__ {TYPE_4__ ring; int req_io_lock; int completion; } ;
struct TYPE_7__ {TYPE_2__ evt; TYPE_1__ req; } ;
struct xen_snd_front_evtchnl {int type; int index; int gref; int irq; int port; TYPE_3__ u; int ring_io_lock; int state; struct xen_snd_front_info* front_info; } ;
typedef int irq_handler_t ;
typedef int grant_ref_t ;
typedef enum xen_snd_front_evtchnl_type { ____Placeholder_xen_snd_front_evtchnl_type } xen_snd_front_evtchnl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct xen_sndif_sring*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct xen_sndif_sring*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct xen_snd_front_evtchnl*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int *,int ,int ,char*,struct xen_snd_front_evtchnl*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (struct xenbus_device*,int *) ;
 int FUNC_15 (struct xenbus_device*,struct xen_sndif_sring*,int,int*) ;

__attribute__((used)) static int FUNC_16(struct xen_snd_front_info *VAR_12, int VAR_13,
    struct xen_snd_front_evtchnl *VAR_14,
    enum xen_snd_front_evtchnl_type VAR_15)
{
 struct xenbus_device *VAR_16 = VAR_12->xb_dev;
 unsigned long VAR_17;
 grant_ref_t VAR_18;
 irq_handler_t VAR_19;
 char *VAR_20 = ((void*)0);
 int VAR_21;

 FUNC_10(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->type = VAR_15;
 VAR_14->index = VAR_13;
 VAR_14->front_info = VAR_12;
 VAR_14->state = VAR_1;
 VAR_14->gref = VAR_4;
 VAR_17 = FUNC_5(VAR_3);
 if (!VAR_17) {
  VAR_21 = -VAR_0;
  goto fail;
 }

 VAR_20 = FUNC_8(VAR_3, "%s-%s", VAR_6,
     VAR_15 == VAR_2 ?
     VAR_8 :
     VAR_7);
 if (!VAR_20) {
  VAR_21 = -VAR_0;
  goto fail;
 }

 FUNC_11(&VAR_14->ring_io_lock);

 if (VAR_15 == VAR_2) {
  struct xen_sndif_sring *VAR_22 = (struct xen_sndif_sring *)VAR_17;

  FUNC_7(&VAR_14->u.req.completion);
  FUNC_11(&VAR_14->u.req.req_io_lock);
  FUNC_1(VAR_22);
  FUNC_0(&VAR_14->u.req.ring, VAR_22, VAR_9);

  VAR_21 = FUNC_15(VAR_16, VAR_22, 1, &VAR_18);
  if (VAR_21 < 0) {
   VAR_14->u.req.ring.sring = ((void*)0);
   goto fail;
  }

  VAR_19 = VAR_11;
 } else {
  VAR_21 = FUNC_6(VAR_16->otherend_id,
        FUNC_13((void *)VAR_17), 0);
  if (VAR_21 < 0)
   goto fail;

  VAR_14->u.evt.page = (struct xensnd_event_page *)VAR_17;
  VAR_18 = VAR_21;
  VAR_19 = VAR_10;
 }

 VAR_14->gref = VAR_18;

 VAR_21 = FUNC_14(VAR_16, &VAR_14->port);
 if (VAR_21 < 0)
  goto fail;

 VAR_21 = FUNC_2(VAR_14->port);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev,
   "Failed to bind IRQ for domid %d port %d: %d\n",
   VAR_12->xb_dev->otherend_id, VAR_14->port, VAR_21);
  goto fail;
 }

 VAR_14->irq = VAR_21;

 VAR_21 = FUNC_12(VAR_14->irq, ((void*)0), VAR_19,
       VAR_5, VAR_20, VAR_14);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev, "Failed to request IRQ %d: %d\n",
   VAR_14->irq, VAR_21);
  goto fail;
 }

 FUNC_9(VAR_20);
 return 0;

fail:
 if (VAR_17)
  FUNC_4(VAR_17);
 FUNC_9(VAR_20);
 FUNC_3(&VAR_16->dev, "Failed to allocate ring: %d\n", VAR_21);
 return VAR_21;
}
