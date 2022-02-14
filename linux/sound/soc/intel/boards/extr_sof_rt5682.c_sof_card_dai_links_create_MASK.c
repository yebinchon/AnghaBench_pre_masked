
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link_component {char* dai_name; char* name; } ;
struct snd_soc_dai_link {char* name; int id; int num_codecs; int nonatomic; int dpcm_playback; int dpcm_capture; int no_pcm; int num_cpus; int ignore_pmdown_time; int ignore_suspend; struct snd_soc_dai_link_component* cpus; int init; void* num_platforms; void* platforms; struct snd_soc_dai_link_component* codecs; int * ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int num_links; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct device*,int ,char*,int) ;
 void* FUNC_2 (struct device*,int,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static struct snd_soc_dai_link *FUNC_3(struct device *VAR_14,
         int VAR_15,
         int VAR_16,
         int VAR_17,
         int VAR_18)
{
 struct snd_soc_dai_link_component *VAR_19;
 struct snd_soc_dai_link_component *VAR_20;
 struct snd_soc_dai_link *VAR_21;
 int VAR_22, VAR_23 = 0;

 VAR_21 = FUNC_2(VAR_14, sizeof(struct snd_soc_dai_link) *
        VAR_8, VAR_0);
 VAR_20 = FUNC_2(VAR_14, sizeof(struct snd_soc_dai_link_component) *
        VAR_8, VAR_0);
 if (!VAR_21 || !VAR_20)
  goto devm_err;


 VAR_21[VAR_23].name = FUNC_1(VAR_14, VAR_0,
     "SSP%d-Codec", VAR_15);
 if (!VAR_21[VAR_23].name)
  goto devm_err;

 VAR_21[VAR_23].id = VAR_23;
 VAR_21[VAR_23].codecs = VAR_7;
 VAR_21[VAR_23].num_codecs = FUNC_0(VAR_7);
 VAR_21[VAR_23].platforms = VAR_6;
 VAR_21[VAR_23].num_platforms = FUNC_0(VAR_6);
 VAR_21[VAR_23].init = VAR_10;
 VAR_21[VAR_23].ops = &VAR_11;
 VAR_21[VAR_23].nonatomic = 1;
 VAR_21[VAR_23].dpcm_playback = 1;
 VAR_21[VAR_23].dpcm_capture = 1;
 VAR_21[VAR_23].no_pcm = 1;
 VAR_21[VAR_23].cpus = &VAR_20[VAR_23];
 VAR_21[VAR_23].num_cpus = 1;
 if (VAR_4) {
  VAR_21[VAR_23].cpus->dai_name = FUNC_1(VAR_14, VAR_0,
         "ssp%d-port",
         VAR_15);
  if (!VAR_21[VAR_23].cpus->dai_name)
   goto devm_err;
 } else {
  VAR_21[VAR_23].ignore_pmdown_time = 1;
  VAR_21[VAR_23].cpus->dai_name = FUNC_1(VAR_14, VAR_0,
         "SSP%d Pin",
         VAR_15);
  if (!VAR_21[VAR_23].cpus->dai_name)
   goto devm_err;
 }
 VAR_23++;


 if (VAR_17 > 0) {

  VAR_21[VAR_23].name = "dmic01";
  VAR_21[VAR_23].cpus = &VAR_20[VAR_23];
  VAR_21[VAR_23].cpus->dai_name = "DMIC01 Pin";
  VAR_21[VAR_23].init = VAR_3;
  if (VAR_17 > 1) {

   VAR_21[VAR_23 + 1].name = "dmic16k";
   VAR_21[VAR_23 + 1].cpus = &VAR_20[VAR_23 + 1];
   VAR_21[VAR_23 + 1].cpus->dai_name = "DMIC16k Pin";
   VAR_17 = 2;
  }
 }

 for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
  VAR_21[VAR_23].id = VAR_23;
  VAR_21[VAR_23].num_cpus = 1;
  VAR_21[VAR_23].codecs = VAR_2;
  VAR_21[VAR_23].num_codecs = FUNC_0(VAR_2);
  VAR_21[VAR_23].platforms = VAR_6;
  VAR_21[VAR_23].num_platforms = FUNC_0(VAR_6);
  VAR_21[VAR_23].ignore_suspend = 1;
  VAR_21[VAR_23].dpcm_capture = 1;
  VAR_21[VAR_23].no_pcm = 1;
  VAR_23++;
 }


 if (VAR_18 > 0) {
  VAR_19 = FUNC_2(VAR_14,
       sizeof(struct snd_soc_dai_link_component) *
       VAR_18, VAR_0);
  if (!VAR_19)
   goto devm_err;
 }
 for (VAR_22 = 1; VAR_22 <= VAR_18; VAR_22++) {
  VAR_21[VAR_23].name = FUNC_1(VAR_14, VAR_0,
      "iDisp%d", VAR_22);
  if (!VAR_21[VAR_23].name)
   goto devm_err;

  VAR_21[VAR_23].id = VAR_23;
  VAR_21[VAR_23].cpus = &VAR_20[VAR_23];
  VAR_21[VAR_23].num_cpus = 1;
  VAR_21[VAR_23].cpus->dai_name = FUNC_1(VAR_14, VAR_0,
         "iDisp%d Pin", VAR_22);
  if (!VAR_21[VAR_23].cpus->dai_name)
   goto devm_err;

  VAR_19[VAR_22 - 1].name = "ehdaudio0D2";
  VAR_19[VAR_22 - 1].dai_name = FUNC_1(VAR_14,
          VAR_0,
          "intel-hdmi-hifi%d",
          VAR_22);
  if (!VAR_19[VAR_22 - 1].dai_name)
   goto devm_err;

  VAR_21[VAR_23].codecs = &VAR_19[VAR_22 - 1];
  VAR_21[VAR_23].num_codecs = 1;
  VAR_21[VAR_23].platforms = VAR_6;
  VAR_21[VAR_23].num_platforms = FUNC_0(VAR_6);
  VAR_21[VAR_23].init = VAR_9;
  VAR_21[VAR_23].dpcm_playback = 1;
  VAR_21[VAR_23].no_pcm = 1;
  VAR_23++;
 }


 if (VAR_12 & VAR_1) {
  VAR_21[VAR_23].name = FUNC_1(VAR_14, VAR_0,
      "SSP%d-Codec", VAR_16);
  if (!VAR_21[VAR_23].name)
   goto devm_err;

  VAR_21[VAR_23].id = VAR_23;
  VAR_21[VAR_23].codecs = VAR_5;
  VAR_21[VAR_23].num_codecs = FUNC_0(VAR_5);
  VAR_21[VAR_23].platforms = VAR_6;
  VAR_21[VAR_23].num_platforms = FUNC_0(VAR_6);
  VAR_21[VAR_23].init = VAR_13,
  VAR_21[VAR_23].nonatomic = 1;
  VAR_21[VAR_23].dpcm_playback = 1;
  VAR_21[VAR_23].no_pcm = 1;
  VAR_21[VAR_23].cpus = &VAR_20[VAR_23];
  VAR_21[VAR_23].num_cpus = 1;
  if (VAR_4) {
   VAR_21[VAR_23].cpus->dai_name = FUNC_1(VAR_14, VAR_0,
          "ssp%d-port",
          VAR_16);
   if (!VAR_21[VAR_23].cpus->dai_name)
    goto devm_err;

  } else {
   VAR_21[VAR_23].cpus->dai_name = FUNC_1(VAR_14, VAR_0,
          "SSP%d Pin",
          VAR_16);
   if (!VAR_21[VAR_23].cpus->dai_name)
    goto devm_err;
  }
 }

 return VAR_21;
devm_err:
 return ((void*)0);
}
