
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_audio {TYPE_2__* dev; int shutdown; } ;
struct snd_info_entry {struct snd_usb_audio* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_4__ {int devnum; TYPE_1__* bus; } ;
struct TYPE_3__ {int busnum; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_info_buffer*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 struct snd_usb_audio *VAR_2 = VAR_0->private_data;
 if (!FUNC_0(&VAR_2->shutdown))
  FUNC_1(VAR_1, "%03d/%03d\n", VAR_2->dev->bus->busnum, VAR_2->dev->devnum);
}
