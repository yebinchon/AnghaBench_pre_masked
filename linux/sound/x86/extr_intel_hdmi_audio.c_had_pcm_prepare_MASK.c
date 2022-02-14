
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; int rate; int channels; int period_size; } ;
struct snd_intelhad {int link_rate; scalar_t__ dp_output; int dev; int tmds_clock_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_intelhad*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_5 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_6 (int,int ,int ,int ,struct snd_intelhad*) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 int FUNC_8 (int,int *,struct snd_intelhad*) ;
 int FUNC_9 (struct snd_intelhad*,int ,int ) ;
 scalar_t__ FUNC_10 (struct snd_pcm_substream*) ;
 struct snd_intelhad* FUNC_11 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5;
 u32 VAR_6 = 0;
 struct snd_intelhad *VAR_7;
 struct snd_pcm_runtime *VAR_8;

 VAR_7 = FUNC_11(VAR_2);
 VAR_8 = VAR_2->runtime;

 FUNC_0(VAR_7->dev, "period_size=%d\n",
  (int)FUNC_2(VAR_8, VAR_8->period_size));
 FUNC_0(VAR_7->dev, "periods=%d\n", VAR_8->periods);
 FUNC_0(VAR_7->dev, "buffer_size=%d\n",
  (int)FUNC_10(VAR_2));
 FUNC_0(VAR_7->dev, "rate=%d\n", VAR_8->rate);
 FUNC_0(VAR_7->dev, "channels=%d\n", VAR_8->channels);

 FUNC_3(VAR_7);


 VAR_4 = VAR_7->tmds_clock_speed;

 VAR_3 = FUNC_8(VAR_2->runtime->rate, &VAR_5, VAR_7);
 if (VAR_3) {
  FUNC_1(VAR_7->dev,
   "programming N value failed %#x\n", VAR_3);
  goto prep_end;
 }

 if (VAR_7->dp_output)
  VAR_6 = VAR_7->link_rate;

 FUNC_6(VAR_2->runtime->rate, VAR_4, VAR_6,
       VAR_5, VAR_7);

 FUNC_7(VAR_2, VAR_7);

 VAR_3 = FUNC_4(VAR_2, VAR_7);


 FUNC_5(VAR_2, VAR_7);






 FUNC_9(VAR_7, VAR_0, VAR_1);

prep_end:
 return VAR_3;
}
