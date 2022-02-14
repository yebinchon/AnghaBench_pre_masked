
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak5558_priv {int reset_gpiod; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct ak5558_priv *VAR_0)
{
 if (!VAR_0->reset_gpiod)
  return;

 FUNC_0(VAR_0->reset_gpiod, 1);
 FUNC_1(1000, 2000);
}
