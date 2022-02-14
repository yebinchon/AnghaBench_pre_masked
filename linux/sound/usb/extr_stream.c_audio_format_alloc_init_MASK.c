
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int dev; } ;
struct audioformat {int iface; int altsetting; int altset_idx; int protocol; int maxpacksize; int channels; int clock; int list; int datainterval; int ep_attr; int endpoint; } ;
struct TYPE_2__ {int wMaxPacketSize; int bmAttributes; int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct usb_host_interface*,int ) ;
 struct audioformat* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct snd_usb_audio*,struct usb_host_interface*) ;

__attribute__((used)) static struct audioformat *
FUNC_6(struct snd_usb_audio *VAR_2,
         struct usb_host_interface *VAR_3,
         int VAR_4, int VAR_5, int VAR_6,
         int VAR_7, int VAR_8, int VAR_9)
{
 struct audioformat *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return ((void*)0);

 VAR_10->iface = VAR_5;
 VAR_10->altsetting = VAR_7;
 VAR_10->altset_idx = VAR_6;
 VAR_10->endpoint = FUNC_1(VAR_3, 0)->bEndpointAddress;
 VAR_10->ep_attr = FUNC_1(VAR_3, 0)->bmAttributes;
 VAR_10->datainterval = FUNC_5(VAR_2, VAR_3);
 VAR_10->protocol = VAR_4;
 VAR_10->maxpacksize = FUNC_3(FUNC_1(VAR_3, 0)->wMaxPacketSize);
 VAR_10->channels = VAR_8;
 if (FUNC_4(VAR_2->dev) == VAR_1)
  VAR_10->maxpacksize = (((VAR_10->maxpacksize >> 11) & 3) + 1)
    * (VAR_10->maxpacksize & 0x7ff);
 VAR_10->clock = VAR_9;
 FUNC_0(&VAR_10->list);

 return VAR_10;
}
