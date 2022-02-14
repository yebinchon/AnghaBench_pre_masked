
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct fsl_sai {int slots; int slot_width; int bclk_ratio; int mclk_streams; size_t* mclk_id; int regmap; scalar_t__* synchronous; int is_slave_mode; scalar_t__ is_lsb_first; int is_dsp_mode; int * mclk_clk; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int VAR_5 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int VAR_6 ;
 int FUNC_10 (int,unsigned int) ;
 int FUNC_11 (int,unsigned int) ;
 int FUNC_12 (int) ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct snd_soc_dai*,int,int) ;
 unsigned int FUNC_15 (struct snd_pcm_hw_params*) ;
 int FUNC_16 (struct snd_pcm_hw_params*) ;
 int FUNC_17 (struct snd_pcm_hw_params*) ;
 int FUNC_18 (int ,int ,int,int) ;
 int FUNC_19 (int ,int ,unsigned long) ;
 struct fsl_sai* FUNC_20 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_21(struct snd_pcm_substream *VAR_10,
  struct snd_pcm_hw_params *VAR_11,
  struct snd_soc_dai *VAR_12)
{
 struct fsl_sai *VAR_13 = FUNC_20(VAR_12);
 unsigned int VAR_14 = VAR_13->soc_data->reg_offset;
 bool VAR_15 = VAR_10->stream == VAR_8;
 unsigned int VAR_16 = FUNC_15(VAR_11);
 u32 VAR_17 = FUNC_17(VAR_11);
 u32 VAR_18 = 0, VAR_19 = 0;
 u32 VAR_20 = (VAR_16 == 1) ? 2 : VAR_16;
 u32 VAR_21 = VAR_17;
 int VAR_22;

 if (VAR_13->slots)
  VAR_20 = VAR_13->slots;

 if (VAR_13->slot_width)
  VAR_21 = VAR_13->slot_width;

 if (!VAR_13->is_slave_mode) {
  if (VAR_13->bclk_ratio)
   VAR_22 = FUNC_14(VAR_12, VAR_15,
            VAR_13->bclk_ratio *
            FUNC_16(VAR_11));
  else
   VAR_22 = FUNC_14(VAR_12, VAR_15,
            VAR_20 * VAR_21 *
            FUNC_16(VAR_11));
  if (VAR_22)
   return VAR_22;


  if (!(VAR_13->mclk_streams & FUNC_0(VAR_10->stream))) {
   VAR_22 = FUNC_13(VAR_13->mclk_clk[VAR_13->mclk_id[VAR_15]]);
   if (VAR_22)
    return VAR_22;

   VAR_13->mclk_streams |= FUNC_0(VAR_10->stream);
  }
 }

 if (!VAR_13->is_dsp_mode)
  VAR_18 |= FUNC_2(VAR_21);

 VAR_19 |= FUNC_5(VAR_21);
 VAR_19 |= FUNC_4(VAR_21);

 if (VAR_13->is_lsb_first)
  VAR_19 |= FUNC_3(0);
 else
  VAR_19 |= FUNC_3(VAR_17 - 1);

 VAR_18 |= FUNC_1(VAR_20);
 if (!VAR_13->is_slave_mode) {
  if (!VAR_13->synchronous[VAR_9] && VAR_13->synchronous[VAR_7] && !VAR_15) {
   FUNC_18(VAR_13->regmap, FUNC_8(VAR_14),
    VAR_1 | VAR_0,
    VAR_18);
   FUNC_18(VAR_13->regmap, FUNC_9(VAR_14),
    VAR_4 | VAR_3 |
    VAR_2, VAR_19);
   FUNC_19(VAR_13->regmap, VAR_6,
    ~0UL - ((1 << VAR_16) - 1));
  } else if (!VAR_13->synchronous[VAR_7] && VAR_13->synchronous[VAR_9] && VAR_15) {
   FUNC_18(VAR_13->regmap, FUNC_6(VAR_14),
    VAR_1 | VAR_0,
    VAR_18);
   FUNC_18(VAR_13->regmap, FUNC_7(VAR_14),
    VAR_4 | VAR_3 |
    VAR_2, VAR_19);
   FUNC_19(VAR_13->regmap, VAR_5,
    ~0UL - ((1 << VAR_16) - 1));
  }
 }

 FUNC_18(VAR_13->regmap, FUNC_10(VAR_15, VAR_14),
      VAR_1 | VAR_0,
      VAR_18);
 FUNC_18(VAR_13->regmap, FUNC_11(VAR_15, VAR_14),
      VAR_4 | VAR_3 |
      VAR_2, VAR_19);
 FUNC_19(VAR_13->regmap, FUNC_12(VAR_15), ~0UL - ((1 << VAR_16) - 1));

 return 0;
}
