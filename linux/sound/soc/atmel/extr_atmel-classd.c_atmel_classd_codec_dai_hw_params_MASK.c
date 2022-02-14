
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {int card; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atmel_classd {int gclk; } ;
struct TYPE_3__ {int dsp_clk; int sample_rate; int gclk_rate; scalar_t__ rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,int ) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 TYPE_1__* VAR_5 ;
 struct atmel_classd* FUNC_7 (int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int
FUNC_9(struct snd_pcm_substream *VAR_6,
       struct snd_pcm_hw_params *VAR_7,
       struct snd_soc_dai *VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_6->private_data;
 struct atmel_classd *VAR_10 = FUNC_7(VAR_9->card);
 struct snd_soc_component *VAR_11 = VAR_8->component;
 int VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;

 VAR_12 = FUNC_6(VAR_7);

 VAR_14 = 0;
 VAR_15 = FUNC_1(VAR_12 - VAR_5[0].rate);
 for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_5); VAR_13++) {

  VAR_16 = FUNC_1(VAR_12 - VAR_5[VAR_13].rate);
  if (VAR_16 < VAR_15) {
   VAR_14 = VAR_13;
   VAR_15 = VAR_16;
  }
 }

 FUNC_5(VAR_11->dev,
  "Selected SAMPLE_RATE of %dHz, GCLK_RATE of %ldHz\n",
  VAR_5[VAR_14].rate, VAR_5[VAR_14].gclk_rate);

 FUNC_2(VAR_10->gclk);

 VAR_17 = FUNC_4(VAR_10->gclk, VAR_5[VAR_14].gclk_rate);
 if (VAR_17)
  return VAR_17;

 VAR_18 = VAR_1 | VAR_3;
 VAR_19 = (VAR_5[VAR_14].dsp_clk << VAR_2)
 | (VAR_5[VAR_14].sample_rate << VAR_4);

 FUNC_8(VAR_11, VAR_0, VAR_18, VAR_19);

 return FUNC_3(VAR_10->gclk);
}
