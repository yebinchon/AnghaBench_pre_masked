
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {size_t stream; int runtime; } ;
struct davinci_mcasp_ruledata {int serializers; struct davinci_mcasp* mcasp; } ;
struct davinci_mcasp {int tdm_slots; scalar_t__ op_mode; int num_serializer; int* serial_dir; int channels; scalar_t__ bclk_div; scalar_t__ sysclk_freq; scalar_t__ bclk_master; scalar_t__ slot_width; scalar_t__ max_format_width; int * chconstr; scalar_t__* tdm_mask; struct snd_pcm_substream** substreams; struct davinci_mcasp_ruledata* ruledata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,struct davinci_mcasp_ruledata*,int ,int) ;
 struct davinci_mcasp* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_14,
     struct snd_soc_dai *VAR_15)
{
 struct davinci_mcasp *VAR_16 = FUNC_4(VAR_15);
 struct davinci_mcasp_ruledata *VAR_17 =
     &VAR_16->ruledata[VAR_14->stream];
 u32 VAR_18 = 0;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22 = VAR_16->tdm_slots;


 if (VAR_16->substreams[VAR_14->stream])
  return -VAR_1;

 VAR_16->substreams[VAR_14->stream] = VAR_14;

 if (VAR_16->tdm_mask[VAR_14->stream])
  VAR_22 = FUNC_0(VAR_16->tdm_mask[VAR_14->stream]);

 if (VAR_16->op_mode == VAR_0)
  return 0;





 if (VAR_14->stream == VAR_7)
  VAR_20 = VAR_8;
 else
  VAR_20 = VAR_2;

 for (VAR_19 = 0; VAR_19 < VAR_16->num_serializer; VAR_19++) {
  if (VAR_16->serial_dir[VAR_19] == VAR_20)
   VAR_18++;
 }
 VAR_17->serializers = VAR_18;
 VAR_17->mcasp = VAR_16;
 VAR_18 *= VAR_22;







 if (VAR_16->channels && VAR_16->channels < VAR_18 &&
     VAR_17->serializers == 1)
  VAR_18 = VAR_16->channels;




 if (VAR_18 < VAR_22)
  VAR_18 = VAR_22;

 FUNC_2(VAR_14->runtime,
         VAR_3,
         0, VAR_18);

 FUNC_1(VAR_14->runtime,
       0, VAR_3,
       &VAR_16->chconstr[VAR_14->stream]);

 if (VAR_16->max_format_width) {




  VAR_21 = FUNC_3(VAR_14->runtime, 0,
       VAR_4,
       VAR_10,
       VAR_17,
       VAR_4, -1);
  if (VAR_21)
   return VAR_21;
 }
 else if (VAR_16->slot_width) {

  VAR_21 = FUNC_3(VAR_14->runtime, 0,
       VAR_4,
       VAR_13,
       VAR_17,
       VAR_4, -1);
  if (VAR_21)
   return VAR_21;
 }





 if (VAR_16->bclk_master && VAR_16->bclk_div == 0 && VAR_16->sysclk_freq) {
  VAR_21 = FUNC_3(VAR_14->runtime, 0,
       VAR_6,
       VAR_12,
       VAR_17,
       VAR_4, -1);
  if (VAR_21)
   return VAR_21;
  VAR_21 = FUNC_3(VAR_14->runtime, 0,
       VAR_4,
       VAR_9,
       VAR_17,
       VAR_6, -1);
  if (VAR_21)
   return VAR_21;
 }

 FUNC_3(VAR_14->runtime, 0,
       VAR_5,
       VAR_11, ((void*)0),
       VAR_5, -1);

 return 0;
}
