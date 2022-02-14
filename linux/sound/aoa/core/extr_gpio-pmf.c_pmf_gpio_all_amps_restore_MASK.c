
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_runtime {int implementation_private; } ;


 int FUNC_0 (struct gpio_runtime*,int) ;
 int FUNC_1 (struct gpio_runtime*,int) ;
 int FUNC_2 (struct gpio_runtime*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct gpio_runtime *VAR_0)
{
 int VAR_1;

 if (FUNC_3(!VAR_0)) return;
 VAR_1 = VAR_0->implementation_private;
 FUNC_1(VAR_0, (VAR_1>>0)&1);
 FUNC_0(VAR_0, (VAR_1>>1)&1);
 FUNC_2(VAR_0, (VAR_1>>2)&1);
}
