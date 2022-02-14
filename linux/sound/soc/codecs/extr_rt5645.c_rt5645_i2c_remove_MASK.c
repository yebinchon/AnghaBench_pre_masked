
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5645_priv {int supplies; int btn_check_timer; int rcclock_work; int jack_detect_work; } ;
struct i2c_client {scalar_t__ irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct rt5645_priv*) ;
 struct rt5645_priv* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct rt5645_priv *VAR_1 = FUNC_4(VAR_0);

 if (VAR_0->irq)
  FUNC_3(VAR_0->irq, VAR_1);

 FUNC_1(&VAR_1->jack_detect_work);
 FUNC_1(&VAR_1->rcclock_work);
 FUNC_2(&VAR_1->btn_check_timer);

 FUNC_5(FUNC_0(VAR_1->supplies), VAR_1->supplies);

 return 0;
}
