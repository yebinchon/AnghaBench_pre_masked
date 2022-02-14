
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ input_clock; int sample_rate; TYPE_1__* comm_page; TYPE_2__* card; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {void* sample_rate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct echoaudio*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_4, u32 VAR_5)
{
 if (FUNC_5(VAR_5 < 8000 || VAR_5 > 50000))
  return -VAR_2;



 if (VAR_4->input_clock != VAR_1) {
  FUNC_3(VAR_4->card->dev,
    "Cannot set sample rate - clock not set to CLK_CLOCKININTERNAL\n");
  VAR_4->comm_page->sample_rate = FUNC_1(VAR_5);
  VAR_4->sample_rate = VAR_5;
  return 0;
 }

 if (FUNC_6(VAR_4))
  return -VAR_3;

 FUNC_2(VAR_4->card->dev, "set_sample_rate(%d)\n", VAR_5);
 VAR_4->sample_rate = VAR_5;
 VAR_4->comm_page->sample_rate = FUNC_1(VAR_5);
 FUNC_0(VAR_4);
 return FUNC_4(VAR_4, VAR_0);
}
