
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct regmap {int dummy; } ;
struct fsl_ssi {int baudclk_streams; int i2s_net; scalar_t__ synchronous; scalar_t__ streams; int baudclk; struct regmap* regs; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fsl_ssi*) ;
 scalar_t__ FUNC_5 (struct fsl_ssi*) ;
 scalar_t__ FUNC_6 (struct fsl_ssi*) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_soc_dai*,struct snd_pcm_hw_params*) ;
 unsigned int FUNC_8 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct regmap*,int ,int ,int) ;
 struct fsl_ssi* FUNC_11 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_6,
        struct snd_pcm_hw_params *VAR_7,
        struct snd_soc_dai *VAR_8)
{
 bool VAR_9, VAR_10 = VAR_6->stream == VAR_1;
 struct fsl_ssi *VAR_11 = FUNC_11(VAR_8);
 struct regmap *VAR_12 = VAR_11->regs;
 unsigned int VAR_13 = FUNC_8(VAR_7);
 unsigned int VAR_14 = FUNC_9(VAR_7);
 u32 VAR_15 = FUNC_2(VAR_14);
 int VAR_16;

 if (FUNC_6(VAR_11)) {
  VAR_16 = FUNC_7(VAR_6, VAR_8, VAR_7);
  if (VAR_16)
   return VAR_16;


  if (!(VAR_11->baudclk_streams & FUNC_0(VAR_6->stream))) {
   VAR_16 = FUNC_3(VAR_11->baudclk);
   if (VAR_16)
    return VAR_16;

   VAR_11->baudclk_streams |= FUNC_0(VAR_6->stream);
  }
 }







 if (VAR_11->streams && VAR_11->synchronous)
  return 0;

 if (!FUNC_4(VAR_11)) {





  u8 VAR_17 = VAR_11->i2s_net;


  if (FUNC_5(VAR_11) && VAR_14 == 16)
   VAR_17 = VAR_2 | VAR_4;


  if (VAR_13 == 1)
   VAR_17 = VAR_2;

  FUNC_10(VAR_12, VAR_0,
       VAR_3, VAR_17);
 }


 VAR_9 = VAR_10 || VAR_11->synchronous;
 FUNC_10(VAR_12, FUNC_1(VAR_9), VAR_5, VAR_15);

 return 0;
}
