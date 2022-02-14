
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int groups; } ;
struct TYPE_3__ {int ioctl_compat; int ioctl; int open; } ;
struct snd_hwdep {char* name; int exclusive; TYPE_2__ dev; TYPE_1__ ops; struct hda_codec* private_data; int iface; } ;
struct hda_codec {int addr; struct snd_hwdep* hwdep; int card; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct hda_codec*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,struct snd_hwdep**) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(struct hda_codec *VAR_5)
{
 char VAR_6[16];
 struct snd_hwdep *VAR_7;
 int VAR_8;

 FUNC_2(VAR_6, "HDA Codec %d", VAR_5->addr);
 VAR_8 = FUNC_1(VAR_5->card, VAR_6, VAR_5->addr, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_5->hwdep = VAR_7;
 FUNC_2(VAR_7->name, "HDA Codec %d", VAR_5->addr);
 VAR_7->iface = VAR_0;
 VAR_7->private_data = VAR_5;
 VAR_7->exclusive = 1;

 VAR_7->ops.open = VAR_3;
 VAR_7->ops.ioctl = VAR_1;





 VAR_7->dev.groups = VAR_4;
 FUNC_0(&VAR_7->dev, VAR_5);

 return 0;
}
