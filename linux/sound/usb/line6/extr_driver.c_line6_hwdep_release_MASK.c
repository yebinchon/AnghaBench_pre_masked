
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ active; } ;
struct usb_line6 {TYPE_1__ messages; } ;
struct snd_hwdep {struct usb_line6* private_data; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct snd_hwdep *VAR_0, struct file *VAR_1)
{
 struct usb_line6 *VAR_2 = VAR_0->private_data;

 VAR_2->messages.active = 0;

 return 0;
}
