
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {TYPE_2__* vdev; } ;
struct virtio_chan {int ring_bufs_avail; int vc_wq; int lock; int client; int vq; } ;
struct TYPE_3__ {unsigned int size; } ;
struct p9_req_t {TYPE_1__ rc; } ;
struct TYPE_4__ {struct virtio_chan* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct p9_req_t*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct p9_req_t* FUNC_4 (int ,unsigned int*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_2)
{
 struct virtio_chan *VAR_3 = VAR_2->vdev->priv;
 unsigned int VAR_4;
 struct p9_req_t *VAR_5;
 bool VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_1(VAR_0, ": request done\n");

 FUNC_2(&VAR_3->lock, VAR_7);
 while ((VAR_5 = FUNC_4(VAR_3->vq, &VAR_4)) != ((void*)0)) {
  if (!VAR_3->ring_bufs_avail) {
   VAR_3->ring_bufs_avail = 1;
   VAR_6 = 1;
  }

  if (VAR_4) {
   VAR_5->rc.size = VAR_4;
   FUNC_0(VAR_3->client, VAR_5, VAR_1);
  }
 }
 FUNC_3(&VAR_3->lock, VAR_7);

 if (VAR_6)
  FUNC_5(VAR_3->vc_wq);
}
