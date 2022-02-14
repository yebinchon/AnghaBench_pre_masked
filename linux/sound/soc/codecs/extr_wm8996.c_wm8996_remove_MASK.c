
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct i2c_client* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_2->dev);

 FUNC_1(VAR_2, VAR_1,
       VAR_0, VAR_0);

 if (VAR_3->irq)
  FUNC_0(VAR_3->irq, VAR_2);
}
