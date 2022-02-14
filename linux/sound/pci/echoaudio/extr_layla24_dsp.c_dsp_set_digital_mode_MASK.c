
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct echoaudio {int sample_rate; int digital_mode; TYPE_2__* card; int lock; TYPE_1__* comm_page; int input_clock; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int control_register; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct echoaudio*,short) ;
 int FUNC_7 (struct echoaudio*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_11, u8 VAR_12)
{
 u32 VAR_13;
 int VAR_14, VAR_15;
 short VAR_16;


 VAR_15 = 0;
 switch (VAR_12) {
 case 129:
 case 128:
  if (VAR_11->input_clock == VAR_0)
   VAR_15 = 1;
  VAR_16 = VAR_6;
  break;
 case 130:
  if (VAR_11->input_clock == VAR_2)
   VAR_15 = 1;
  VAR_16 = VAR_5;
  break;
 default:
  FUNC_1(VAR_11->card->dev,
   "Digital mode not supported: %d\n", VAR_12);
  return -VAR_3;
 }

 if (VAR_15) {
  VAR_11->sample_rate = 48000;
  FUNC_4(&VAR_11->lock);
  FUNC_3(VAR_11, VAR_1);
  FUNC_5(&VAR_11->lock);
 }


 if (FUNC_6(VAR_11, VAR_16) < 0)
  return -VAR_4;

 FUNC_4(&VAR_11->lock);


 VAR_13 = FUNC_2(VAR_11->comm_page->control_register);
 VAR_13 &= VAR_8;

 switch (VAR_12) {
 case 129:
  VAR_13 |= VAR_10;
  break;
 case 128:

  break;
 case 130:
  VAR_13 |= VAR_7;
  VAR_13 &= ~VAR_9;
  break;
 }

 VAR_14 = FUNC_7(VAR_11, VAR_13, 1);
 FUNC_5(&VAR_11->lock);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_11->digital_mode = VAR_12;

 FUNC_0(VAR_11->card->dev, "set_digital_mode to %d\n", VAR_12);
 return VAR_15;
}
