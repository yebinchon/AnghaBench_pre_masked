
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct samsung_i2s_priv {int quirks; int lock; scalar_t__ addr; } ;
struct i2s_dai {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2s_dai*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct samsung_i2s_priv* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct i2s_dai* FUNC_6 (struct snd_soc_dai*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_2)
{
 struct samsung_i2s_priv *VAR_3 = FUNC_3(VAR_2);
 struct i2s_dai *VAR_4 = FUNC_6(VAR_2);
 unsigned long VAR_5;

 FUNC_1(VAR_2->dev);

 if (!FUNC_0(VAR_4)) {
  if (VAR_3->quirks & VAR_1) {
   FUNC_4(&VAR_3->lock, VAR_5);
   FUNC_7(0, VAR_3->addr + VAR_0);
   FUNC_5(&VAR_3->lock, VAR_5);
  }
 }

 FUNC_2(VAR_2->dev);

 return 0;
}
