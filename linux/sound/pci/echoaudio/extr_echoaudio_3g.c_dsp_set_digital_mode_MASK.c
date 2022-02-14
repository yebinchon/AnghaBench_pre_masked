
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct echoaudio*,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_8, u8 VAR_9)
{
 u32 VAR_10;
 int VAR_11, VAR_12;


 VAR_12 = 0;
 switch (VAR_9) {
 case 129:
 case 128:
  if (VAR_8->input_clock == VAR_4)
   VAR_12 = 1;
  break;
 case 130:
  if (VAR_8->input_clock == VAR_6)
   VAR_12 = 1;
  break;
 default:
  FUNC_1(VAR_8->card->dev,
   "Digital mode not supported: %d\n", VAR_9);
  return -VAR_7;
 }

 FUNC_5(&VAR_8->lock);

 if (VAR_12) {
  VAR_8->sample_rate = 48000;
  FUNC_4(VAR_8, VAR_5);
 }


 VAR_10 = FUNC_3(VAR_8->comm_page->control_register);
 VAR_10 &= VAR_1;


 switch (VAR_9) {
 case 129:
  VAR_10 |= VAR_3;
  break;
 case 128:

  break;
 case 130:
  VAR_10 |= VAR_0;
  VAR_10 &= ~VAR_2;
  break;
 }

 VAR_11 = FUNC_7(VAR_8, VAR_10, FUNC_2(VAR_8), 1);
 FUNC_6(&VAR_8->lock);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_8->digital_mode = VAR_9;

 FUNC_0(VAR_8->card->dev, "set_digital_mode(%d)\n", VAR_8->digital_mode);
 return VAR_12;
}
