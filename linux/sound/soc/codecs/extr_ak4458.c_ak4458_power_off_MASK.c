
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4458_priv {scalar_t__ reset_gpiod; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct ak4458_priv *VAR_0)
{
 if (VAR_0->reset_gpiod) {
  FUNC_0(VAR_0->reset_gpiod, 0);
  FUNC_1(1000, 2000);
 }
}
