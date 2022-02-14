
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct snd_cs46xx {TYPE_2__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct TYPE_3__ {int member_3; int member_2; int member_1; int member_0; } ;
struct dsp_src_task_scb {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; unsigned int member_8; unsigned int member_9; int member_11; int member_12; int member_13; int member_14; int member_21; unsigned int member_22; TYPE_1__ member_23; scalar_t__ member_20; int member_19; int member_18; int member_17; int member_16; int member_15; scalar_t__ member_10; } ;
struct dsp_spos_instance {int * s16_up; int dac_volume_left; int dac_volume_right; } ;
struct dsp_scb_descriptor {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*,int,int) ;
 struct dsp_scb_descriptor* FUNC_1 (struct snd_cs46xx*,char*,int *,int ,int *,struct dsp_scb_descriptor*,int) ;
 struct dsp_scb_descriptor* FUNC_2 (struct snd_cs46xx*,char*,int *,int ,char*,struct dsp_scb_descriptor*,int) ;
 int * FUNC_3 (struct snd_cs46xx*,char*,int ) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int) ;

struct dsp_scb_descriptor *
FUNC_7(struct snd_cs46xx * VAR_5, char * VAR_6,
          int VAR_7,
                               u16 VAR_8,
                               u16 VAR_9, u32 VAR_10,
                               struct dsp_scb_descriptor * VAR_11,
                               int VAR_12,
                        int VAR_13)
{

 struct dsp_spos_instance * VAR_14 = VAR_5->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_15;
 unsigned int VAR_16, VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19, VAR_20;

 FUNC_4(VAR_5->card->dev, "dsp_spos: setting %s rate to %u\n",
  VAR_6, VAR_7);
 VAR_16 = VAR_7 << 16;
 VAR_18 = VAR_16 / 48000;
 VAR_16 -= VAR_18 * 48000;
 VAR_16 <<= 10;
 VAR_18 <<= 10;
 VAR_17 = VAR_16 / 48000;
 VAR_18 += VAR_17;
 VAR_16 -= VAR_17 * 48000;
 VAR_19 = VAR_16 / VAR_0;
 VAR_16 -= VAR_19 * VAR_0;
 VAR_20 = VAR_16;

 {
  struct dsp_src_task_scb VAR_21 = {
   0x0028,0x00c8,
   0x5555,0x0000,
   0x0000,0x0000,
   VAR_8,1,
   VAR_19,VAR_20,
   VAR_3 + VAR_1,
   0x0000,VAR_9,
   0x0,
   0x080,(VAR_9 + (24 * 4)),
   0,0,
   0,0,
   VAR_3 + VAR_2,
   VAR_8 << 0x10,
   VAR_18,
   {
    0xffff - VAR_14->dac_volume_right,0xffff - VAR_14->dac_volume_left,
    0xffff - VAR_14->dac_volume_right,0xffff - VAR_14->dac_volume_left
   }
  };

  if (VAR_14->s16_up == ((void*)0)) {
   VAR_14->s16_up = FUNC_3 (VAR_5,"S16_UPSRC",
         VAR_4);

   if (VAR_14->s16_up == ((void*)0)) {
    FUNC_5(VAR_5->card->dev,
     "dsp_spos: symbol S16_UPSRC not found\n");
    return ((void*)0);
   }
  }


  FUNC_0 (VAR_5,VAR_8,8);
  FUNC_0 (VAR_5,VAR_9,32);

  if (VAR_13) {


   FUNC_6(VAR_7 != 48000);

   VAR_15 = FUNC_2(VAR_5,VAR_6,(u32 *)&VAR_21,
           VAR_10,"DMAREADER",VAR_11,
           VAR_12);
  } else {
   VAR_15 = FUNC_1(VAR_5,VAR_6,(u32 *)&VAR_21,
            VAR_10,VAR_14->s16_up,VAR_11,
            VAR_12);
  }


 }

 return VAR_15;
}
