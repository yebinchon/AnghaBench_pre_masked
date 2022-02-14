
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_ymfpci {scalar_t__ device_id; TYPE_2__* card; TYPE_3__* controller_microcode; TYPE_1__* pci; TYPE_3__* dsp_microcode; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_3__**,char const*,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_ymfpci *VAR_7)
{
 int VAR_8, VAR_9;
 const char *VAR_10;

 VAR_8 = FUNC_1(&VAR_7->dsp_microcode, "yamaha/ds1_dsp.fw",
          &VAR_7->pci->dev);
 if (VAR_8 >= 0) {
  if (VAR_7->dsp_microcode->size != VAR_6) {
   FUNC_0(VAR_7->card->dev,
    "DSP microcode has wrong size\n");
   VAR_8 = -VAR_0;
  }
 }
 if (VAR_8 < 0)
  return VAR_8;
 VAR_9 = VAR_7->device_id == VAR_1 ||
  VAR_7->device_id == VAR_2 ||
  VAR_7->device_id == VAR_3 ||
  VAR_7->device_id == VAR_4;
 VAR_10 = VAR_9 ? "yamaha/ds1e_ctrl.fw" : "yamaha/ds1_ctrl.fw";
 VAR_8 = FUNC_1(&VAR_7->controller_microcode, VAR_10,
          &VAR_7->pci->dev);
 if (VAR_8 >= 0) {
  if (VAR_7->controller_microcode->size != VAR_5) {
   FUNC_0(VAR_7->card->dev,
    "controller microcode has wrong size\n");
   VAR_8 = -VAR_0;
  }
 }
 if (VAR_8 < 0)
  return VAR_8;
 return 0;
}
