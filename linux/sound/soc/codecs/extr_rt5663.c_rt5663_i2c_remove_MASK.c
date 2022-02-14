
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5663_priv {int supplies; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct rt5663_priv*) ;
 struct rt5663_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct rt5663_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq, VAR_1);

 FUNC_3(FUNC_0(VAR_1->supplies), VAR_1->supplies);

 return 0;
}
