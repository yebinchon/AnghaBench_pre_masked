
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; TYPE_1__* comm_page; TYPE_2__* card; scalar_t__ sample_rate; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int input_clock; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (struct echoaudio*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_6, u16 VAR_7)
{
 u16 VAR_8;
 u32 VAR_9;

 VAR_9 = 0;
 switch (VAR_7) {
 case 131:
  VAR_9 = VAR_6->sample_rate;
  VAR_8 = VAR_2;
  break;
 case 130:
  VAR_8 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 case 129:
  VAR_8 = VAR_4;
  break;
 default:
  FUNC_2(VAR_6->card->dev,
   "Input clock 0x%x not supported for Layla24\n",
   VAR_7);
  return -VAR_1;
 }
 VAR_6->input_clock = VAR_7;

 VAR_6->comm_page->input_clock = FUNC_1(VAR_8);
 FUNC_0(VAR_6);
 FUNC_3(VAR_6, VAR_0);

 if (VAR_9)
  FUNC_4(VAR_6, VAR_9);

 return 0;
}
