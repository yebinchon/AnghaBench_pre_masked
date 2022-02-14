
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst_cid; } ;
struct virtio_vsock_pkt {int len; int list; scalar_t__ reply; TYPE_1__ hdr; } ;
struct virtio_vsock {scalar_t__ guest_cid; int send_pkt_work; int send_pkt_list_lock; int send_pkt_list; int queued_replies; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 struct virtio_vsock* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (struct virtio_vsock_pkt*) ;
 int FUNC_10 (struct virtio_vsock*,struct virtio_vsock_pkt*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_11(struct virtio_vsock_pkt *VAR_3)
{
 struct virtio_vsock *VAR_4;
 int VAR_5 = VAR_3->len;

 FUNC_5();
 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4) {
  FUNC_9(VAR_3);
  VAR_5 = -VAR_0;
  goto out_rcu;
 }

 if (FUNC_1(VAR_3->hdr.dst_cid) == VAR_4->guest_cid) {
  VAR_5 = FUNC_10(VAR_4, VAR_3);
  goto out_rcu;
 }

 if (VAR_3->reply)
  FUNC_0(&VAR_4->queued_replies);

 FUNC_7(&VAR_4->send_pkt_list_lock);
 FUNC_2(&VAR_3->list, &VAR_4->send_pkt_list);
 FUNC_8(&VAR_4->send_pkt_list_lock);

 FUNC_3(VAR_2, &VAR_4->send_pkt_work);

out_rcu:
 FUNC_6();
 return VAR_5;
}
