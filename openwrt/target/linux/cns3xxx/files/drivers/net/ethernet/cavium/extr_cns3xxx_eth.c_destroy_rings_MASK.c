
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_desc {int sdp; } ;
struct _tx_ring {struct sk_buff** buff_tab; struct tx_desc* desc; } ;
struct _rx_ring {void** buff_tab; struct rx_desc* desc; } ;
struct sw {int dev; struct _tx_ring tx_ring; struct _rx_ring rx_ring; } ;
struct sk_buff {int len; } ;
struct rx_desc {int sdp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct sw *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct _rx_ring *VAR_7 = &VAR_5->rx_ring;
  struct rx_desc *VAR_8 = &(VAR_7)->desc[VAR_6];
  void *VAR_9 = VAR_5->rx_ring.buff_tab[VAR_6];

  if (!VAR_9)
   continue;

  FUNC_1(VAR_5->dev, VAR_8->sdp, VAR_3, VAR_0);
  FUNC_2(VAR_9);
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct _tx_ring *VAR_10 = &VAR_5->tx_ring;
  struct tx_desc *VAR_11 = &(VAR_10)->desc[VAR_6];
  struct sk_buff *VAR_12 = VAR_5->tx_ring.buff_tab[VAR_6];

  if (!VAR_12)
   continue;

  FUNC_1(VAR_5->dev, VAR_11->sdp, VAR_12->len, VAR_1);
  FUNC_0(VAR_12);
 }
}
