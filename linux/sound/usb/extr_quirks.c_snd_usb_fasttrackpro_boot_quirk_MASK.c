
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dev; TYPE_2__* actconfig; } ;
struct TYPE_3__ {int bConfigurationValue; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->actconfig->desc.bConfigurationValue == 1) {
  FUNC_1(&VAR_1->dev,
      "Fast Track Pro switching to config #2\n");





  VAR_2 = FUNC_2(VAR_1, 2);
  if (VAR_2 < 0)
   FUNC_0(&VAR_1->dev,
    "error usb_driver_set_configuration: %d\n",
    VAR_2);



  return -VAR_0;
 } else
  FUNC_1(&VAR_1->dev, "Fast Track Pro config OK\n");

 return 0;
}
