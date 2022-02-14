
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {scalar_t__ gpiod_nreset; scalar_t__ gpiod_power_down; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sta350_priv *VAR_0)
{
 if (VAR_0->gpiod_power_down)
  FUNC_0(VAR_0->gpiod_power_down, 1);

 if (VAR_0->gpiod_nreset) {
  FUNC_0(VAR_0->gpiod_nreset, 0);
  FUNC_1(1);
  FUNC_0(VAR_0->gpiod_nreset, 1);
  FUNC_1(1);
 }

 return 0;
}
