
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_i2s_priv {scalar_t__ addr; TYPE_1__* variant_regs; } ;
struct i2s_dai {struct samsung_i2s_priv* priv; } ;
struct TYPE_2__ {int rfs_off; int rfs_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct i2s_dai *VAR_9, unsigned VAR_10)
{
 struct samsung_i2s_priv *VAR_11 = VAR_9->priv;
 u32 VAR_12 = FUNC_0(VAR_11->addr + VAR_4);
 int VAR_13 = VAR_11->variant_regs->rfs_off;

 VAR_12 &= ~(VAR_11->variant_regs->rfs_mask << VAR_13);

 switch (VAR_10) {
 case 192:
  VAR_12 |= (VAR_1 << VAR_13);
  break;
 case 96:
  VAR_12 |= (VAR_3 << VAR_13);
  break;
 case 128:
  VAR_12 |= (VAR_0 << VAR_13);
  break;
 case 64:
  VAR_12 |= (VAR_2 << VAR_13);
  break;
 case 768:
  VAR_12 |= (VAR_8 << VAR_13);
  break;
 case 512:
  VAR_12 |= (VAR_7 << VAR_13);
  break;
 case 384:
  VAR_12 |= (VAR_6 << VAR_13);
  break;
 default:
  VAR_12 |= (VAR_5 << VAR_13);
  break;
 }

 FUNC_1(VAR_12, VAR_11->addr + VAR_4);
}
