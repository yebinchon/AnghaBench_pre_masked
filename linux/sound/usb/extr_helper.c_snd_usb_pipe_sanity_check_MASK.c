
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;




 size_t FUNC_0 (int *) ;
 struct usb_host_endpoint* FUNC_1 (struct usb_device*,unsigned int) ;
 int const FUNC_2 (unsigned int) ;

int FUNC_3(struct usb_device *VAR_1, unsigned int VAR_2)
{
 static const int VAR_3[4] = {
  130, 128, 131, 129
 };
 struct usb_host_endpoint *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_4 || FUNC_2(VAR_2) != VAR_3[FUNC_0(&VAR_4->desc)])
  return -VAR_0;
 return 0;
}
