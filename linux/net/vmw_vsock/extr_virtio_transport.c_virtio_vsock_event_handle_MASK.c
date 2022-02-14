
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_vsock_event {int id; } ;
struct virtio_vsock {int dummy; } ;



 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct virtio_vsock*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct virtio_vsock *VAR_1,
          struct virtio_vsock_event *VAR_2)
{
 switch (FUNC_0(VAR_2->id)) {
 case 128:
  FUNC_1(VAR_1);
  FUNC_2(VAR_0);
  break;
 }
}
