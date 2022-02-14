
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int bad_board; int input_clock_types; int digital_modes; int dsp_code_to_load; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_12, u16 VAR_13, u16 VAR_14)
{
 int VAR_15;

 if (FUNC_3((VAR_14 & 0xfff0) != VAR_11))
  return -VAR_8;

 if ((VAR_15 = FUNC_1(VAR_12))) {
  FUNC_0(VAR_12->card->dev,
   "init_hw - could not initialize DSP comm page\n");
  return VAR_15;
 }

 VAR_12->device_id = VAR_13;
 VAR_12->subdevice_id = VAR_14;
 VAR_12->bad_board = 1;
 VAR_12->input_clock_types =
  VAR_5 | VAR_6 |
  VAR_7 | VAR_4;
 VAR_12->digital_modes =
  VAR_3 |
  VAR_2 |
  VAR_1;


 if (VAR_12->device_id == VAR_0)
  VAR_12->dsp_code_to_load = VAR_10;
 else
  VAR_12->dsp_code_to_load = VAR_9;

 if ((VAR_15 = FUNC_2(VAR_12)) < 0)
  return VAR_15;
 VAR_12->bad_board = 0;

 return VAR_15;
}
