
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct xdp_sock {scalar_t__ queue_id; int mutex; int tx; TYPE_1__* dev; TYPE_2__* umem; } ;
struct xdp_desc {scalar_t__ addr; int len; } ;
struct sock {int (* sk_write_space ) (struct sock*) ;int sk_mark; int sk_priority; } ;
struct sk_buff {int destructor; int mark; int priority; TYPE_1__* dev; } ;
struct TYPE_7__ {void* destructor_arg; } ;
struct TYPE_6__ {int cq; } ;
struct TYPE_5__ {scalar_t__ real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,char*,int ) ;
 struct sk_buff* FUNC_7 (struct sock*,int ,int,int*) ;
 int FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (int) ;
 struct xdp_sock* FUNC_10 (struct sock*) ;
 char* FUNC_11 (TYPE_2__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,struct xdp_desc*,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_6)
{
 struct xdp_sock *VAR_7 = FUNC_10(VAR_6);
 u32 VAR_8 = VAR_4;
 bool VAR_9 = 0;
 struct xdp_desc VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = 0;

 FUNC_2(&VAR_7->mutex);

 if (VAR_7->queue_id >= VAR_7->dev->real_num_tx_queues)
  goto out;

 while (FUNC_13(VAR_7->tx, &VAR_10, VAR_7->umem)) {
  char *VAR_13;
  u64 VAR_14;
  u32 VAR_15;

  if (VAR_8-- == 0) {
   VAR_12 = -VAR_0;
   goto out;
  }

  VAR_15 = VAR_10.len;
  VAR_11 = FUNC_7(VAR_6, VAR_15, 1, &VAR_12);
  if (FUNC_9(!VAR_11)) {
   VAR_12 = -VAR_0;
   goto out;
  }

  FUNC_4(VAR_11, VAR_15);
  VAR_14 = VAR_10.addr;
  VAR_13 = FUNC_11(VAR_7->umem, VAR_14);
  VAR_12 = FUNC_6(VAR_11, 0, VAR_13, VAR_15);
  if (FUNC_9(VAR_12) || FUNC_14(VAR_7->umem->cq)) {
   FUNC_1(VAR_11);
   goto out;
  }

  VAR_11->dev = VAR_7->dev;
  VAR_11->priority = VAR_6->sk_priority;
  VAR_11->mark = VAR_6->sk_mark;
  FUNC_5(VAR_11)->destructor_arg = (void *)(long)VAR_10.addr;
  VAR_11->destructor = VAR_5;

  VAR_12 = FUNC_0(VAR_11, VAR_7->queue_id);
  FUNC_12(VAR_7->tx);

  if (VAR_12 == VAR_3 || VAR_12 == VAR_2) {

   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_9 = 1;
 }

out:
 if (VAR_9)
  VAR_6->sk_write_space(VAR_6);

 FUNC_3(&VAR_7->mutex);
 return VAR_12;
}
