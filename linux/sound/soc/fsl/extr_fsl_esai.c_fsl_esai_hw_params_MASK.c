
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct fsl_esai {int slots; int slot_width; int regmap; int fifo_depth; scalar_t__ synchronous; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (struct snd_soc_dai*,int,int) ;
 int FUNC_11 (struct snd_pcm_hw_params*) ;
 int FUNC_12 (struct snd_pcm_hw_params*) ;
 int FUNC_13 (struct snd_pcm_hw_params*) ;
 int FUNC_14 (int ,int ,int,int) ;
 struct fsl_esai* FUNC_15 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_16(struct snd_pcm_substream *VAR_18,
         struct snd_pcm_hw_params *VAR_19,
         struct snd_soc_dai *VAR_20)
{
 struct fsl_esai *VAR_21 = FUNC_15(VAR_20);
 bool VAR_22 = VAR_18->stream == VAR_17;
 u32 VAR_23 = FUNC_13(VAR_19);
 u32 VAR_24 = FUNC_11(VAR_19);
 u32 VAR_25 = FUNC_0(VAR_24, VAR_21->slots);
 u32 VAR_26 = VAR_23;
 u32 VAR_27, VAR_28, VAR_29;
 int VAR_30;


 if (VAR_21->slot_width)
  VAR_26 = VAR_21->slot_width;

 VAR_27 = FUNC_12(VAR_19) * VAR_26 * VAR_21->slots;

 VAR_30 = FUNC_10(VAR_20, VAR_21->synchronous || VAR_22, VAR_27);
 if (VAR_30)
  return VAR_30;

 VAR_28 = VAR_6;
 VAR_29 = FUNC_3(VAR_26, VAR_23);

 FUNC_14(VAR_21->regmap, FUNC_8(VAR_22), VAR_28, VAR_29);

 if (!VAR_22 && VAR_21->synchronous)
  FUNC_14(VAR_21->regmap, VAR_16, VAR_28, VAR_29);


 FUNC_14(VAR_21->regmap, FUNC_8(VAR_22),
      VAR_4, FUNC_11(VAR_19) > 1 ?
      VAR_5 : 0);

 FUNC_14(VAR_21->regmap, FUNC_9(VAR_22),
      VAR_11, VAR_10);

 VAR_28 = VAR_11 | VAR_13 | VAR_12 |
       (VAR_22 ? VAR_8 | VAR_9 : VAR_7);
 VAR_29 = FUNC_7(VAR_23) | FUNC_6(VAR_21->fifo_depth) |
      (VAR_22 ? FUNC_5(VAR_25) | VAR_9 : FUNC_4(VAR_25));

 FUNC_14(VAR_21->regmap, FUNC_9(VAR_22), VAR_28, VAR_29);

 if (VAR_22)
  FUNC_14(VAR_21->regmap, VAR_16,
    VAR_3, VAR_3);


 FUNC_14(VAR_21->regmap, VAR_15,
      VAR_2, FUNC_2(VAR_0));
 FUNC_14(VAR_21->regmap, VAR_14,
      VAR_1, FUNC_1(VAR_0));
 return 0;
}
