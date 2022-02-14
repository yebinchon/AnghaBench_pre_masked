
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm0010_priv {scalar_t__ irq; int gpio_reset_value; int gpio_reset; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (scalar_t__,struct wm0010_priv*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct wm0010_priv* FUNC_3 (struct spi_device*) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_0)
{
 struct wm0010_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->gpio_reset,
    VAR_1->gpio_reset_value);

 FUNC_2(VAR_1->irq, 0);

 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);

 return 0;
}
