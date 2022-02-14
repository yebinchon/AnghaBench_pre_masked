
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2s_dai {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct i2s_dai *VAR_2)
{
 u32 VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_2->priv->addr + VAR_1) & VAR_0;

 return VAR_3 ? 1 : 0;
}
