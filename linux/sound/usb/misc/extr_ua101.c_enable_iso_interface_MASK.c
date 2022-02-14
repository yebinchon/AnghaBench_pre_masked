
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct ua101 {TYPE_3__* dev; TYPE_1__** intf; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct usb_host_interface* cur_altsetting; } ;


 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ua101 *VAR_0, unsigned int VAR_1)
{
 struct usb_host_interface *VAR_2;

 VAR_2 = VAR_0->intf[VAR_1]->cur_altsetting;
 if (VAR_2->desc.bAlternateSetting != 1) {
  int VAR_3 = FUNC_2(VAR_0->dev,
         VAR_2->desc.bInterfaceNumber, 1);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_0->dev->dev,
    "cannot initialize interface; error %d: %s\n",
    VAR_3, FUNC_1(VAR_3));
   return VAR_3;
  }
 }
 return 0;
}
