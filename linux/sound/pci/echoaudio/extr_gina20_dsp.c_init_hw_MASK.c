
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int device_id; int subdevice_id; int bad_board; int asic_loaded; int input_clock_types; int clock_state; int spdif_status; int dsp_code_to_load; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_7, u16 VAR_8, u16 VAR_9)
{
 int VAR_10;

 if (FUNC_3((VAR_9 & 0xfff0) != VAR_6))
  return -VAR_2;

 if ((VAR_10 = FUNC_1(VAR_7))) {
  FUNC_0(VAR_7->card->dev,
   "init_hw - could not initialize DSP comm page\n");
  return VAR_10;
 }

 VAR_7->device_id = VAR_8;
 VAR_7->subdevice_id = VAR_9;
 VAR_7->bad_board = 1;
 VAR_7->dsp_code_to_load = VAR_3;
 VAR_7->spdif_status = VAR_5;
 VAR_7->clock_state = VAR_4;


 VAR_7->asic_loaded = 1;
 VAR_7->input_clock_types = VAR_0 |
  VAR_1;

 if ((VAR_10 = FUNC_2(VAR_7)) < 0)
  return VAR_10;
 VAR_7->bad_board = 0;

 return VAR_10;
}
