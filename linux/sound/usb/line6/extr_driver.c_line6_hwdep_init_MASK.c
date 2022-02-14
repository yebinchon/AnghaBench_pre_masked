
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fifo; int read_lock; int wait_queue; scalar_t__ active; } ;
struct usb_line6 {int card; TYPE_1__ messages; int process_message; } ;
struct snd_hwdep {int exclusive; struct usb_line6* private_data; int ops; int iface; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,struct snd_hwdep**) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct usb_line6 *VAR_3)
{
 int VAR_4;
 struct snd_hwdep *VAR_5;


 VAR_3->process_message = VAR_2;
 VAR_3->messages.active = 0;
 FUNC_1(&VAR_3->messages.wait_queue);
 FUNC_2(&VAR_3->messages.read_lock);
 FUNC_0(VAR_3->messages.fifo);

 VAR_4 = FUNC_3(VAR_3->card, "config", 0, &VAR_5);
 if (VAR_4 < 0)
  goto end;
 FUNC_4(VAR_5->name, "config");
 VAR_5->iface = VAR_0;
 VAR_5->ops = VAR_1;
 VAR_5->private_data = VAR_3;
 VAR_5->exclusive = 1;

end:
 return VAR_4;
}
