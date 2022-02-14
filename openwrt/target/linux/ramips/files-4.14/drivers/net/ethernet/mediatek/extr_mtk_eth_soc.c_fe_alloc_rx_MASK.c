
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev; } ;
struct fe_rx_ring {int rx_ring_size; int rx_phys; int rx_calc_idx; TYPE_1__* rx_dma; int rx_buf_size; scalar_t__* rx_data; int frag_size; int frag_cache; } ;
struct fe_priv {int flags; struct fe_rx_ring rx_ring; struct net_device* netdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {unsigned int rxd1; int rxd2; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int VAR_14 ;
 TYPE_1__* FUNC_1 (int *,int,int*,int) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int,int ) ;
 scalar_t__* FUNC_5 (int,int,int ) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct fe_priv *VAR_15)
{
 struct net_device *VAR_16 = VAR_15->netdev;
 struct fe_rx_ring *VAR_17 = &VAR_15->rx_ring;
 int VAR_18, VAR_19;

 VAR_17->rx_data = FUNC_5(VAR_17->rx_ring_size, sizeof(*VAR_17->rx_data),
   VAR_10);
 if (!VAR_17->rx_data)
  goto no_rx_mem;

 for (VAR_18 = 0; VAR_18 < VAR_17->rx_ring_size; VAR_18++) {
  VAR_17->rx_data[VAR_18] = FUNC_6(&VAR_17->frag_cache,
         VAR_17->frag_size,
         VAR_10);
  if (!VAR_17->rx_data[VAR_18])
   goto no_rx_mem;
 }

 VAR_17->rx_dma = FUNC_1(&VAR_16->dev,
   VAR_17->rx_ring_size * sizeof(*VAR_17->rx_dma),
   &VAR_17->rx_phys,
   VAR_9 | VAR_14);
 if (!VAR_17->rx_dma)
  goto no_rx_mem;

 if (VAR_15->flags & VAR_2)
  VAR_19 = 0;
 else
  VAR_19 = VAR_11;
 for (VAR_18 = 0; VAR_18 < VAR_17->rx_ring_size; VAR_18++) {
  dma_addr_t VAR_20 = FUNC_2(&VAR_16->dev,
    VAR_17->rx_data[VAR_18] + VAR_12 + VAR_19,
    VAR_17->rx_buf_size,
    VAR_0);
  if (FUNC_7(FUNC_3(&VAR_16->dev, VAR_20)))
   goto no_rx_mem;
  VAR_17->rx_dma[VAR_18].rxd1 = (unsigned int)VAR_20;

  if (VAR_15->flags & VAR_3)
   VAR_17->rx_dma[VAR_18].rxd2 = FUNC_0(VAR_17->rx_buf_size);
  else
   VAR_17->rx_dma[VAR_18].rxd2 = VAR_13;
 }
 VAR_17->rx_calc_idx = VAR_17->rx_ring_size - 1;



 FUNC_8();

 FUNC_4(VAR_17->rx_phys, VAR_6);
 FUNC_4(VAR_17->rx_ring_size, VAR_8);
 FUNC_4(VAR_17->rx_calc_idx, VAR_7);
 FUNC_4(VAR_4, VAR_5);

 return 0;

no_rx_mem:
 return -VAR_1;
}
