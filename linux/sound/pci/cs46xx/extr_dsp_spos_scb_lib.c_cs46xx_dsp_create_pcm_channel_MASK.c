
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {int reg_lock; TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int nsrc_scb; int* src_scb_slots; scalar_t__ the_null_scb; struct dsp_pcm_channel_descriptor* pcm_channels; int npcm_channels; struct dsp_scb_descriptor* asynch_tx_scb; struct dsp_scb_descriptor* center_lfe_mix_scb; struct dsp_scb_descriptor* rear_mix_scb; struct dsp_scb_descriptor* master_mix_scb; } ;
struct dsp_scb_descriptor {scalar_t__ sub_list_ptr; int ref_count; } ;
struct dsp_pcm_channel_descriptor {int active; int sample_rate; int src_slot; int unlinked; int pcm_slot; struct dsp_scb_descriptor* mixer_scb; void* private_data; struct dsp_scb_descriptor* src_scb; struct dsp_scb_descriptor* pcm_reader_scb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int ,int,int,int,int *,int ) ;
 struct dsp_scb_descriptor* FUNC_1 (struct snd_cs46xx*,char*,int,int ,int ,int,struct dsp_scb_descriptor*,int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 struct dsp_scb_descriptor* FUNC_4 (struct snd_cs46xx*,scalar_t__) ;
 int * VAR_6 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int * VAR_7 ;
 int * VAR_8 ;

struct dsp_pcm_channel_descriptor *
FUNC_10 (struct snd_cs46xx * VAR_9,
          u32 VAR_10, void * VAR_11,
          u32 VAR_12,
          int VAR_13)
{
 struct dsp_spos_instance * VAR_14 = VAR_9->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_15 = ((void*)0), * VAR_16, * VAR_17 = ((void*)0);
 struct dsp_scb_descriptor * VAR_18 = ((void*)0);


 char VAR_19[VAR_2];
 int VAR_20, VAR_21 = -1, VAR_22, VAR_23 = -1, VAR_24 = 0;
 unsigned long VAR_25;

 switch (VAR_13) {
 case 130:
  VAR_17 = VAR_14->master_mix_scb;
  break;
 case 129:
  VAR_17 = VAR_14->rear_mix_scb;
  break;
 case 131:
  VAR_17 = VAR_14->center_lfe_mix_scb;
  break;
 case 128:

  FUNC_5();
  break;
 case 132:
  if (FUNC_6(!VAR_14->asynch_tx_scb))
   return ((void*)0);
  VAR_17 = VAR_14->asynch_tx_scb;




  if (VAR_10 == 48000) {
   FUNC_2(VAR_9->card->dev, "IEC958 pass through\n");

   VAR_24 = 1;
  }
  break;
 default:
  FUNC_5();
  return ((void*)0);
 }

 if (!VAR_10) VAR_10 = 44100;


 for (VAR_20 = 0; VAR_20 < VAR_1 &&
       (VAR_21 == -1 || VAR_15 == ((void*)0)); ++VAR_20) {



  if (VAR_20 == VAR_0) continue;

  if (VAR_14->pcm_channels[VAR_20].active) {
   if (!VAR_15 &&
       VAR_14->pcm_channels[VAR_20].sample_rate == VAR_10 &&
       VAR_14->pcm_channels[VAR_20].mixer_scb == VAR_17) {
    VAR_15 = VAR_14->pcm_channels[VAR_20].src_scb;
    VAR_14->pcm_channels[VAR_20].src_scb->ref_count ++;
    VAR_23 = VAR_14->pcm_channels[VAR_20].src_slot;
   }
  } else if (VAR_21 == -1) {
   VAR_21 = VAR_20;
  }
 }

 if (VAR_21 == -1) {
  FUNC_3(VAR_9->card->dev, "dsp_spos: no free PCM channel\n");
  return ((void*)0);
 }

 if (VAR_15 == ((void*)0)) {
  if (VAR_14->nsrc_scb >= VAR_3) {
   FUNC_3(VAR_9->card->dev,
    "dsp_spos: to many SRC instances\n!");
   return ((void*)0);
  }


  for (VAR_20 = 0; VAR_20 < VAR_3; ++VAR_20) {
   if (VAR_14->src_scb_slots[VAR_20] == 0) {
    VAR_23 = VAR_20;
    VAR_14->src_scb_slots[VAR_20] = 1;
    break;
   }
  }
  if (FUNC_6(VAR_23 == -1))
   return ((void*)0);


  if (VAR_17->sub_list_ptr == VAR_14->the_null_scb) {
   VAR_18 = VAR_17;
   VAR_22 = VAR_5;
  } else {
   VAR_18 = FUNC_4(VAR_9,VAR_17->sub_list_ptr);
   VAR_22 = VAR_4;
  }

  FUNC_7 (VAR_19,VAR_2,"SrcTask_SCB%d",VAR_23);

  FUNC_2(VAR_9->card->dev,
   "dsp_spos: creating SRC \"%s\"\n", VAR_19);
  VAR_15 = FUNC_1(VAR_9,VAR_19,
        VAR_10,
        VAR_8[VAR_23],
        VAR_7[VAR_23],

        0x400 + (VAR_23 * 0x10) ,
        VAR_18,
        VAR_22,
        VAR_24);

  if (!VAR_15) {
   FUNC_3(VAR_9->card->dev,
    "dsp_spos: failed to create SRCtaskSCB\n");
   return ((void*)0);
  }



  VAR_14->nsrc_scb ++;
 }


 FUNC_7 (VAR_19,VAR_2,"PCMReader_SCB%d",VAR_21);

 FUNC_2(VAR_9->card->dev, "dsp_spos: creating PCM \"%s\" (%d)\n",
  VAR_19, VAR_13);

 VAR_16 = FUNC_0(VAR_9,VAR_19,
         VAR_6[VAR_21],

         (VAR_21 * 0x10) + 0x200,
         VAR_21,
         VAR_12,
                           ((void*)0),
                           0
                           );

 if (!VAR_16) {
  FUNC_3(VAR_9->card->dev,
   "dsp_spos: failed to create PCMreaderSCB\n");
  return ((void*)0);
 }

 FUNC_8(&VAR_9->reg_lock, VAR_25);
 VAR_14->pcm_channels[VAR_21].sample_rate = VAR_10;
 VAR_14->pcm_channels[VAR_21].pcm_reader_scb = VAR_16;
 VAR_14->pcm_channels[VAR_21].src_scb = VAR_15;
 VAR_14->pcm_channels[VAR_21].unlinked = 1;
 VAR_14->pcm_channels[VAR_21].private_data = VAR_11;
 VAR_14->pcm_channels[VAR_21].src_slot = VAR_23;
 VAR_14->pcm_channels[VAR_21].active = 1;
 VAR_14->pcm_channels[VAR_21].pcm_slot = VAR_21;
 VAR_14->pcm_channels[VAR_21].mixer_scb = VAR_17;
 VAR_14->npcm_channels ++;
 FUNC_9(&VAR_9->reg_lock, VAR_25);

 return (VAR_14->pcm_channels + VAR_21);
}
