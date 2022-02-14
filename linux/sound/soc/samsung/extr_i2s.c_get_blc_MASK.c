
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2s_dai {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct i2s_dai *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->priv->addr + VAR_0);

 VAR_2 = (VAR_2 >> 13) & 0x3;

 switch (VAR_2) {
 case 2: return 24;
 case 1: return 8;
 default: return 16;
 }
}
