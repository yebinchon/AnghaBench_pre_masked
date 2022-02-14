
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int num_chipselect; int transfer; int setup; int mode_bits; scalar_t__ bus_num; } ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct rb4xx_spi {int cs_wait; int ahb_clk; int base; int queue; int lock; void* spi_ctrl_fread; void* spi_ctrl_flash; struct spi_master* master; int ahb_freq; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*) ;
 void* FUNC_9 (struct rb4xx_spi*,int ,char*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct rb4xx_spi*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct spi_master* FUNC_14 (int *,int) ;
 struct rb4xx_spi* FUNC_15 (struct spi_master*) ;
 int FUNC_16 (struct spi_master*) ;
 int FUNC_17 (struct spi_master*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct spi_master *VAR_11;
 struct rb4xx_spi *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_14(&VAR_10->dev, sizeof(*VAR_12));
 if (VAR_11 == ((void*)0)) {
  FUNC_8(&VAR_10->dev, "no memory for spi_master\n");
  VAR_14 = -VAR_2;
  goto err_out;
 }

 VAR_11->bus_num = 0;
 VAR_11->num_chipselect = 3;
 VAR_11->mode_bits = VAR_7;
 VAR_11->setup = VAR_8;
 VAR_11->transfer = VAR_9;

 VAR_12 = FUNC_15(VAR_11);

 VAR_12->ahb_clk = FUNC_4(&VAR_10->dev, "ahb");
 if (FUNC_1(VAR_12->ahb_clk)) {
  VAR_14 = FUNC_2(VAR_12->ahb_clk);
  goto err_put_master;
 }

 VAR_14 = FUNC_6(VAR_12->ahb_clk);
 if (VAR_14)
  goto err_clk_put;

 VAR_12->ahb_freq = FUNC_5(VAR_12->ahb_clk);
 if (!VAR_12->ahb_freq) {
  VAR_14 = -VAR_0;
  goto err_clk_disable;
 }

 FUNC_13(VAR_10, VAR_12);

 VAR_13 = FUNC_12(VAR_10, VAR_4, 0);
 if (VAR_13 == ((void*)0)) {
  VAR_14 = -VAR_1;
  goto err_clk_disable;
 }

 VAR_12->base = FUNC_10(VAR_13->start, VAR_13->end - VAR_13->start + 1);
 if (!VAR_12->base) {
  VAR_14 = -VAR_3;
  goto err_clk_disable;
 }

 VAR_12->master = VAR_11;
 VAR_12->spi_ctrl_flash = FUNC_9(VAR_12, VAR_6, "FLASH");
 VAR_12->spi_ctrl_fread = FUNC_9(VAR_12, VAR_5, "CPLD");
 VAR_12->cs_wait = -1;

 FUNC_18(&VAR_12->lock);
 FUNC_0(&VAR_12->queue);

 VAR_14 = FUNC_17(VAR_11);
 if (VAR_14) {
  FUNC_8(&VAR_10->dev, "failed to register SPI master\n");
  goto err_iounmap;
 }

 return 0;

err_iounmap:
 FUNC_11(VAR_12->base);
err_clk_disable:
 FUNC_3(VAR_12->ahb_clk);
err_clk_put:
 FUNC_7(VAR_12->ahb_clk);
err_put_master:
 FUNC_13(VAR_10, ((void*)0));
 FUNC_16(VAR_11);
err_out:
 return VAR_14;
}
