
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int bad_board; int has_midi; int input_clock_types; int digital_modes; int dsp_code_to_load; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_10, u16 VAR_11, u16 VAR_12)
{
 int VAR_13;

 if (FUNC_4((VAR_12 & 0xfff0) != VAR_9))
  return -VAR_7;

 if ((VAR_13 = FUNC_1(VAR_10))) {
  FUNC_0(VAR_10->card->dev,
   "init_hw - could not initialize DSP comm page\n");
  return VAR_13;
 }

 VAR_10->device_id = VAR_11;
 VAR_10->subdevice_id = VAR_12;
 VAR_10->bad_board = 1;
 VAR_10->has_midi = 1;
 VAR_10->dsp_code_to_load = VAR_8;
 VAR_10->input_clock_types =
  VAR_4 | VAR_5 |
  VAR_6 | VAR_3;
 VAR_10->digital_modes =
  VAR_2 |
  VAR_1 |
  VAR_0;

 if ((VAR_13 = FUNC_3(VAR_10)) < 0)
  return VAR_13;
 VAR_10->bad_board = 0;

 if ((VAR_13 = FUNC_2(VAR_10)) < 0)
  return VAR_13;

 return VAR_13;
}
