
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct usb_device {int dev; } ;
struct ihex_record {int address; int* data; int len; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct ihex_record*) ;
 struct ihex_record* FUNC_3 (int,int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char const*,int *) ;
 int FUNC_6 (struct usb_device*,int,int,int*,int) ;
 int FUNC_7 (struct firmware const*,struct ihex_record*) ;
 scalar_t__ FUNC_8 (struct ihex_record*) ;

__attribute__((used)) static int FUNC_9(
  struct usb_interface *VAR_2, const char *VAR_3,
  unsigned int VAR_4, u8 *VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 struct usb_device *VAR_9 = FUNC_1(VAR_2);
 const struct firmware *VAR_10 = ((void*)0);
 struct ihex_record *VAR_11 = FUNC_3(sizeof(struct ihex_record),
   VAR_1);

 if (!VAR_11)
  return -VAR_0;

 VAR_7 = FUNC_5(&VAR_10, VAR_3, &VAR_9->dev);
 if (VAR_7 < 0) {
  FUNC_2(VAR_11);
  FUNC_0(&VAR_2->dev,
   "error requesting ezusb firmware %s.\n", VAR_3);
  return VAR_7;
 }
 VAR_7 = FUNC_7(VAR_10, VAR_11);
 if (VAR_7 < 0) {
  FUNC_2(VAR_11);
  FUNC_4(VAR_10);
  FUNC_0(&VAR_2->dev,
   "error validating ezusb firmware %s.\n", VAR_3);
  return VAR_7;
 }

 VAR_8 = 0x01;
 VAR_7 = FUNC_6(VAR_9, 0xa0, 0xe600, &VAR_8, 1);
 if (VAR_7 < 0) {
  FUNC_2(VAR_11);
  FUNC_4(VAR_10);
  FUNC_0(&VAR_2->dev,
   "unable to upload ezusb firmware %s: begin message.\n",
   VAR_3);
  return VAR_7;
 }

 while (FUNC_8(VAR_11)) {
  VAR_7 = FUNC_6(VAR_9, 0xa0, VAR_11->address,
    VAR_11->data, VAR_11->len);
  if (VAR_7 < 0) {
   FUNC_2(VAR_11);
   FUNC_4(VAR_10);
   FUNC_0(&VAR_2->dev,
    "unable to upload ezusb firmware %s: data urb.\n",
    VAR_3);
   return VAR_7;
  }
 }

 FUNC_4(VAR_10);
 FUNC_2(VAR_11);
 if (VAR_5) {
  VAR_7 = FUNC_6(VAR_9, 0xa0, VAR_4,
    VAR_5, VAR_6);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_2->dev,
    "unable to upload ezusb firmware %s: post urb.\n",
    VAR_3);
   return VAR_7;
  }
 }

 VAR_8 = 0x00;
 VAR_7 = FUNC_6(VAR_9, 0xa0, 0xe600, &VAR_8, 1);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_2->dev,
   "unable to upload ezusb firmware %s: end message.\n",
   VAR_3);
  return VAR_7;
 }
 return 0;
}
