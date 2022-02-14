
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; TYPE_2__* card; int digital_mode; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int status_clocks; int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_9, u16 VAR_10)
{
 u32 VAR_11, VAR_12;



 VAR_11 = FUNC_1(VAR_9->comm_page->control_register) &
  VAR_4;
 VAR_12 = FUNC_1(VAR_9->comm_page->status_clocks);

 switch (VAR_10) {
 case 129:
  VAR_9->input_clock = 129;
  return FUNC_2(VAR_9, VAR_9->sample_rate);
 case 128:
  if (VAR_9->digital_mode == VAR_0)
   return -VAR_1;
  VAR_11 |= VAR_8;
  if (VAR_12 & VAR_5)
   VAR_11 |= VAR_6;
  else
   VAR_11 &= ~VAR_6;
  break;
 case 132:
  if (VAR_9->digital_mode != VAR_0)
   return -VAR_1;
  VAR_11 |= VAR_3;
  VAR_11 &= ~VAR_6;
  break;
 case 131:
  VAR_11 |= VAR_7;
  VAR_11 &= ~VAR_6;
  break;
 case 130:
  VAR_11 |= VAR_7 | VAR_6;
  break;
 default:
  FUNC_0(VAR_9->card->dev,
   "Input clock 0x%x not supported for Gina24\n", VAR_10);
  return -VAR_2;
 }

 VAR_9->input_clock = VAR_10;
 return FUNC_3(VAR_9, VAR_11, 1);
}
