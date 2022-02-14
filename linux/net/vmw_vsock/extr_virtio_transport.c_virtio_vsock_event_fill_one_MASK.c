
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_vsock_event {int dummy; } ;
struct virtio_vsock {struct virtqueue** vqs; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct scatterlist*,struct virtio_vsock_event*,int) ;
 int FUNC_1 (struct virtqueue*,struct scatterlist*,int,struct virtio_vsock_event*,int ) ;

__attribute__((used)) static int FUNC_2(struct virtio_vsock *VAR_2,
           struct virtio_vsock_event *VAR_3)
{
 struct scatterlist VAR_4;
 struct virtqueue *VAR_5;

 VAR_5 = VAR_2->vqs[VAR_1];

 FUNC_0(&VAR_4, VAR_3, sizeof(*VAR_3));

 return FUNC_1(VAR_5, &VAR_4, 1, VAR_3, VAR_0);
}
