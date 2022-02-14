
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int ,int,int,int *,int ,int) ;
 int FUNC_4 (struct usb_device*,int,int ) ;
 int FUNC_5 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->dev, "Waiting for Axe-Fx III to boot up...\n");

 if (FUNC_2(VAR_3, FUNC_5(VAR_3, 0)))
  return -VAR_0;





 VAR_4 = FUNC_3(VAR_3, FUNC_5(VAR_3, 0),
    VAR_2, VAR_1,
    1, 1, ((void*)0), 0, 120000);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_3->dev,
   "failed waiting for Axe-Fx III to boot: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_0(&VAR_3->dev, "Axe-Fx III is now ready\n");

 VAR_4 = FUNC_4(VAR_3, 1, 0);
 if (VAR_4 < 0)
  FUNC_0(&VAR_3->dev,
   "error stopping Axe-Fx III interface: %d\n", VAR_4);

 return 0;
}
