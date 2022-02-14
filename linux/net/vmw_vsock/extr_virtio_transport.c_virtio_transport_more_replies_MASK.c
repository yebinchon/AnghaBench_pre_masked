
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int dummy; } ;
struct virtio_vsock {int queued_replies; struct virtqueue** vqs; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct virtqueue*) ;

__attribute__((used)) static bool FUNC_3(struct virtio_vsock *VAR_1)
{
 struct virtqueue *VAR_2 = VAR_1->vqs[VAR_0];
 int VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(&VAR_1->queued_replies);

 return VAR_3 < FUNC_2(VAR_2);
}
