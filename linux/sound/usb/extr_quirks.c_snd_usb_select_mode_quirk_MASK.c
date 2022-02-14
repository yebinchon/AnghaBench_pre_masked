
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct snd_usb_substream {TYPE_2__* stream; struct usb_device* dev; } ;
struct audioformat {int formats; int iface; } ;
struct TYPE_4__ {TYPE_1__* chip; } ;
struct TYPE_3__ {int usb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int,int,int *,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct snd_usb_substream *VAR_4,
         struct audioformat *VAR_5)
{
 struct usb_device *VAR_6 = VAR_4->dev;
 int VAR_7;

 if (FUNC_0(VAR_4->stream->chip->usb_id)) {



  VAR_7 = FUNC_3(VAR_6, VAR_5->iface, 0);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_1(20);


  if (VAR_5->formats & VAR_0) {

   VAR_7 = FUNC_2(VAR_6, FUNC_4(VAR_6, 0), 0,
           VAR_1|VAR_3|VAR_2,
           1, 1, ((void*)0), 0);
   if (VAR_7 < 0)
    return VAR_7;

  } else {


   VAR_7 = FUNC_2(VAR_6, FUNC_4(VAR_6, 0), 0,
           VAR_1|VAR_3|VAR_2,
           0, 1, ((void*)0), 0);
   if (VAR_7 < 0)
    return VAR_7;

  }
  FUNC_1(20);
 }
 return 0;
}
