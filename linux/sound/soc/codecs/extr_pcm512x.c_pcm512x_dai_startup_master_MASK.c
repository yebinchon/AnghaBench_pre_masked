
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct device* dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_ratnum {int num; int den_min; int den_max; int den_step; } ;
struct snd_pcm_substream {int runtime; } ;
struct snd_pcm_hw_constraint_ratnums {int nrats; struct snd_ratnum* rats; } ;
struct pcm512x_priv {int sclk; scalar_t__ pll_out; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,struct snd_pcm_hw_constraint_ratnums*) ;
 int FUNC_6 (int ,int ,int ,int ,struct pcm512x_priv*,int ,int ,int) ;
 struct pcm512x_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6,
          struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct pcm512x_priv *VAR_9 = FUNC_7(VAR_8);
 struct device *VAR_10 = VAR_7->dev;
 struct snd_pcm_hw_constraint_ratnums *VAR_11;
 struct snd_ratnum *VAR_12;

 if (FUNC_0(VAR_9->sclk)) {
  FUNC_3(VAR_10, "Need SCLK for master mode: %ld\n",
   FUNC_1(VAR_9->sclk));
  return FUNC_1(VAR_9->sclk);
 }

 if (VAR_9->pll_out)
  return FUNC_6(VAR_6->runtime, 0,
        VAR_4,
        VAR_5,
        VAR_9,
        VAR_3,
        VAR_2, -1);

 VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11),
       VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->nrats = 1;
 VAR_12 = FUNC_4(VAR_10, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;
 VAR_11->rats = VAR_12;
 VAR_12->num = FUNC_2(VAR_9->sclk) / 64;
 VAR_12->den_min = 1;
 VAR_12->den_max = 128;
 VAR_12->den_step = 1;

 return FUNC_5(VAR_6->runtime, 0,
          VAR_4,
          VAR_11);
}
