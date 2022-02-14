
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {int dummy; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; } ;
struct TYPE_6__ {int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int member_3; int member_2; int member_1; int member_0; } ;
struct dsp_mix_only_scb {int member_7; TYPE_1__ member_9; int member_8; scalar_t__ member_6; int member_5; int member_4; int member_3; int member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int *,int ,char*,struct dsp_scb_descriptor*,int) ;

struct dsp_scb_descriptor *
FUNC_1(struct snd_cs46xx * VAR_2, char * VAR_3,
                               u16 VAR_4, u32 VAR_5,
                               struct dsp_scb_descriptor * VAR_6,
                               int VAR_7)
{
 struct dsp_scb_descriptor * VAR_8;

 struct dsp_mix_only_scb VAR_9 = {
          { 0,
               0,
              VAR_4,
              0
             },
  {
            0,
            0,
            0,
            0,
            0x00000080
  },
          0,0,
          0,0,
          VAR_1 + VAR_0,
          (VAR_4 + (16 * 4)) << 0x10,
          0,
  {
           0x8000,0x8000,
           0x8000,0x8000
  }
 };


 VAR_8 = FUNC_0(VAR_2,VAR_3,(u32 *)&VAR_9,
         VAR_5,"S16_MIX",VAR_6,
         VAR_7);
 return VAR_8;
}
