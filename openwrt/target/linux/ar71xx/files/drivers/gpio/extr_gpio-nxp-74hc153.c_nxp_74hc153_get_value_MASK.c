
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nxp_74hc153_platform_data {unsigned int gpio_pin_2y; unsigned int gpio_pin_1y; int gpio_pin_s1; int gpio_pin_s0; } ;
struct nxp_74hc153_chip {int lock; TYPE_1__* parent; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {struct nxp_74hc153_platform_data* platform_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 struct nxp_74hc153_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct nxp_74hc153_chip *VAR_5;
 struct nxp_74hc153_platform_data *VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 unsigned VAR_9;
 int VAR_10;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = VAR_5->parent->platform_data;

 VAR_7 = !!(VAR_4 & VAR_1);
 VAR_8 = !!(VAR_4 & VAR_2);
 VAR_9 = (VAR_4 & VAR_0) ? VAR_6->gpio_pin_2y
            : VAR_6->gpio_pin_1y;

 FUNC_3(&VAR_5->lock);
 FUNC_1(VAR_6->gpio_pin_s0, VAR_7);
 FUNC_1(VAR_6->gpio_pin_s1, VAR_8);
 VAR_10 = FUNC_0(VAR_9);
 FUNC_4(&VAR_5->lock);

 return VAR_10;
}
