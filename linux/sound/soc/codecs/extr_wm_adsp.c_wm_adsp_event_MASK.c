
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm_adsp {size_t fw; int running; int fatal_error; int pwr_lock; TYPE_1__* ops; int lock_regions; int booted; int boot_work; } ;
struct snd_soc_dapm_widget {size_t shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int num_caps; } ;
struct TYPE_3__ {int (* enable_core ) (struct wm_adsp*) ;int (* lock_memory ) (struct wm_adsp*,int ) ;int (* start_core ) (struct wm_adsp*) ;int (* disable_core ) (struct wm_adsp*) ;int (* stop_core ) (struct wm_adsp*) ;int (* show_fw_status ) (struct wm_adsp*) ;int (* stop_watchdog ) (struct wm_adsp*) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct wm_adsp*,char*) ;
 int FUNC_1 (struct wm_adsp*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct wm_adsp* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (struct wm_adsp*) ;
 int FUNC_8 (struct wm_adsp*,int ) ;
 int FUNC_9 (struct wm_adsp*) ;
 int FUNC_10 (struct wm_adsp*) ;
 int FUNC_11 (struct wm_adsp*) ;
 int FUNC_12 (struct wm_adsp*) ;
 int FUNC_13 (struct wm_adsp*) ;
 int FUNC_14 (struct wm_adsp*) ;
 int FUNC_15 (struct wm_adsp*) ;
 int FUNC_16 (struct wm_adsp*) ;
 int FUNC_17 (struct wm_adsp*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_18 (struct wm_adsp*,int ) ;
 int FUNC_19 (struct wm_adsp*) ;

int FUNC_20(struct snd_soc_dapm_widget *VAR_3,
    struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = FUNC_6(VAR_3->dapm);
 struct wm_adsp *VAR_7 = FUNC_5(VAR_6);
 struct wm_adsp *VAR_8 = &VAR_7[VAR_3->shift];
 int VAR_9;

 switch (VAR_5) {
 case 129:
  FUNC_2(&VAR_8->boot_work);

  FUNC_3(&VAR_8->pwr_lock);

  if (!VAR_8->booted) {
   VAR_9 = -VAR_0;
   goto err;
  }

  if (VAR_8->ops->enable_core) {
   VAR_9 = VAR_8->ops->enable_core(VAR_8);
   if (VAR_9 != 0)
    goto err;
  }


  VAR_9 = FUNC_19(VAR_8);
  if (VAR_9 != 0)
   goto err;

  if (VAR_8->ops->lock_memory) {
   VAR_9 = VAR_8->ops->lock_memory(VAR_8, VAR_8->lock_regions);
   if (VAR_9 != 0) {
    FUNC_1(VAR_8, "Error configuring MPU: %d\n",
      VAR_9);
    goto err;
   }
  }

  if (VAR_8->ops->start_core) {
   VAR_9 = VAR_8->ops->start_core(VAR_8);
   if (VAR_9 != 0)
    goto err;
  }

  if (VAR_2[VAR_8->fw].num_caps != 0) {
   VAR_9 = FUNC_17(VAR_8);
   if (VAR_9 < 0)
    goto err;
  }

  VAR_8->running = 1;

  FUNC_4(&VAR_8->pwr_lock);
  break;

 case 128:

  FUNC_18(VAR_8, VAR_1);

  if (VAR_8->ops->stop_watchdog)
   VAR_8->ops->stop_watchdog(VAR_8);


  if (VAR_8->ops->show_fw_status)
   VAR_8->ops->show_fw_status(VAR_8);

  FUNC_3(&VAR_8->pwr_lock);

  VAR_8->running = 0;

  if (VAR_8->ops->stop_core)
   VAR_8->ops->stop_core(VAR_8);
  if (VAR_8->ops->disable_core)
   VAR_8->ops->disable_core(VAR_8);

  if (VAR_2[VAR_8->fw].num_caps != 0)
   FUNC_16(VAR_8);

  VAR_8->fatal_error = 0;

  FUNC_4(&VAR_8->pwr_lock);

  FUNC_0(VAR_8, "Execution stopped\n");
  break;

 default:
  break;
 }

 return 0;
err:
 if (VAR_8->ops->stop_core)
  VAR_8->ops->stop_core(VAR_8);
 if (VAR_8->ops->disable_core)
  VAR_8->ops->disable_core(VAR_8);
 FUNC_4(&VAR_8->pwr_lock);
 return VAR_9;
}
