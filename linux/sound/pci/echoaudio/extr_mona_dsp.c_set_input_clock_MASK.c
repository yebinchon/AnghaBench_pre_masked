
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; TYPE_2__* card; int digital_mode; int lock; int sample_rate; TYPE_1__* comm_page; int opencount; } ;
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
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct echoaudio*,int) ;
 int FUNC_8 (struct echoaudio*,int,int) ;

__attribute__((used)) static int FUNC_9(struct echoaudio *VAR_10, u16 VAR_11)
{
 u32 VAR_12, VAR_13;
 int VAR_14;



 if (FUNC_0(&VAR_10->opencount))
  return -VAR_1;


 VAR_12 = FUNC_3(VAR_10->comm_page->control_register) &
  VAR_4;
 VAR_13 = FUNC_3(VAR_10->comm_page->status_clocks);

 switch (VAR_11) {
 case 130:
  VAR_10->input_clock = 130;
  return FUNC_4(VAR_10, VAR_10->sample_rate);
 case 129:
  if (VAR_10->digital_mode == VAR_0)
   return -VAR_1;
  FUNC_6(&VAR_10->lock);
  VAR_14 = FUNC_7(VAR_10, VAR_13 &
      VAR_5);
  FUNC_5(&VAR_10->lock);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_12 |= VAR_8;
  if (VAR_13 & VAR_5)
   VAR_12 |= VAR_7;
  else
   VAR_12 &= ~VAR_7;
  break;
 case 128:
  FUNC_6(&VAR_10->lock);
  VAR_14 = FUNC_7(VAR_10, VAR_13 &
      VAR_6);
  FUNC_5(&VAR_10->lock);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_12 |= VAR_9;
  if (VAR_13 & VAR_6)
   VAR_12 |= VAR_7;
  else
   VAR_12 &= ~VAR_7;
  break;
 case 131:
  FUNC_1(VAR_10->card->dev, "Set Mona clock to ADAT\n");
  if (VAR_10->digital_mode != VAR_0)
   return -VAR_1;
  VAR_12 |= VAR_3;
  VAR_12 &= ~VAR_7;
  break;
 default:
  FUNC_2(VAR_10->card->dev,
   "Input clock 0x%x not supported for Mona\n", VAR_11);
  return -VAR_2;
 }

 VAR_10->input_clock = VAR_11;
 return FUNC_8(VAR_10, VAR_12, 1);
}
