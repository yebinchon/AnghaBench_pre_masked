
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {struct snd_line6_midi* line6midi; TYPE_1__* properties; } ;
struct snd_rawmidi {int private_free; struct snd_line6_midi* private_data; } ;
struct snd_line6_midi {int midibuf_out; int midibuf_in; struct usb_line6* line6; int lock; int send_wait; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct snd_line6_midi* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct usb_line6*,struct snd_rawmidi**) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct usb_line6 *VAR_5)
{
 int VAR_6;
 struct snd_rawmidi *VAR_7;
 struct snd_line6_midi *VAR_8;

 if (!(VAR_5->properties->capabilities & VAR_2)) {

  return 0;
 }

 VAR_6 = FUNC_3(VAR_5, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_8 = FUNC_1(sizeof(struct snd_line6_midi), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->private_data = VAR_8;
 VAR_7->private_free = VAR_4;

 FUNC_0(&VAR_8->send_wait);
 FUNC_4(&VAR_8->lock);
 VAR_8->line6 = VAR_5;

 VAR_6 = FUNC_2(&VAR_8->midibuf_in, VAR_3, 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(&VAR_8->midibuf_out, VAR_3, 1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->line6midi = VAR_8;
 return 0;
}
