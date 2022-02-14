
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_usb_substream {scalar_t__ direction; int * sync_endpoint; TYPE_2__* data_endpoint; TYPE_1__* stream; } ;
struct audioformat {unsigned int ep_attr; int altsetting; int iface; } ;
struct TYPE_6__ {int bmAttributes; scalar_t__ bLength; int bSynchAddress; unsigned int bEndpointAddress; } ;
struct TYPE_5__ {int * sync_master; } ;
struct TYPE_4__ {int chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *,char*,int ,int ,int,unsigned int,int) ;
 TYPE_3__* FUNC_1 (struct usb_host_interface*,int) ;
 int FUNC_2 (struct snd_usb_substream*,struct usb_device*,struct usb_interface_descriptor*,unsigned int) ;
 int * FUNC_3 (int ,struct usb_host_interface*,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_substream *VAR_15,
        struct audioformat *VAR_16,
        struct usb_device *VAR_17,
        struct usb_host_interface *VAR_18,
        struct usb_interface_descriptor *VAR_19)
{
 int VAR_20 = VAR_15->direction == VAR_1;
 unsigned int VAR_21, VAR_22;
 bool VAR_23;
 int VAR_24;






 VAR_22 = VAR_16->ep_attr & VAR_6;

 if ((VAR_20 && (VAR_22 != VAR_8)) ||
  (!VAR_20 && (VAR_22 != VAR_7))) {
  VAR_15->sync_endpoint = ((void*)0);
  VAR_15->data_endpoint->sync_master = ((void*)0);
 }

 VAR_24 = FUNC_2(VAR_15, VAR_17, VAR_19, VAR_22);
 if (VAR_24 < 0)
  return VAR_24;


 if (VAR_24 > 0)
  return 0;

 if (VAR_19->bNumEndpoints < 2)
  return 0;

 if ((VAR_20 && (VAR_22 == VAR_10 ||
        VAR_22 == VAR_7)) ||
     (!VAR_20 && VAR_22 != VAR_7))
  return 0;
 if ((FUNC_1(VAR_18, 1)->bmAttributes & VAR_13) != VAR_14 ||
     (FUNC_1(VAR_18, 1)->bLength >= VAR_5 &&
      FUNC_1(VAR_18, 1)->bSynchAddress != 0)) {
  FUNC_0(&VAR_17->dev,
   "%d:%d : invalid sync pipe. bmAttributes %02x, bLength %d, bSynchAddress %02x\n",
      VAR_16->iface, VAR_16->altsetting,
      FUNC_1(VAR_18, 1)->bmAttributes,
      FUNC_1(VAR_18, 1)->bLength,
      FUNC_1(VAR_18, 1)->bSynchAddress);
  if (VAR_20 && VAR_22 == VAR_9)
   return 0;
  return -VAR_0;
 }
 VAR_21 = FUNC_1(VAR_18, 1)->bEndpointAddress;
 if (FUNC_1(VAR_18, 0)->bLength >= VAR_5 &&
     FUNC_1(VAR_18, 0)->bSynchAddress != 0 &&
     ((VAR_20 && VAR_21 != (unsigned int)(FUNC_1(VAR_18, 0)->bSynchAddress | VAR_4)) ||
      (!VAR_20 && VAR_21 != (unsigned int)(FUNC_1(VAR_18, 0)->bSynchAddress & ~VAR_4)))) {
  FUNC_0(&VAR_17->dev,
   "%d:%d : invalid sync pipe. is_playback %d, ep %02x, bSynchAddress %02x\n",
      VAR_16->iface, VAR_16->altsetting,
      VAR_20, VAR_21, FUNC_1(VAR_18, 0)->bSynchAddress);
  if (VAR_20 && VAR_22 == VAR_9)
   return 0;
  return -VAR_0;
 }

 VAR_23 = (FUNC_1(VAR_18, 1)->bmAttributes & VAR_12)
   == VAR_11;

 VAR_15->sync_endpoint = FUNC_3(VAR_15->stream->chip,
         VAR_18, VAR_21, !VAR_15->direction,
         VAR_23 ?
       VAR_2 :
       VAR_3);
 if (!VAR_15->sync_endpoint) {
  if (VAR_20 && VAR_22 == VAR_9)
   return 0;
  return -VAR_0;
 }

 VAR_15->data_endpoint->sync_master = VAR_15->sync_endpoint;

 return 0;
}
