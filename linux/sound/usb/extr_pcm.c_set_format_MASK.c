
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface_descriptor {int bAlternateSetting; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_substream {int interface; struct audioformat* cur_audiofmt; TYPE_1__* stream; int data_endpoint; int direction; scalar_t__ altset_idx; struct usb_device* dev; } ;
struct audioformat {int iface; int endpoint; scalar_t__ altset_idx; int altsetting; } ;
struct TYPE_5__ {int keep_iface; } ;
struct TYPE_4__ {TYPE_2__* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,int,int ,int) ;
 struct usb_interface_descriptor* FUNC_3 (struct usb_host_interface*) ;
 int FUNC_4 (struct snd_usb_substream*,struct audioformat*,struct usb_device*,struct usb_host_interface*,struct usb_interface_descriptor*) ;
 int FUNC_5 (TYPE_2__*,struct usb_host_interface*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,struct usb_host_interface*,struct audioformat*) ;
 int FUNC_7 (struct snd_usb_substream*,struct audioformat*) ;
 int FUNC_8 (struct snd_usb_substream*,struct audioformat*) ;
 int FUNC_9 (struct usb_device*) ;
 struct usb_host_interface* FUNC_10 (struct usb_interface*,int ) ;
 struct usb_interface* FUNC_11 (struct usb_device*,int) ;
 int FUNC_12 (struct usb_device*,int,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_usb_substream *VAR_3, struct audioformat *VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->dev;
 struct usb_host_interface *VAR_6;
 struct usb_interface_descriptor *VAR_7;
 struct usb_interface *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_11(VAR_5, VAR_4->iface);
 if (FUNC_0(!VAR_8))
  return -VAR_0;
 VAR_6 = FUNC_10(VAR_8, VAR_4->altsetting);
 VAR_7 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_7->bAlternateSetting != VAR_4->altsetting))
  return -VAR_0;

 if (VAR_4 == VAR_3->cur_audiofmt)
  return 0;


 if (VAR_3->interface >= 0 && VAR_3->interface != VAR_4->iface) {
  if (!VAR_3->stream->chip->keep_iface) {
   VAR_9 = FUNC_12(VAR_3->dev, VAR_3->interface, 0);
   if (VAR_9 < 0) {
    FUNC_2(&VAR_5->dev,
     "%d:%d: return to setting 0 failed (%d)\n",
     VAR_4->iface, VAR_4->altsetting, VAR_9);
    return -VAR_1;
   }
  }
  VAR_3->interface = -1;
  VAR_3->altset_idx = 0;
 }


 if (VAR_8->cur_altsetting != VAR_6) {
  VAR_9 = FUNC_7(VAR_3, VAR_4);
  if (VAR_9 < 0)
   return -VAR_1;

  VAR_9 = FUNC_12(VAR_5, VAR_4->iface, VAR_4->altsetting);
  if (VAR_9 < 0) {
   FUNC_2(&VAR_5->dev,
    "%d:%d: usb_set_interface failed (%d)\n",
    VAR_4->iface, VAR_4->altsetting, VAR_9);
   return -VAR_1;
  }
  FUNC_1(&VAR_5->dev, "setting usb interface %d:%d\n",
   VAR_4->iface, VAR_4->altsetting);
  FUNC_9(VAR_5);
 }

 VAR_3->interface = VAR_4->iface;
 VAR_3->altset_idx = VAR_4->altset_idx;
 VAR_3->data_endpoint = FUNC_5(VAR_3->stream->chip,
         VAR_6, VAR_4->endpoint, VAR_3->direction,
         VAR_2);

 if (!VAR_3->data_endpoint)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_6(VAR_3->stream->chip, VAR_4->iface, VAR_6, VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_3->cur_audiofmt = VAR_4;

 FUNC_8(VAR_3, VAR_4);

 return 0;
}
