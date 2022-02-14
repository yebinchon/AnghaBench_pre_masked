
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_vsock_pkt {int len; int list; } ;
struct virtio_vsock {int loopback_work; int loopback_list_lock; int loopback_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct virtio_vsock *VAR_1,
           struct virtio_vsock_pkt *VAR_2)
{
 int VAR_3 = VAR_2->len;

 FUNC_2(&VAR_1->loopback_list_lock);
 FUNC_0(&VAR_2->list, &VAR_1->loopback_list);
 FUNC_3(&VAR_1->loopback_list_lock);

 FUNC_1(VAR_0, &VAR_1->loopback_work);

 return VAR_3;
}
