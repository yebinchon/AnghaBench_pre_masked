
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm_adsp {int pwr_lock; scalar_t__ base; TYPE_1__* ops; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* stop_watchdog ) (struct wm_adsp*) ;} ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct wm_adsp*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regmap*,scalar_t__,unsigned int*) ;
 int FUNC_4 (struct regmap*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct wm_adsp*) ;
 int FUNC_6 (struct wm_adsp*) ;

irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct wm_adsp *VAR_14 = (struct wm_adsp *)VAR_13;
 unsigned int VAR_15;
 struct regmap *VAR_16 = VAR_14->regmap;
 int VAR_17 = 0;

 FUNC_1(&VAR_14->pwr_lock);

 VAR_17 = FUNC_3(VAR_16, VAR_14->base + VAR_3, &VAR_15);
 if (VAR_17) {
  FUNC_0(VAR_14,
   "Failed to read Region Lock Ctrl register: %d\n", VAR_17);
  goto error;
 }

 if (VAR_15 & VAR_9) {
  FUNC_0(VAR_14, "watchdog timeout error\n");
  VAR_14->ops->stop_watchdog(VAR_14);
  FUNC_6(VAR_14);
 }

 if (VAR_15 & (VAR_8 | VAR_7)) {
  if (VAR_15 & VAR_8)
   FUNC_0(VAR_14, "bus error: slave error\n");
  else
   FUNC_0(VAR_14, "bus error: region lock error\n");

  VAR_17 = FUNC_3(VAR_16, VAR_14->base + VAR_0, &VAR_15);
  if (VAR_17) {
   FUNC_0(VAR_14,
     "Failed to read Bus Err Addr register: %d\n",
     VAR_17);
   goto error;
  }

  FUNC_0(VAR_14, "bus error address = 0x%x\n",
    VAR_15 & VAR_1);

  VAR_17 = FUNC_3(VAR_16,
      VAR_14->base + VAR_6,
      &VAR_15);
  if (VAR_17) {
   FUNC_0(VAR_14,
     "Failed to read Pmem Xmem Err Addr register: %d\n",
     VAR_17);
   goto error;
  }

  FUNC_0(VAR_14, "xmem error address = 0x%x\n",
    VAR_15 & VAR_10);
  FUNC_0(VAR_14, "pmem error address = 0x%x\n",
    (VAR_15 & VAR_4) >>
    VAR_5);
 }

 FUNC_4(VAR_16, VAR_14->base + VAR_3,
      VAR_2, VAR_2);

error:
 FUNC_2(&VAR_14->pwr_lock);

 return VAR_11;
}
