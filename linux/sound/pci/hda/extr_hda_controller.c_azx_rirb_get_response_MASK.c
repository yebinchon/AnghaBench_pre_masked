
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* res; int * cmds; } ;
struct hdac_bus {int polling_mode; int poll_count; int * last_cmd; int reg_lock; TYPE_1__ rirb; } ;
struct hda_bus {int response_reset; int in_reset; scalar_t__ allow_bus_reset; scalar_t__ no_response_fallback; scalar_t__ needs_damn_long_delay; } ;
struct azx {int single_cmd; TYPE_3__* card; int fallback_to_single_cmd; scalar_t__ probing; TYPE_2__* ops; scalar_t__ msi; struct hda_bus bus; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ (* disable_msi_reset_irq ) (struct azx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct azx* FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct hdac_bus*) ;
 int FUNC_10 (struct hdac_bus*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct azx*) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct hdac_bus *VAR_4, unsigned int VAR_5,
     unsigned int *VAR_6)
{
 struct azx *VAR_7 = FUNC_0(VAR_4);
 struct hda_bus *VAR_8 = &VAR_7->bus;
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;
 bool VAR_12 = 0;

 again:
 VAR_9 = VAR_3 + FUNC_7(1000);

 for (VAR_10 = 0;; VAR_10++) {
  FUNC_11(&VAR_4->reg_lock);
  if (VAR_4->polling_mode || VAR_11)
   FUNC_10(VAR_4);
  if (!VAR_4->rirb.cmds[VAR_5]) {
   if (!VAR_11)
    VAR_4->poll_count = 0;
   if (VAR_6)
    *VAR_6 = VAR_4->rirb.res[VAR_5];
   FUNC_12(&VAR_4->reg_lock);
   return 0;
  }
  FUNC_12(&VAR_4->reg_lock);
  if (FUNC_14(VAR_3, VAR_9))
   break;

  if (VAR_8->needs_damn_long_delay ||
      VAR_10 > 3000) {
   if (VAR_10 > 3000 && !VAR_12) {
    FUNC_4(VAR_7->card->dev,
          "too slow response, last cmd=%#08x\n",
          VAR_4->last_cmd[VAR_5]);
    VAR_12 = 1;
   }
   FUNC_8(2);
  } else {
   FUNC_15(10);
   FUNC_1();
  }
 }

 if (VAR_8->no_response_fallback)
  return -VAR_1;

 if (!VAR_4->polling_mode && VAR_4->poll_count < 2) {
  FUNC_3(VAR_7->card->dev,
   "azx_get_response timeout, polling the codec once: last cmd=0x%08x\n",
   VAR_4->last_cmd[VAR_5]);
  VAR_11 = 1;
  VAR_4->poll_count++;
  goto again;
 }


 if (!VAR_4->polling_mode) {
  FUNC_6(VAR_7->card->dev,
    "azx_get_response timeout, switching to polling mode: last cmd=0x%08x\n",
    VAR_4->last_cmd[VAR_5]);
  VAR_4->polling_mode = 1;
  goto again;
 }

 if (VAR_7->msi) {
  FUNC_6(VAR_7->card->dev,
    "No response from codec, disabling MSI: last cmd=0x%08x\n",
    VAR_4->last_cmd[VAR_5]);
  if (VAR_7->ops->disable_msi_reset_irq &&
      VAR_7->ops->disable_msi_reset_irq(VAR_7) < 0)
   return -VAR_1;
  goto again;
 }

 if (VAR_7->probing) {




  return -VAR_1;
 }


 if (!VAR_7->fallback_to_single_cmd)
  return -VAR_1;




 if (VAR_8->allow_bus_reset && !VAR_8->response_reset && !VAR_8->in_reset) {
  VAR_8->response_reset = 1;
  FUNC_5(VAR_7->card->dev,
   "No response from codec, resetting bus: last cmd=0x%08x\n",
   VAR_4->last_cmd[VAR_5]);
  return -VAR_0;
 }

 FUNC_2(VAR_7->card->dev,
  "azx_get_response timeout, switching to single_cmd mode: last cmd=0x%08x\n",
  VAR_4->last_cmd[VAR_5]);
 VAR_7->single_cmd = 1;
 VAR_8->response_reset = 0;
 FUNC_9(VAR_4);
 return -VAR_1;
}
