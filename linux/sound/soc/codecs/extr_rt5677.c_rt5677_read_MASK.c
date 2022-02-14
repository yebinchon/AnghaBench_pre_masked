
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5677_priv {int regmap_physical; int dsp_pri_lock; scalar_t__ is_dsp_mode; } ;
struct i2c_client {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct rt5677_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int,unsigned int*) ;
 int FUNC_4 (struct rt5677_priv*,unsigned int,unsigned int*) ;
 int FUNC_5 (struct rt5677_priv*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(void *VAR_2, unsigned int VAR_3, unsigned int *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2;
 struct rt5677_priv *VAR_6 = FUNC_0(VAR_5);

 if (VAR_6->is_dsp_mode) {
  if (VAR_3 > 0xff) {
   FUNC_1(&VAR_6->dsp_pri_lock);
   FUNC_5(VAR_6, VAR_1,
    VAR_3 & 0xff);
   FUNC_4(VAR_6, VAR_0, VAR_4);
   FUNC_2(&VAR_6->dsp_pri_lock);
  } else {
   FUNC_4(VAR_6, VAR_3, VAR_4);
  }
 } else {
  FUNC_3(VAR_6->regmap_physical, VAR_3, VAR_4);
 }

 return 0;
}
