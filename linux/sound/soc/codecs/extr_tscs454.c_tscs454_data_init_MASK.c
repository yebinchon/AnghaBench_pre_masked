
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {int sub_ram; int spk_ram; int dac_ram; int pll2; int pll1; int aifs_status_lock; int * aifs; int regmap; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_7(struct tscs454 *VAR_2,
  struct i2c_client *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_2->regmap = FUNC_4(VAR_3, &VAR_1);
 if (FUNC_0(VAR_2->regmap)) {
  VAR_5 = FUNC_1(VAR_2->regmap);
  return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(&VAR_2->aifs[VAR_4], VAR_4);

 FUNC_5(&VAR_2->aifs_status_lock);
 FUNC_6(&VAR_2->pll1, 1);
 FUNC_6(&VAR_2->pll2, 2);

 FUNC_3(&VAR_2->dac_ram);
 FUNC_3(&VAR_2->spk_ram);
 FUNC_3(&VAR_2->sub_ram);

 return 0;
}
