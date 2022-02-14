
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int ioctl; int open; } ;
struct snd_hwdep {struct snd_emu10k1* private_data; TYPE_1__ ops; int iface; int name; } ;
struct snd_emu10k1 {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,struct snd_hwdep**) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct snd_emu10k1 *VAR_4, int VAR_5)
{
 struct snd_hwdep *VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_0(VAR_4->card, "FX8010", VAR_5, &VAR_6)) < 0)
  return VAR_7;
 FUNC_1(VAR_6->name, "EMU10K1 (FX8010)");
 VAR_6->iface = VAR_0;
 VAR_6->ops.open = VAR_2;
 VAR_6->ops.ioctl = VAR_1;
 VAR_6->ops.release = VAR_3;
 VAR_6->private_data = VAR_4;
 return 0;
}
