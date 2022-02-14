
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device {int devnum; TYPE_2__* bus; } ;
struct TYPE_4__ {int poll; int mmap; void* ioctl_compat; void* ioctl; int release; int open; } ;
struct snd_hwdep {int name; TYPE_1__ ops; TYPE_3__* private_data; int iface; } ;
struct snd_card {int dummy; } ;
struct TYPE_6__ {struct usb_device* dev; } ;
struct TYPE_5__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_card*,int ,int ,struct snd_hwdep**) ;
 int FUNC_2 (int ,char*,int,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_7)
{
 int VAR_8;
 struct snd_hwdep *VAR_9;
 struct usb_device *VAR_10 = FUNC_0(VAR_7)->dev;

 VAR_8 = FUNC_1(VAR_7, VAR_1, 0, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9->iface = VAR_0;
 VAR_9->private_data = FUNC_0(VAR_7);
 VAR_9->ops.open = VAR_4;
 VAR_9->ops.release = VAR_6;
 VAR_9->ops.ioctl = VAR_2;
 VAR_9->ops.ioctl_compat = VAR_2;
 VAR_9->ops.mmap = VAR_3;
 VAR_9->ops.poll = VAR_5;

 FUNC_2(VAR_9->name, "/dev/bus/usb/%03d/%03d/hwdeppcm",
  VAR_10->bus->busnum, VAR_10->devnum);
 return 0;
}
