
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_toneport {int firmware_version; int serial_number; int type; } ;
struct usb_line6 {int card; int line6pcm; int startup; int disconnect; } ;
struct usb_device_id {int driver_info; } ;


 int FUNC_0 (struct usb_line6*,int *) ;
 int FUNC_1 (struct usb_line6*,int,int *,int) ;
 int FUNC_2 (struct usb_line6*,int *) ;
 struct usb_line6_toneport* FUNC_3 (struct usb_line6*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct usb_line6_toneport*) ;
 scalar_t__ FUNC_8 (struct usb_line6_toneport*) ;
 int FUNC_9 (struct usb_line6_toneport*) ;
 int VAR_3 ;
 int FUNC_10 (struct usb_line6_toneport*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct usb_line6 *VAR_5,
    const struct usb_device_id *VAR_6)
{
 int VAR_7;
 struct usb_line6_toneport *VAR_8 = FUNC_3(VAR_5);

 VAR_8->type = VAR_6->driver_info;

 VAR_5->disconnect = VAR_0;
 VAR_5->startup = VAR_4;


 VAR_7 = FUNC_0(VAR_5, &VAR_3);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_5(VAR_5->card,
     FUNC_6(&VAR_1,
           VAR_5->line6pcm));
 if (VAR_7 < 0)
  return VAR_7;


 if (FUNC_8(VAR_8)) {
  VAR_7 =
      FUNC_5(VAR_5->card,
    FUNC_6(&VAR_2,
          VAR_5->line6pcm));
  if (VAR_7 < 0)
   return VAR_7;
 }

 FUNC_2(VAR_5, &VAR_8->serial_number);
 FUNC_1(VAR_5, 0x80c2, &VAR_8->firmware_version, 1);

 if (FUNC_7(VAR_8)) {
  VAR_7 = FUNC_9(VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_10(VAR_8);
 if (VAR_7)
  return VAR_7;


 return FUNC_4(VAR_5->card);
}
