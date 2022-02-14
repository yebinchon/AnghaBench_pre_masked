
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdp_sock {scalar_t__ dev; scalar_t__ queue_id; } ;
struct xdp_buff {TYPE_2__* rxq; scalar_t__ data; scalar_t__ data_end; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ dev; scalar_t__ queue_index; TYPE_1__ mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct xdp_sock*,struct xdp_buff*,scalar_t__) ;
 int FUNC_1 (struct xdp_sock*,struct xdp_buff*,scalar_t__) ;
 int FUNC_2 (struct xdp_sock*) ;

int FUNC_3(struct xdp_sock *VAR_2, struct xdp_buff *VAR_3)
{
 u32 VAR_4;

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 if (VAR_2->dev != VAR_3->rxq->dev || VAR_2->queue_id != VAR_3->rxq->queue_index)
  return -VAR_0;

 VAR_4 = VAR_3->data_end - VAR_3->data;

 return (VAR_3->rxq->mem.type == VAR_1) ?
  FUNC_1(VAR_2, VAR_3, VAR_4) : FUNC_0(VAR_2, VAR_3, VAR_4);
}
