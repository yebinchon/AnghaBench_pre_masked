
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct echoaudio {int sample_rate; int digital_mode; TYPE_2__* card; int lock; int device_id; TYPE_1__* comm_page; int input_clock; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int control_register; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct echoaudio*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_10, u8 VAR_11)
{
 u32 VAR_12;
 int VAR_13, VAR_14;


 VAR_14 = 0;
 switch (VAR_11) {
 case 129:
 case 130:
 case 128:
  if (VAR_10->input_clock == VAR_1)
   VAR_14 = 1;
  break;
 case 131:
  if (VAR_10->input_clock == VAR_3)
   VAR_14 = 1;
  break;
 default:
  FUNC_1(VAR_10->card->dev,
   "Digital mode not supported: %d\n", VAR_11);
  return -VAR_4;
 }

 FUNC_4(&VAR_10->lock);

 if (VAR_14) {
  VAR_10->sample_rate = 48000;
  FUNC_3(VAR_10, VAR_2);
 }


 VAR_12 = FUNC_2(VAR_10->comm_page->control_register);
 VAR_12 &= VAR_6;


 switch (VAR_11) {
 case 129:
  VAR_12 |= VAR_9;
  break;
 case 130:

  if (VAR_10->device_id == VAR_0)
   VAR_12 |= VAR_8;
  break;
 case 128:

  break;
 case 131:
  VAR_12 |= VAR_5;
  VAR_12 &= ~VAR_7;
  break;
 }

 VAR_13 = FUNC_6(VAR_10, VAR_12, 1);
 FUNC_5(&VAR_10->lock);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_10->digital_mode = VAR_11;

 FUNC_0(VAR_10->card->dev,
  "set_digital_mode to %d\n", VAR_10->digital_mode);
 return VAR_14;
}
