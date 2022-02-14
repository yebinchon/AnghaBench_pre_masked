
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct samsung_i2s_priv {TYPE_1__* variant_regs; scalar_t__ addr; } ;
struct i2s_dai {struct samsung_i2s_priv* priv; } ;
struct TYPE_2__ {int bfs_off; int bfs_mask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned FUNC_1(struct i2s_dai *VAR_1)
{
 struct samsung_i2s_priv *VAR_2 = VAR_1->priv;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->addr + VAR_0) >> VAR_2->variant_regs->bfs_off;
 VAR_3 &= VAR_2->variant_regs->bfs_mask;

 switch (VAR_3) {
 case 8: return 256;
 case 7: return 192;
 case 6: return 128;
 case 5: return 96;
 case 4: return 64;
 case 3: return 24;
 case 2: return 16;
 case 1: return 48;
 default: return 32;
 }
}
