
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_4__ {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_3__ {int member_3; int member_2; int member_1; int member_0; } ;
struct dsp_codec_output_scb {int member_10; int member_11; int member_13; int member_12; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;


 int VAR_0 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,int ,char*,struct dsp_scb_descriptor*,int) ;

struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_1, char * VAR_2,
                                u16 VAR_3, u16 VAR_4, u16 VAR_5,
                                u32 VAR_6, struct dsp_scb_descriptor * VAR_7,
                                int VAR_8)
{
 struct dsp_scb_descriptor * VAR_9;

 struct dsp_codec_output_scb VAR_10 = {
  { 0,
    0,
    0,
    0
  },
  {
   0,
   0,
   0,
   0,
   0
  },
  0,0,
  0,VAR_0,
  0,
  0,
  VAR_3,VAR_4,
  0x0000,0x0080,
  0,VAR_5
 };


 VAR_9 = FUNC_0(VAR_1,VAR_2,(u32 *)&VAR_10,
         VAR_6,"S16_CODECOUTPUTTASK",VAR_7,
         VAR_8);

 return VAR_9;
}
