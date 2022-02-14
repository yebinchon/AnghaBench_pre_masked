
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int irq_flags; scalar_t__ reset_active_high; scalar_t__ gpio_reset; } ;
struct wm0010_priv {int gpio_reset_value; int irq; scalar_t__ board_max_spi_speed; int * dev; TYPE_2__ pdata; int state; scalar_t__ gpio_reset; int dbvdd; TYPE_1__* core_supplies; int boot_completion; int irq_lock; int lock; } ;
struct spi_device {int irq; int dev; scalar_t__ max_speed_hz; } ;
struct TYPE_6__ {char* supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,unsigned long,char*) ;
 struct wm0010_priv* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int,int *,int ,int,char*,struct wm0010_priv*) ;
 int VAR_8 ;
 int FUNC_15 (struct spi_device*,struct wm0010_priv*) ;
 int FUNC_16 (int *) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_11)
{
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 struct wm0010_priv *VAR_16;

 VAR_16 = FUNC_6(&VAR_11->dev, sizeof(*VAR_16),
         VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_13(&VAR_16->lock);
 FUNC_16(&VAR_16->irq_lock);

 FUNC_15(VAR_11, VAR_16);
 VAR_16->dev = &VAR_11->dev;

 if (FUNC_4(&VAR_11->dev))
  FUNC_12(&VAR_16->pdata, FUNC_4(&VAR_11->dev),
         sizeof(VAR_16->pdata));

 FUNC_10(&VAR_16->boot_completion);

 VAR_16->core_supplies[0].supply = "AVDD";
 VAR_16->core_supplies[1].supply = "DCVDD";
 VAR_13 = FUNC_7(VAR_16->dev, FUNC_0(VAR_16->core_supplies),
          VAR_16->core_supplies);
 if (VAR_13 != 0) {
  FUNC_3(VAR_16->dev, "Failed to obtain core supplies: %d\n",
   VAR_13);
  return VAR_13;
 }

 VAR_16->dbvdd = FUNC_8(VAR_16->dev, "DBVDD");
 if (FUNC_1(VAR_16->dbvdd)) {
  VAR_13 = FUNC_2(VAR_16->dbvdd);
  FUNC_3(VAR_16->dev, "Failed to obtain DBVDD: %d\n", VAR_13);
  return VAR_13;
 }

 if (VAR_16->pdata.gpio_reset) {
  VAR_16->gpio_reset = VAR_16->pdata.gpio_reset;

  if (VAR_16->pdata.reset_active_high)
   VAR_16->gpio_reset_value = 1;
  else
   VAR_16->gpio_reset_value = 0;

  if (VAR_16->gpio_reset_value)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_4;

  VAR_13 = FUNC_5(VAR_16->dev, VAR_16->gpio_reset,
         VAR_12, "wm0010 reset");
  if (VAR_13 < 0) {
   FUNC_3(VAR_16->dev,
    "Failed to request GPIO for DSP reset: %d\n",
    VAR_13);
   return VAR_13;
  }
 } else {
  FUNC_3(VAR_16->dev, "No reset GPIO configured\n");
  return -VAR_0;
 }

 VAR_16->state = VAR_7;

 VAR_15 = VAR_11->irq;
 if (VAR_16->pdata.irq_flags)
  VAR_14 = VAR_16->pdata.irq_flags;
 else
  VAR_14 = VAR_6;
 VAR_14 |= VAR_5;

 VAR_13 = FUNC_14(VAR_15, ((void*)0), VAR_10, VAR_14,
       "wm0010", VAR_16);
 if (VAR_13) {
  FUNC_3(VAR_16->dev, "Failed to request IRQ %d: %d\n",
   VAR_15, VAR_13);
  return VAR_13;
 }
 VAR_16->irq = VAR_15;

 VAR_13 = FUNC_11(VAR_15, 1);
 if (VAR_13) {
  FUNC_3(VAR_16->dev, "Failed to set IRQ %d as wake source: %d\n",
   VAR_15, VAR_13);
  return VAR_13;
 }

 if (VAR_11->max_speed_hz)
  VAR_16->board_max_spi_speed = VAR_11->max_speed_hz;
 else
  VAR_16->board_max_spi_speed = 0;

 VAR_13 = FUNC_9(&VAR_11->dev,
         &VAR_8, VAR_9,
         FUNC_0(VAR_9));
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
