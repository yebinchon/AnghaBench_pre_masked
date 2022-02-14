
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
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_5, u16 VAR_6, u16 VAR_7)
{
 int VAR_8;

 if (FUNC_3((VAR_7 & 0xfff0) != VAR_0))
  return -VAR_3;

 if ((VAR_8 = FUNC_1(VAR_5))) {
  FUNC_0(VAR_5->card->dev,
   "init_hw: could not initialize DSP comm page\n");
  return VAR_8;
 }

 VAR_5->device_id = VAR_6;
 VAR_5->subdevice_id = VAR_7;
 VAR_5->bad_board = 1;
 VAR_5->dsp_code_to_load = VAR_4;


 VAR_5->asic_loaded = 1;
 VAR_5->input_clock_types = VAR_2 |
  VAR_1;

 if ((VAR_8 = FUNC_2(VAR_5)) < 0)
  return VAR_8;
 VAR_5->bad_board = 0;

 return VAR_8;
}
