
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;


 int FUNC_0 (struct usb_mixer_interface*) ;
 int FUNC_1 (struct usb_mixer_interface*) ;
 int FUNC_2 (struct usb_mixer_interface*) ;
 int FUNC_3 (struct usb_mixer_interface*) ;
 int FUNC_4 (struct usb_mixer_interface*,int,int) ;
 int FUNC_5 (struct usb_mixer_interface*) ;
 int FUNC_6 (struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_7(struct usb_mixer_interface *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_4(VAR_0, 1, 6);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
