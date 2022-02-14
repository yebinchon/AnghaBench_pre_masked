
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_asrc_pair {int index; struct fsl_asrc* asrc_priv; struct asrc_config* config; } ;
struct fsl_asrc {int channel_bits; int regmap; struct clk** asrck_clk; } ;
struct clk {int dummy; } ;
struct asrc_config {int channel_num; scalar_t__ output_word_width; int input_sample_rate; int output_sample_rate; size_t inclk; size_t outclk; int input_word_width; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_23 (int ) ;
 int VAR_2 ;
 int FUNC_24 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_25 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_26 (int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (struct clk*) ;
 int** VAR_15 ;
 int FUNC_29 (struct fsl_asrc_pair*,int) ;
 int FUNC_30 (int,int,int*,int*) ;
 int FUNC_31 (struct fsl_asrc_pair*,int,int) ;
 int FUNC_32 (struct fsl_asrc_pair*,int ,int ) ;
 int FUNC_33 (char*,...) ;
 int FUNC_34 (int ,int ,int,int) ;
 int* VAR_16 ;

__attribute__((used)) static int FUNC_35(struct fsl_asrc_pair *VAR_17)
{
 struct asrc_config *VAR_18 = VAR_17->config;
 struct fsl_asrc *VAR_19 = VAR_17->asrc_priv;
 enum asrc_pair_index VAR_20 = VAR_17->index;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 u32 VAR_25[2], VAR_26[2];
 int VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31;
 struct clk *VAR_32;
 bool VAR_33;

 if (!VAR_18) {
  FUNC_33("invalid pair config\n");
  return -VAR_6;
 }


 if (VAR_18->channel_num < 1 || VAR_18->channel_num > 10) {
  FUNC_33("does not support %d channels\n", VAR_18->channel_num);
  return -VAR_6;
 }


 if (VAR_18->output_word_width == VAR_1) {
  FUNC_33("does not support 8bit width output\n");
  return -VAR_6;
 }

 VAR_21 = VAR_18->input_sample_rate;
 VAR_22 = VAR_18->output_sample_rate;
 VAR_33 = VAR_18->inclk == VAR_9;


 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_16); VAR_27++)
  if (VAR_21 == VAR_16[VAR_27])
   break;

 if (VAR_27 == FUNC_0(VAR_16)) {
  FUNC_33("unsupported input sample rate: %dHz\n", VAR_21);
  return -VAR_6;
 }

 for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_16); VAR_28++)
  if (VAR_22 == VAR_16[VAR_28])
   break;

 if (VAR_28 == FUNC_0(VAR_16)) {
  FUNC_33("unsupported output sample rate: %dHz\n", VAR_22);
  return -VAR_6;
 }

 if ((VAR_22 >= 5512 && VAR_22 <= 30000) &&
     (VAR_22 > 24 * VAR_21 || VAR_21 > 8 * VAR_22)) {
  FUNC_33("exceed supported ratio range [1/24, 8] for 				inrate/outrate: %d/%d\n", VAR_21, VAR_22);

  return -VAR_6;
 }


 VAR_25[VAR_8] = VAR_15[VAR_8][VAR_18->inclk];
 VAR_25[VAR_10] = VAR_15[VAR_10][VAR_18->outclk];


 VAR_32 = VAR_19->asrck_clk[VAR_25[VAR_33 ? VAR_10 : VAR_8]];

 VAR_26[VAR_8] = FUNC_28(VAR_32) / VAR_21;
 if (VAR_26[VAR_8] == 0) {
  FUNC_33("failed to support input sample rate %dHz by asrck_%x\n",
    VAR_21, VAR_25[VAR_33 ? VAR_10 : VAR_8]);
  return -VAR_6;
 }

 VAR_32 = VAR_19->asrck_clk[VAR_25[VAR_10]];


 if (VAR_33)
  VAR_26[VAR_10] = FUNC_28(VAR_32) / VAR_7;
 else
  VAR_26[VAR_10] = FUNC_28(VAR_32) / VAR_22;

 if (VAR_26[VAR_10] == 0) {
  FUNC_33("failed to support output sample rate %dHz by asrck_%x\n",
    VAR_22, VAR_25[VAR_10]);
  return -VAR_6;
 }


 VAR_29 = VAR_18->channel_num;

 if (VAR_19->channel_bits < 4)
  VAR_29 /= 2;


 FUNC_34(VAR_19->regmap, VAR_12,
      FUNC_12(VAR_20, VAR_19->channel_bits),
      FUNC_11(VAR_20, VAR_29, VAR_19->channel_bits));


 FUNC_34(VAR_19->regmap, VAR_14,
      FUNC_18(VAR_20), FUNC_17(VAR_20));
 FUNC_34(VAR_19->regmap, VAR_14,
      FUNC_22(VAR_20), 0);


 FUNC_34(VAR_19->regmap, VAR_13,
      FUNC_14(VAR_20) | FUNC_16(VAR_20),
      FUNC_13(VAR_20, VAR_25[VAR_8]) |
      FUNC_15(VAR_20, VAR_25[VAR_10]));


 VAR_23 = FUNC_29(VAR_17, VAR_26[VAR_8]);
 VAR_24 = FUNC_29(VAR_17, VAR_26[VAR_10]);


 FUNC_34(VAR_19->regmap, FUNC_25(VAR_20),
      FUNC_6(VAR_20) | FUNC_3(VAR_20) |
      FUNC_4(VAR_20) | FUNC_1(VAR_20),
      FUNC_5(VAR_20, VAR_24) | FUNC_2(VAR_20, VAR_23));


 FUNC_34(VAR_19->regmap, FUNC_27(VAR_20),
      VAR_3 | VAR_2,
      FUNC_24(VAR_18->output_word_width) |
      FUNC_23(VAR_18->input_word_width));


 FUNC_34(VAR_19->regmap, FUNC_26(VAR_20),
      VAR_5, VAR_4);


 FUNC_32(VAR_17, VAR_0,
    VAR_0);


 if (!VAR_33)
  return 0;


 FUNC_34(VAR_19->regmap, VAR_14,
      FUNC_18(VAR_20), 0);


 FUNC_34(VAR_19->regmap, VAR_14,
      FUNC_20(VAR_20) | FUNC_22(VAR_20),
      FUNC_19(VAR_20) | FUNC_21(VAR_20));

 FUNC_30(VAR_21, VAR_22, &VAR_30, &VAR_31);


 FUNC_34(VAR_19->regmap, VAR_11,
      FUNC_10(VAR_20) | FUNC_8(VAR_20),
      FUNC_9(VAR_20, VAR_30) |
      FUNC_7(VAR_20, VAR_31));

 return FUNC_31(VAR_17, VAR_21, VAR_22);
}
