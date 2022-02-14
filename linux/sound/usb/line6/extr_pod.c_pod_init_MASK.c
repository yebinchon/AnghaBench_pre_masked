
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* properties; } ;
struct usb_line6_pod {int monitor_level; TYPE_2__ line6; } ;
struct usb_line6 {int startup_work; int line6pcm; int card; int startup; int process_message; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_line6*) ;
 int FUNC_1 (struct usb_line6*,int *) ;
 int VAR_3 ;
 struct usb_line6_pod* FUNC_2 (struct usb_line6*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_line6 *VAR_8,
      const struct usb_device_id *VAR_9)
{
 int VAR_10;
 struct usb_line6_pod *VAR_11 = FUNC_2(VAR_8);

 VAR_8->process_message = VAR_3;
 VAR_8->startup = VAR_7;


 VAR_10 = FUNC_5(VAR_8->card, &VAR_5);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_8, &VAR_6);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_6(VAR_8->card,
     FUNC_7(&VAR_4, VAR_8->line6pcm));
 if (VAR_10 < 0)
  return VAR_10;







 if (VAR_11->line6.properties->capabilities & VAR_0) {
  VAR_11->monitor_level = VAR_2;


  FUNC_4(&VAR_8->startup_work,
          FUNC_3(VAR_1));
 }

 return 0;
}
