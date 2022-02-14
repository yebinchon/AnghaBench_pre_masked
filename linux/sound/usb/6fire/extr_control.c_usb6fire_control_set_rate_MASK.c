
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct control_runtime {TYPE_1__* chip; } ;
struct comm_runtime {int (* write16 ) (struct comm_runtime*,int,int,int ,int ) ;} ;
struct TYPE_2__ {struct comm_runtime* comm; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct comm_runtime*,int,int,int ,int ) ;
 int FUNC_1 (struct usb_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct control_runtime *VAR_5, int VAR_6)
{
 int VAR_7;
 struct usb_device *VAR_8 = VAR_5->chip->dev;
 struct comm_runtime *VAR_9 = VAR_5->chip->comm;

 if (VAR_6 < 0 || VAR_6 >= VAR_0)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_8, 1, VAR_4[VAR_6]);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = VAR_9->write16(VAR_9, 0x02, 0x01, VAR_3[VAR_6],
   VAR_2[VAR_6]);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
