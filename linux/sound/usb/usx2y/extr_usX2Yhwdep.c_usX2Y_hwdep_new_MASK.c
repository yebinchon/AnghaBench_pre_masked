
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int devnum; TYPE_2__* bus; } ;
struct TYPE_3__ {int poll; int mmap; int dsp_load; int dsp_status; } ;
struct snd_hwdep {int exclusive; int name; TYPE_1__ ops; int private_data; int iface; } ;
struct snd_card {int dummy; } ;
struct TYPE_4__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_card*,int ,int ,struct snd_hwdep**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct snd_card*) ;

int FUNC_3(struct snd_card *VAR_6, struct usb_device* VAR_7)
{
 int VAR_8;
 struct snd_hwdep *VAR_9;

 if ((VAR_8 = FUNC_0(VAR_6, VAR_1, 0, &VAR_9)) < 0)
  return VAR_8;

 VAR_9->iface = VAR_0;
 VAR_9->private_data = FUNC_2(VAR_6);
 VAR_9->ops.dsp_status = VAR_5;
 VAR_9->ops.dsp_load = VAR_4;
 VAR_9->ops.mmap = VAR_2;
 VAR_9->ops.poll = VAR_3;
 VAR_9->exclusive = 1;
 FUNC_1(VAR_9->name, "/dev/bus/usb/%03d/%03d", VAR_7->bus->busnum, VAR_7->devnum);
 return 0;
}
