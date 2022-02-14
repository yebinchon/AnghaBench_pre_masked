
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_vsock_event {int dummy; } ;
struct virtio_vsock {int * vqs; struct virtio_vsock_event* event_list; } ;


 size_t FUNC_0 (struct virtio_vsock_event*) ;
 size_t VAR_0 ;
 int FUNC_1 (struct virtio_vsock*,struct virtio_vsock_event*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct virtio_vsock *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->event_list); VAR_2++) {
  struct virtio_vsock_event *VAR_3 = &VAR_1->event_list[VAR_2];

  FUNC_1(VAR_1, VAR_3);
 }

 FUNC_2(VAR_1->vqs[VAR_0]);
}
