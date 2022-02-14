
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct virtio_vsock {int tx_work; } ;
struct TYPE_2__ {struct virtio_vsock* priv; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_1)
{
 struct virtio_vsock *VAR_2 = VAR_1->vdev->priv;

 if (!VAR_2)
  return;
 FUNC_0(VAR_0, &VAR_2->tx_work);
}
