
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct samsung_i2s_priv {int quirks; scalar_t__ addr; TYPE_1__* variant_regs; } ;
struct i2s_dai {TYPE_2__* pdev; struct samsung_i2s_priv* priv; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bfs_off; int bfs_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct i2s_dai *VAR_11, unsigned VAR_12)
{
 struct samsung_i2s_priv *VAR_13 = VAR_11->priv;
 u32 VAR_14 = FUNC_1(VAR_13->addr + VAR_5);
 int VAR_15 = VAR_13->quirks & VAR_10;
 int VAR_16 = VAR_13->variant_regs->bfs_off;


 if (!VAR_15 && VAR_12 > 48) {
  FUNC_0(&VAR_11->pdev->dev, "Unsupported BCLK divider\n");
  return;
 }

 VAR_14 &= ~(VAR_13->variant_regs->bfs_mask << VAR_16);

 switch (VAR_12) {
 case 48:
  VAR_14 |= (VAR_9 << VAR_16);
  break;
 case 32:
  VAR_14 |= (VAR_8 << VAR_16);
  break;
 case 24:
  VAR_14 |= (VAR_7 << VAR_16);
  break;
 case 16:
  VAR_14 |= (VAR_6 << VAR_16);
  break;
 case 64:
  VAR_14 |= (VAR_3 << VAR_16);
  break;
 case 96:
  VAR_14 |= (VAR_4 << VAR_16);
  break;
 case 128:
  VAR_14 |= (VAR_0 << VAR_16);
  break;
 case 192:
  VAR_14 |= (VAR_1 << VAR_16);
  break;
 case 256:
  VAR_14 |= (VAR_2 << VAR_16);
  break;
 default:
  FUNC_0(&VAR_11->pdev->dev, "Wrong BCLK Divider!\n");
  return;
 }

 FUNC_2(VAR_14, VAR_13->addr + VAR_5);
}
