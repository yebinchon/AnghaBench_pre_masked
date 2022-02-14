
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int (* sk_data_ready ) (TYPE_5__*) ;} ;
struct xdp_sock {scalar_t__ dev; scalar_t__ queue_id; int rx_lock; int rx_dropped; TYPE_5__ sk; int rx; TYPE_2__* umem; } ;
struct xdp_buff {scalar_t__ data; scalar_t__ data_meta; scalar_t__ data_end; TYPE_1__* rxq; } ;
struct TYPE_7__ {scalar_t__ headroom; scalar_t__ chunk_size_nohr; int fq; } ;
struct TYPE_6__ {scalar_t__ dev; scalar_t__ queue_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 void* FUNC_4 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__*,TYPE_2__*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct xdp_sock *VAR_3, struct xdp_buff *VAR_4)
{
 u32 VAR_5 = VAR_4->data - VAR_4->data_meta;
 u32 VAR_6 = VAR_4->data_end - VAR_4->data;
 u64 VAR_7 = VAR_3->umem->headroom;
 void *VAR_8;
 u64 VAR_9;
 int VAR_10;

 FUNC_1(&VAR_3->rx_lock);

 if (VAR_3->dev != VAR_4->rxq->dev || VAR_3->queue_id != VAR_4->rxq->queue_index) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }

 if (!FUNC_7(VAR_3->umem->fq, &VAR_9, VAR_3->umem) ||
     VAR_6 > VAR_3->umem->chunk_size_nohr - VAR_2) {
  VAR_10 = -VAR_1;
  goto out_drop;
 }

 VAR_9 = FUNC_5(VAR_3->umem, VAR_9, VAR_7);
 VAR_8 = FUNC_4(VAR_3->umem, VAR_9);
 FUNC_0(VAR_8, VAR_4->data_meta, VAR_6 + VAR_5);

 VAR_9 = FUNC_5(VAR_3->umem, VAR_9, VAR_5);
 VAR_10 = FUNC_8(VAR_3->rx, VAR_9, VAR_6);
 if (VAR_10)
  goto out_drop;

 FUNC_6(VAR_3->umem->fq);
 FUNC_9(VAR_3->rx);

 FUNC_2(&VAR_3->rx_lock);

 VAR_3->sk.sk_data_ready(&VAR_3->sk);
 return 0;

out_drop:
 VAR_3->rx_dropped++;
out_unlock:
 FUNC_2(&VAR_3->rx_lock);
 return VAR_10;
}
