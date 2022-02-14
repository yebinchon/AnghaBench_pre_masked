
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct fe_tx_ring {struct fe_tx_buf* tx_buf; } ;
struct fe_tx_buf {struct sk_buff* skb; } ;
struct TYPE_2__ {int txd2; void* txd1; void* txd3; } ;
struct fe_map_state {int i; size_t ring_idx; TYPE_1__ txd; struct device* dev; } ;
struct device {int dummy; } ;
typedef void* dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (struct device*,struct page*,size_t,size_t,int ) ;
 int FUNC_3 (struct device*,void*) ;
 int FUNC_4 (struct fe_tx_buf*,int ,void*) ;
 int FUNC_5 (struct fe_tx_buf*,int ,size_t) ;
 int FUNC_6 (struct fe_tx_ring*,struct fe_map_state*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct fe_tx_ring *VAR_7, struct fe_map_state *VAR_8,
    struct page *VAR_9, size_t VAR_10, size_t VAR_11)
{
 struct device *VAR_12 = VAR_8->dev;
 struct fe_tx_buf *VAR_13;
 dma_addr_t VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_9, VAR_10, VAR_11, VAR_1);
 if (FUNC_7(FUNC_3(VAR_12, VAR_14)))
  return -VAR_2;

 if (VAR_8->i && !(VAR_8->i & 1))
     FUNC_6(VAR_7, VAR_8);

 VAR_13 = &VAR_7->tx_buf[VAR_8->ring_idx];
 if (VAR_8->i & 1) {
  VAR_8->txd.txd3 = VAR_14;
  VAR_8->txd.txd2 |= FUNC_1(VAR_11);
  FUNC_4(VAR_13, VAR_4, VAR_14);
  FUNC_5(VAR_13, VAR_6, VAR_11);
 } else {
  VAR_13->skb = (struct sk_buff *)VAR_0;
  VAR_8->txd.txd1 = VAR_14;
  VAR_8->txd.txd2 = FUNC_0(VAR_11);
  FUNC_4(VAR_13, VAR_3, VAR_14);
  FUNC_5(VAR_13, VAR_5, VAR_11);
 }
 VAR_8->i++;

 return 0;
}
