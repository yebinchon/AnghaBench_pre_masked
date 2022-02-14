
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2s_dai {TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct i2s_dai*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(struct i2s_dai *VAR_3)
{
 u32 VAR_4;

 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_3->priv->addr + VAR_2);

 if (FUNC_0(VAR_3))
  VAR_4 &= VAR_1;
 else
  VAR_4 &= VAR_0;

 return VAR_4 ? 1 : 0;
}
