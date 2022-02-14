
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int t ;
struct wm0010_priv {scalar_t__ state; int sysclk; int pll_running; int core_supplies; int lock; int irq_lock; int pll_clkctrl1; scalar_t__ max_spi_freq; int boot_completion; int gpio_reset_value; int gpio_reset; int dbvdd; int dev; } ;
struct spi_transfer {int length; int len; int bits_per_word; int speed_hz; int * tx_buf; int * rx_buf; int clkctrl1; int command; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dev; } ;
struct snd_soc_component {int * dev; } ;
struct dfw_pllrec {int length; int len; int bits_per_word; int speed_hz; int * tx_buf; int * rx_buf; int clkctrl1; int command; } ;
typedef int pll_rec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,int) ;
 int FUNC_8 (struct spi_transfer*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 struct wm0010_priv* FUNC_15 (struct snd_soc_component*) ;
 int FUNC_16 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_17 (struct spi_message*) ;
 int FUNC_18 (struct spi_device*,struct spi_message*) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 struct spi_device* FUNC_21 (int *) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (char*,struct snd_soc_component*) ;
 int FUNC_24 (struct snd_soc_component*) ;
 int FUNC_25 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_26(struct snd_soc_component *VAR_10)
{
 struct spi_device *VAR_11 = FUNC_21(VAR_10->dev);
 struct wm0010_priv *VAR_12 = FUNC_15(VAR_10);
 unsigned long VAR_13;
 int VAR_14;
 struct spi_message VAR_15;
 struct spi_transfer VAR_16;
 struct dfw_pllrec VAR_17;
 u32 *VAR_18, VAR_19;
 u64 *VAR_20;
 u8 *VAR_21;
 int VAR_22;

 FUNC_19(&VAR_12->irq_lock, VAR_13);
 if (VAR_12->state != VAR_8)
  FUNC_4(VAR_12->dev, "DSP already powered up!\n");
 FUNC_20(&VAR_12->irq_lock, VAR_13);

 if (VAR_12->sysclk > 26000000) {
  FUNC_3(VAR_10->dev, "Max DSP clock frequency is 26MHz\n");
  VAR_14 = -VAR_1;
  goto err;
 }

 FUNC_10(&VAR_12->lock);
 VAR_12->pll_running = 0;

 FUNC_2(VAR_10->dev, "max_spi_freq: %d\n", VAR_12->max_spi_freq);

 VAR_14 = FUNC_13(FUNC_0(VAR_12->core_supplies),
        VAR_12->core_supplies);
 if (VAR_14 != 0) {
  FUNC_3(&VAR_11->dev, "Failed to enable core supplies: %d\n",
   VAR_14);
  FUNC_11(&VAR_12->lock);
  goto err;
 }

 VAR_14 = FUNC_14(VAR_12->dbvdd);
 if (VAR_14 != 0) {
  FUNC_3(&VAR_11->dev, "Failed to enable DBVDD: %d\n", VAR_14);
  goto err_core;
 }


 FUNC_5(VAR_12->gpio_reset, !VAR_12->gpio_reset_value);
 FUNC_19(&VAR_12->irq_lock, VAR_13);
 VAR_12->state = VAR_7;
 FUNC_20(&VAR_12->irq_lock, VAR_13);

 if (!FUNC_22(&VAR_12->boot_completion,
      FUNC_9(20)))
  FUNC_3(VAR_10->dev, "Failed to get interrupt from DSP\n");

 FUNC_19(&VAR_12->irq_lock, VAR_13);
 VAR_12->state = VAR_5;
 FUNC_20(&VAR_12->irq_lock, VAR_13);

 VAR_14 = FUNC_25(VAR_10);
 if (VAR_14)
  goto abort;

 if (!FUNC_22(&VAR_12->boot_completion,
      FUNC_9(20)))
  FUNC_3(VAR_10->dev, "Failed to get interrupt from DSP loader.\n");

 FUNC_19(&VAR_12->irq_lock, VAR_13);
 VAR_12->state = VAR_9;
 FUNC_20(&VAR_12->irq_lock, VAR_13);


 if (VAR_12->max_spi_freq) {


  FUNC_8(&VAR_17, 0, sizeof(VAR_17));
  VAR_17.command = VAR_0;
  VAR_17.length = (sizeof(VAR_17) - 8);


  VAR_17.clkctrl1 = VAR_12->pll_clkctrl1;

  VAR_14 = -VAR_2;
  VAR_19 = VAR_17.length + 8;
  VAR_21 = FUNC_7(VAR_19, VAR_4 | VAR_3);
  if (!VAR_21)
   goto abort;

  VAR_20 = FUNC_7(VAR_19, VAR_4 | VAR_3);
  if (!VAR_20)
   goto abort_out;


  FUNC_1((u64 *)&VAR_17, VAR_20, VAR_19);

  FUNC_17(&VAR_15);
  FUNC_8(&VAR_16, 0, sizeof(VAR_16));
  VAR_16.rx_buf = VAR_21;
  VAR_16.tx_buf = VAR_20;
  VAR_16.len = VAR_19;
  VAR_16.bits_per_word = 8;
  VAR_16.speed_hz = VAR_12->sysclk / 6;
  FUNC_16(&VAR_16, &VAR_15);

  VAR_14 = FUNC_18(VAR_11, &VAR_15);
  if (VAR_14) {
   FUNC_3(VAR_10->dev, "First PLL write failed: %d\n", VAR_14);
   goto abort_swap;
  }


  VAR_14 = FUNC_18(VAR_11, &VAR_15);
  if (VAR_14) {
   FUNC_3(VAR_10->dev, "Second PLL write failed: %d\n", VAR_14);
   goto abort_swap;
  }

  VAR_18 = (u32 *)VAR_21;


  for (VAR_22 = 0; VAR_22 < VAR_19 / 4; VAR_22++) {
   if (*VAR_18 == 0x0e00ed0f) {
    FUNC_2(VAR_10->dev, "PLL packet received\n");
    VAR_12->pll_running = 1;
    break;
   }
   VAR_18++;
  }

  FUNC_6(VAR_20);
  FUNC_6(VAR_21);
 } else
  FUNC_2(VAR_10->dev, "Not enabling DSP PLL.");

 VAR_14 = FUNC_23("wm0010.dfw", VAR_10);

 if (VAR_14 != 0)
  goto abort;

 FUNC_19(&VAR_12->irq_lock, VAR_13);
 VAR_12->state = VAR_6;
 FUNC_20(&VAR_12->irq_lock, VAR_13);

 FUNC_11(&VAR_12->lock);

 return 0;

abort_swap:
 FUNC_6(VAR_20);
abort_out:
 FUNC_6(VAR_21);
abort:

 FUNC_24(VAR_10);
 FUNC_11(&VAR_12->lock);
 return VAR_14;

err_core:
 FUNC_11(&VAR_12->lock);
 FUNC_12(FUNC_0(VAR_12->core_supplies),
          VAR_12->core_supplies);
err:
 return VAR_14;
}
