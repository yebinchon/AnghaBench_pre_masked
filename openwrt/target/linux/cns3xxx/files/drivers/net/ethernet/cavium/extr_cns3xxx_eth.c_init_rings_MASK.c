
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int eor; int fsd; int lsd; int cown; int sdp; int sdl; } ;
struct _tx_ring {int phys_addr; scalar_t__* buff_tab; struct tx_desc* desc; } ;
struct _rx_ring {int phys_addr; int * phys_tab; void** buff_tab; struct tx_desc* desc; } ;
struct sw {TYPE_1__* regs; int dev; struct _tx_ring tx_ring; struct _rx_ring rx_ring; } ;
struct rx_desc {int eor; int fsd; int lsd; int cown; int sdp; int sdl; } ;
struct TYPE_2__ {int ts_desc_base_addr0; int ts_desc_ptr0; int fs_desc_base_addr0; int fs_desc_ptr0; int dma_ring_ctrl; int dma_auto_poll_cfg; int fs_dma_ctrl0; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (struct tx_desc*,int ,int ) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sw *VAR_15)
{
 int VAR_16;
 struct _rx_ring *VAR_17 = &VAR_15->rx_ring;
 struct _tx_ring *VAR_18 = &VAR_15->tx_ring;

 FUNC_0(0, &VAR_15->regs->fs_dma_ctrl0);
 FUNC_0(VAR_12 | VAR_4, &VAR_15->regs->dma_auto_poll_cfg);
 FUNC_0(VAR_6, &VAR_15->regs->dma_ring_ctrl);
 FUNC_0(VAR_0 | VAR_6, &VAR_15->regs->dma_ring_ctrl);
 FUNC_0(VAR_6, &VAR_15->regs->dma_ring_ctrl);

 VAR_17->desc = FUNC_3(VAR_15->dev, VAR_8,
         &VAR_17->phys_addr, VAR_5);
 if (!VAR_17->desc)
  return -VAR_3;


 FUNC_4(VAR_17->desc, 0, VAR_8);

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  struct rx_desc *VAR_19 = &(VAR_17)->desc[VAR_16];
  void *VAR_20;

  VAR_20 = FUNC_5(VAR_9);
  if (!VAR_20)
   return -VAR_3;

  VAR_19->sdl = VAR_10;

  if (VAR_16 == (VAR_7 - 1))
   VAR_19->eor = 1;

  VAR_19->fsd = 1;
  VAR_19->lsd = 1;

  VAR_19->sdp = FUNC_1(VAR_15->dev, VAR_20 + VAR_11,
        VAR_10, VAR_1);

  if (FUNC_2(VAR_15->dev, VAR_19->sdp))
   return -VAR_2;

  VAR_17->buff_tab[VAR_16] = VAR_20;
  VAR_17->phys_tab[VAR_16] = VAR_19->sdp;
  VAR_19->cown = 0;
 }
 FUNC_0(VAR_17->phys_addr, &VAR_15->regs->fs_desc_ptr0);
 FUNC_0(VAR_17->phys_addr, &VAR_15->regs->fs_desc_base_addr0);

 VAR_18->desc = FUNC_3(VAR_15->dev, VAR_14,
         &VAR_18->phys_addr, VAR_5);
 if (!VAR_18->desc)
  return -VAR_3;


 FUNC_4(VAR_18->desc, 0, VAR_14);

 for (VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) {
  struct tx_desc *VAR_21 = &(VAR_18)->desc[VAR_16];
  VAR_18->buff_tab[VAR_16] = 0;

  if (VAR_16 == (VAR_13 - 1))
   VAR_21->eor = 1;

  VAR_21->cown = 1;
 }
 FUNC_0(VAR_18->phys_addr, &VAR_15->regs->ts_desc_ptr0);
 FUNC_0(VAR_18->phys_addr, &VAR_15->regs->ts_desc_base_addr0);

 return 0;
}
