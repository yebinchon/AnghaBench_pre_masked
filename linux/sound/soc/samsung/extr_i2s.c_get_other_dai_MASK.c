
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_dai {struct i2s_dai* sec_dai; scalar_t__ pri_dai; } ;



__attribute__((used)) static inline struct i2s_dai *FUNC_0(struct i2s_dai *VAR_0)
{
 return VAR_0->pri_dai ? : VAR_0->sec_dai;
}
