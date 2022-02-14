
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct usb_device {int dev; } ;
struct firmware {char* data; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char const*,int *) ;
 int FUNC_7 (struct usb_device*,int,int ,int *,int ) ;
 int FUNC_8 (struct usb_device*,int *,int) ;

__attribute__((used)) static int FUNC_9(
  struct usb_interface *VAR_4, const char *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct usb_device *VAR_8 = FUNC_2(VAR_4);
 u8 *VAR_9 = FUNC_4(VAR_2, VAR_3);
 const char *VAR_10;
 const char *VAR_11;
 const struct firmware *VAR_12;

 if (!VAR_9)
  return -VAR_1;

 VAR_6 = FUNC_6(&VAR_12, VAR_5, &VAR_8->dev);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "unable to get fpga firmware %s.\n",
    VAR_5);
  FUNC_3(VAR_9);
  return -VAR_0;
 }

 VAR_10 = VAR_12->data;
 VAR_11 = VAR_12->data + VAR_12->size;

 VAR_6 = FUNC_7(VAR_8, 8, 0, ((void*)0), 0);
 if (VAR_6 < 0) {
  FUNC_3(VAR_9);
  FUNC_5(VAR_12);
  FUNC_1(&VAR_4->dev,
   "unable to upload fpga firmware: begin urb.\n");
  return VAR_6;
 }

 while (VAR_10 != VAR_11) {
  for (VAR_7 = 0; VAR_10 != VAR_11 && VAR_7 < VAR_2; VAR_7++, VAR_10++)
   VAR_9[VAR_7] = FUNC_0((u8)*VAR_10);

  VAR_6 = FUNC_8(VAR_8, VAR_9, VAR_7);
  if (VAR_6 < 0) {
   FUNC_5(VAR_12);
   FUNC_3(VAR_9);
   FUNC_1(&VAR_4->dev,
    "unable to upload fpga firmware: fw urb.\n");
   return VAR_6;
  }
 }
 FUNC_5(VAR_12);
 FUNC_3(VAR_9);

 VAR_6 = FUNC_7(VAR_8, 9, 0, ((void*)0), 0);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev,
   "unable to upload fpga firmware: end urb.\n");
  return VAR_6;
 }
 return 0;
}
