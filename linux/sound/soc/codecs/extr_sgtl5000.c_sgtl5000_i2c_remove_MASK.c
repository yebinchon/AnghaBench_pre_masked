
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgtl5000_priv {int supplies; int num_supplies; int mclk; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sgtl5000_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct sgtl5000_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->mclk);
 FUNC_2(VAR_1->num_supplies, VAR_1->supplies);
 FUNC_3(VAR_1->num_supplies, VAR_1->supplies);

 return 0;
}
