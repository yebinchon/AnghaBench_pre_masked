
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct virtio_device {TYPE_2__ dev; TYPE_1__* config; struct virtio_chan* priv; } ;
struct virtio_chan {struct virtio_chan* vc_wq; struct virtio_chan* tag; scalar_t__ inuse; int chan_list; } ;
struct TYPE_6__ {int attr; } ;
struct TYPE_4__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct virtio_chan*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct virtio_device*) ;
 int FUNC_8 (struct virtio_device*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_11(struct virtio_device *VAR_5)
{
 struct virtio_chan *VAR_6 = VAR_5->priv;
 unsigned long VAR_7;

 FUNC_5(&VAR_4);


 FUNC_3(&VAR_6->chan_list);
 VAR_7 = VAR_3;


 while (VAR_6->inuse) {
  FUNC_6(&VAR_4);
  FUNC_4(250);
  if (FUNC_10(VAR_3, VAR_7 + 10 * VAR_0)) {
   FUNC_0(&VAR_5->dev,
      "p9_virtio_remove: waiting for device in use.\n");
   VAR_7 = VAR_3;
  }
  FUNC_5(&VAR_4);
 }

 FUNC_6(&VAR_4);

 VAR_5->config->reset(VAR_5);
 VAR_5->config->del_vqs(VAR_5);

 FUNC_9(&(VAR_5->dev.kobj), &VAR_2.attr);
 FUNC_2(&(VAR_5->dev.kobj), VAR_1);
 FUNC_1(VAR_6->tag);
 FUNC_1(VAR_6->vc_wq);
 FUNC_1(VAR_6);

}
