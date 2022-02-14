
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int protocol; int ip_summed; struct net_device* dev; } ;
struct net_device_stats {unsigned int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {int features; int dev; struct net_device_stats stats; } ;
struct napi_struct {int dummy; } ;
struct fe_soc_data {int checksum_bit; } ;
struct fe_rx_ring {int rx_calc_idx; int rx_buf_size; int ** rx_data; int frag_size; int frag_cache; struct fe_rx_dma* rx_dma; } ;
struct fe_rx_dma {int rxd2; unsigned int rxd1; int rxd4; int rxd3; } ;
struct fe_priv {int flags; struct fe_rx_ring rx_ring; struct fe_soc_data* soc; struct net_device* netdev; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 unsigned int FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int *,int *,int ,int ) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,unsigned int,int ,int ) ;
 int FUNC_10 (struct sk_buff*,struct net_device*) ;
 int FUNC_11 (struct fe_rx_dma*,struct fe_rx_dma*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct fe_priv*,struct sk_buff*,int) ;
 int FUNC_15 (struct napi_struct*,struct sk_buff*) ;
 int * FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sk_buff*,unsigned int) ;
 int FUNC_20 (struct sk_buff*,int) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 () ;

__attribute__((used)) static int FUNC_23(struct napi_struct *VAR_14, int VAR_15,
        struct fe_priv *VAR_16, u32 VAR_17)
{
 struct net_device *VAR_18 = VAR_16->netdev;
 struct net_device_stats *VAR_19 = &VAR_18->stats;
 struct fe_soc_data *VAR_20 = VAR_16->soc;
 struct fe_rx_ring *VAR_21 = &VAR_16->rx_ring;
 int VAR_22 = VAR_21->rx_calc_idx;
 u32 VAR_23;
 struct sk_buff *VAR_24;
 u8 *VAR_25, *VAR_26;
 struct fe_rx_dma *VAR_27, VAR_28;
 int VAR_29 = 0, VAR_30;

 if (VAR_18->features & VAR_9)
  VAR_23 = VAR_20->checksum_bit;
 else
  VAR_23 = 0;

 if (VAR_16->flags & VAR_3)
  VAR_30 = 0;
 else
  VAR_30 = VAR_10;

 while (VAR_29 < VAR_15) {
  unsigned int VAR_31;
  dma_addr_t VAR_32;

  VAR_22 = FUNC_0(VAR_22);
  VAR_27 = &VAR_21->rx_dma[VAR_22];
  VAR_25 = VAR_21->rx_data[VAR_22];

  FUNC_11(&VAR_28, VAR_27);
  if (!(VAR_28.rxd2 & VAR_12))
   break;


  VAR_26 = FUNC_16(&VAR_21->frag_cache, VAR_21->frag_size,
        VAR_7);
  if (FUNC_21(!VAR_26)) {
   VAR_19->rx_dropped++;
   goto release_desc;
  }
  VAR_32 = FUNC_7(&VAR_18->dev,
       VAR_26 + VAR_11 + VAR_30,
       VAR_21->rx_buf_size,
       VAR_1);
  if (FUNC_21(FUNC_8(&VAR_18->dev, VAR_32))) {
   FUNC_18(VAR_26);
   goto release_desc;
  }


  VAR_24 = FUNC_5(VAR_25, VAR_21->frag_size);
  if (FUNC_21(!VAR_24)) {
   FUNC_18(VAR_26);
   goto release_desc;
  }
  FUNC_20(VAR_24, VAR_11 + VAR_10);

  FUNC_9(&VAR_18->dev, VAR_28.rxd1,
     VAR_21->rx_buf_size, VAR_1);
  VAR_31 = FUNC_1(VAR_28.rxd2);
  VAR_24->dev = VAR_18;
  FUNC_19(VAR_24, VAR_31);
  if (VAR_28.rxd4 & VAR_23)
   VAR_24->ip_summed = VAR_0;
  else
   FUNC_17(VAR_24);
  VAR_24->protocol = FUNC_10(VAR_24, VAR_18);

  if (VAR_18->features & VAR_8 &&
      FUNC_3(VAR_28.rxd3))
   FUNC_4(VAR_24, FUNC_13(VAR_2),
            FUNC_3(VAR_28.rxd3));




   VAR_19->rx_packets++;
   VAR_19->rx_bytes += VAR_31;

   FUNC_15(VAR_14, VAR_24);





  VAR_21->rx_data[VAR_22] = VAR_26;
  VAR_27->rxd1 = (unsigned int)VAR_32;

release_desc:
  if (VAR_16->flags & VAR_4)
   VAR_27->rxd2 = FUNC_2(VAR_21->rx_buf_size);
  else
   VAR_27->rxd2 = VAR_13;

  VAR_21->rx_calc_idx = VAR_22;



  FUNC_22();
  FUNC_12(VAR_21->rx_calc_idx, VAR_6);
  VAR_29++;
 }

 if (VAR_29 < VAR_15)
  FUNC_12(VAR_17, VAR_5);

 return VAR_29;
}
