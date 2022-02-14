
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_2__* driver; int dev; } ;
struct snd_pcm {int dummy; } ;
struct skl_dev {int pci; } ;
struct hdac_bus {int dummy; } ;
struct TYPE_6__ {scalar_t__ channels_min; } ;
struct TYPE_4__ {scalar_t__ channels_min; } ;
struct TYPE_5__ {TYPE_1__ capture; TYPE_3__ playback; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm*,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;
 struct hdac_bus *VAR_5 = FUNC_1(VAR_4->dev);
 struct snd_pcm *VAR_6 = VAR_3->pcm;
 unsigned int VAR_7;
 struct skl_dev *VAR_8 = FUNC_0(VAR_5);

 if (VAR_4->driver->playback.channels_min ||
  VAR_4->driver->capture.channels_min) {

  VAR_7 = VAR_0 * 1024;
  if (VAR_7 > VAR_1)
   VAR_7 = VAR_1;
  FUNC_3(VAR_6,
      VAR_2,
      FUNC_2(VAR_8->pci),
      VAR_7, VAR_1);
 }

 return 0;
}
