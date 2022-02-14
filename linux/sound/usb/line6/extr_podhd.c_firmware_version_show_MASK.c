
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_podhd {int firmware_version; } ;
struct snd_card {struct usb_line6_podhd* private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct snd_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct snd_card *VAR_3 = FUNC_0(VAR_0);
 struct usb_line6_podhd *VAR_4 = VAR_3->private_data;

 return FUNC_1(VAR_2, "%06x\n", VAR_4->firmware_version);
}
