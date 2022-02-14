
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct usb_device*,struct usb_interface*,struct snd_card**) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct snd_card*) ;
 int FUNC_6 (struct usb_interface*,struct snd_card*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_0,
       const struct usb_device_id *VAR_1)
{
 int VAR_2;
 struct snd_card *VAR_3 = ((void*)0);
 struct usb_device *VAR_4 = FUNC_4(VAR_0);

 VAR_2 = FUNC_1(VAR_4, VAR_0, &VAR_3);

 if (VAR_2 < 0)
  return VAR_2;

 FUNC_6(VAR_0, VAR_3);
 VAR_2 = FUNC_3(FUNC_0(VAR_3));
 if (VAR_2 < 0) {
  FUNC_2(&VAR_4->dev, "unable to init card! (ret=%d)\n", VAR_2);
  FUNC_5(VAR_3);
  return VAR_2;
 }

 return 0;
}
