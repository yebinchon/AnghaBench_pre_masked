
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vq_callback_t ;
struct virtio_vsock {int tx_run; int rx_run; int event_run; int event_lock; int rx_lock; int tx_lock; int loopback_work; int send_pkt_work; int event_work; int tx_work; int rx_work; int loopback_list; int loopback_list_lock; int send_pkt_list; int send_pkt_list_lock; int queued_replies; scalar_t__ rx_buf_max_nr; scalar_t__ rx_buf_nr; int vqs; struct virtio_device* vdev; } ;
struct virtio_device {struct virtio_vsock* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct virtio_vsock*) ;
 struct virtio_vsock* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,struct virtio_vsock*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct virtio_device*,int ,int ,int **,char const* const*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_14 (struct virtio_vsock*) ;
 int * VAR_12 ;
 int FUNC_15 (struct virtio_vsock*) ;
 int * VAR_13 ;
 int FUNC_16 (struct virtio_vsock*) ;

__attribute__((used)) static int FUNC_17(struct virtio_device *VAR_14)
{
 vq_callback_t *VAR_15[] = {
  VAR_12,
  VAR_13,
  VAR_11,
 };
 static const char * const VAR_16[] = {
  "rx",
  "tx",
  "event",
 };
 struct virtio_vsock *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_18 = FUNC_8(&VAR_5);
 if (VAR_18)
  return VAR_18;


 if (FUNC_11(VAR_4,
    FUNC_5(&VAR_5))) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_2);
 if (!VAR_17) {
  VAR_18 = -VAR_1;
  goto out;
 }

 VAR_17->vdev = VAR_14;

 VAR_18 = FUNC_13(VAR_17->vdev, VAR_3,
         VAR_17->vqs, VAR_15, VAR_16,
         ((void*)0));
 if (VAR_18 < 0)
  goto out;

 FUNC_16(VAR_17);

 VAR_17->rx_buf_nr = 0;
 VAR_17->rx_buf_max_nr = 0;
 FUNC_2(&VAR_17->queued_replies, 0);

 FUNC_6(&VAR_17->tx_lock);
 FUNC_6(&VAR_17->rx_lock);
 FUNC_6(&VAR_17->event_lock);
 FUNC_12(&VAR_17->send_pkt_list_lock);
 FUNC_0(&VAR_17->send_pkt_list);
 FUNC_12(&VAR_17->loopback_list_lock);
 FUNC_0(&VAR_17->loopback_list);
 FUNC_1(&VAR_17->rx_work, VAR_8);
 FUNC_1(&VAR_17->tx_work, VAR_10);
 FUNC_1(&VAR_17->event_work, VAR_6);
 FUNC_1(&VAR_17->send_pkt_work, VAR_9);
 FUNC_1(&VAR_17->loopback_work, VAR_7);

 FUNC_7(&VAR_17->tx_lock);
 VAR_17->tx_run = 1;
 FUNC_9(&VAR_17->tx_lock);

 FUNC_7(&VAR_17->rx_lock);
 FUNC_15(VAR_17);
 VAR_17->rx_run = 1;
 FUNC_9(&VAR_17->rx_lock);

 FUNC_7(&VAR_17->event_lock);
 FUNC_14(VAR_17);
 VAR_17->event_run = 1;
 FUNC_9(&VAR_17->event_lock);

 VAR_14->priv = VAR_17;
 FUNC_10(VAR_4, VAR_17);

 FUNC_9(&VAR_5);
 return 0;

out:
 FUNC_3(VAR_17);
 FUNC_9(&VAR_5);
 return VAR_18;
}
