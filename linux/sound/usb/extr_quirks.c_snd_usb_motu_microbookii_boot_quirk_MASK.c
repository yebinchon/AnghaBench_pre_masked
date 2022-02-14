
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dev; } ;
typedef int set_samplerate_seq ;
typedef int poll_ready_seq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,int const*,int) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct usb_device*,int*,int ,int*) ;

__attribute__((used)) static int FUNC_8(struct usb_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 static const u8 VAR_8[] = { 0x00, 0x00, 0x00, 0x00,
       0x00, 0x00, 0x0b, 0x14,
       0x00, 0x00, 0x00, 0x01 };
 static const u8 VAR_9[] = { 0x00, 0x04, 0x00, 0x00,
          0x00, 0x00, 0x0b, 0x18 };
 u8 *VAR_10 = FUNC_3(VAR_3, VAR_2);

 if (!VAR_10)
  return -VAR_1;

 FUNC_1(&VAR_4->dev, "Waiting for MOTU Microbook II to boot up...\n");


 FUNC_4(VAR_10, VAR_8, sizeof(VAR_8));
 VAR_6 = sizeof(VAR_8);
 VAR_5 = FUNC_7(VAR_4, VAR_10, VAR_3,
         &VAR_6);

 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev,
   "failed setting the sample rate for Motu MicroBook II: %d\n",
   VAR_5);
  goto free_buf;
 }


 while (1) {
  if (++VAR_7 > 100) {
   FUNC_0(&VAR_4->dev,
    "failed booting Motu MicroBook II: timeout\n");
   VAR_5 = -VAR_0;
   goto free_buf;
  }

  FUNC_5(VAR_10, 0, VAR_3);
  FUNC_4(VAR_10, VAR_9, sizeof(VAR_9));

  VAR_6 = sizeof(VAR_9);
  VAR_5 = FUNC_7(
   VAR_4, VAR_10, VAR_3, &VAR_6);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->dev,
    "failed booting Motu MicroBook II: communication error %d\n",
    VAR_5);
   goto free_buf;
  }







  if (VAR_6 == 12 && VAR_10[VAR_6 - 1] == 1)
   break;

  FUNC_6(100);
 }

 FUNC_1(&VAR_4->dev, "MOTU MicroBook II ready\n");

free_buf:
 FUNC_2(VAR_10);
 return VAR_5;
}
