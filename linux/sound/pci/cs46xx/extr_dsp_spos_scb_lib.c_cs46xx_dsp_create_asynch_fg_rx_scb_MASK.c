
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_input_volume_left; int spdif_input_volume_right; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_2__ {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct dsp_asynch_fg_rx_scb {int member_0; int member_1; int member_2; int member_3; int member_13; int member_14; int member_15; int member_19; int member_18; int member_17; int member_16; int member_12; int member_11; int member_10; int member_9; TYPE_1__ member_8; int member_7; int member_6; int member_5; int member_4; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,int ,char*,struct dsp_scb_descriptor*,int) ;

struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_2, char * VAR_3, u32 VAR_4,
                                   u16 VAR_5,
                                   u16 VAR_6,
                                   struct dsp_scb_descriptor * VAR_7,
                                   int VAR_8)
{
 struct dsp_spos_instance * VAR_9 = VAR_2->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_10;

 struct dsp_asynch_fg_rx_scb VAR_11 = {
  0xfe00,0x01ff,
  0x0064,0x001c,

  0,VAR_5,
  0,0,
  {
   0,
   0,
   0,
   0,
   0
  },

  0,0,
  0,VAR_4,

  VAR_0 |
        VAR_1,
  ( (VAR_6 + (16 * 4)) << 0x10),




  0x18000000,


  0xffff - VAR_9->spdif_input_volume_right,0xffff - VAR_9->spdif_input_volume_left,
  0xffff - VAR_9->spdif_input_volume_right,0xffff - VAR_9->spdif_input_volume_left,
 };

 VAR_10 = FUNC_0(VAR_2,VAR_3,(u32 *)&VAR_11,
         VAR_4,"ASYNCHFGRXCODE",VAR_7,
         VAR_8);

 return VAR_10;
}
