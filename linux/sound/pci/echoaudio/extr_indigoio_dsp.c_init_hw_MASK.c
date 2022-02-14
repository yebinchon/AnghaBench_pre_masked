
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int bad_board; int asic_loaded; int input_clock_types; int dsp_code_to_load; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_4, u16 VAR_5, u16 VAR_6)
{
 int VAR_7;

 if (FUNC_3((VAR_6 & 0xfff0) != VAR_3))
  return -VAR_1;

 if ((VAR_7 = FUNC_1(VAR_4))) {
  FUNC_0(VAR_4->card->dev,
   "init_hw - could not initialize DSP comm page\n");
  return VAR_7;
 }

 VAR_4->device_id = VAR_5;
 VAR_4->subdevice_id = VAR_6;
 VAR_4->bad_board = 1;
 VAR_4->dsp_code_to_load = VAR_2;


 VAR_4->asic_loaded = 1;
 VAR_4->input_clock_types = VAR_0;

 if ((VAR_7 = FUNC_2(VAR_4)) < 0)
  return VAR_7;
 VAR_4->bad_board = 0;

 return VAR_7;
}
