
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {int output_clock; int input_clock; int phantom_power; int professional_spdif; int digital_mode; scalar_t__ meters_enabled; int sample_rate; int * input_gain; int ** monitor_gain; int ** vmixer_gain; int * output_gain; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int handshake; int gd_spdif_status; int gd_clock_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*) ;
 int FUNC_5 (struct echoaudio*) ;
 int FUNC_6 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_7 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_8 (struct echoaudio*,int ) ;
 int FUNC_9 (struct echoaudio*,int,int ) ;
 int FUNC_10 (struct echoaudio*,int,int,int ) ;
 scalar_t__ FUNC_11 (struct echoaudio*,int ) ;
 int FUNC_12 (struct echoaudio*,int,int ) ;
 scalar_t__ FUNC_13 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_14 (struct echoaudio*,int ) ;
 int FUNC_15 (struct echoaudio*,int ) ;
 int FUNC_16 (struct echoaudio*,int,int,int ) ;
 int FUNC_17 (struct echoaudio*) ;
 int FUNC_18 (struct echoaudio*) ;
 scalar_t__ FUNC_19 (struct echoaudio*) ;
 scalar_t__ FUNC_20 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_21(struct echoaudio *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 if ((VAR_8 = FUNC_0(VAR_5)) < 0)
  return VAR_8;


 VAR_5->comm_page->gd_clock_state = VAR_3;
 VAR_5->comm_page->gd_spdif_status = VAR_4;
 VAR_5->comm_page->handshake = FUNC_2(0xffffffff);


 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_5); VAR_6++) {
  VAR_8 = FUNC_12(VAR_5, VAR_6, VAR_5->output_gain[VAR_6]);
  if (VAR_8 < 0)
   return VAR_8;
 }
 VAR_8 = FUNC_18(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_17(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_15(VAR_5, VAR_5->sample_rate);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5->meters_enabled) {
  VAR_8 = FUNC_6(VAR_5, VAR_0);
  if (VAR_8 < 0)
   return VAR_8;
 }
 if (FUNC_20(VAR_5) < 0)
  return -VAR_2;
 FUNC_1(VAR_5);
 if (FUNC_6(VAR_5, VAR_1) < 0)
  return -VAR_2;

 return 0;
}
