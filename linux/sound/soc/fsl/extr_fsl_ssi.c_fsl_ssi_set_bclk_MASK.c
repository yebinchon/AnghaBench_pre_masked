
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct regmap {int dummy; } ;
struct fsl_ssi {int slots; unsigned int slot_width; int baudclk_streams; int baudclk; scalar_t__ synchronous; int clk; struct regmap* regs; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int,unsigned int) ;
 unsigned int FUNC_9 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct regmap*,int ,int,int) ;
 struct fsl_ssi* FUNC_12 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_5,
       struct snd_soc_dai *VAR_6,
       struct snd_pcm_hw_params *VAR_7)
{
 bool VAR_8, VAR_9 = VAR_5->stream == VAR_1;
 struct fsl_ssi *VAR_10 = FUNC_12(VAR_6);
 struct regmap *VAR_11 = VAR_10->regs;
 u32 VAR_12 = 999, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23 = FUNC_9(VAR_7);
 unsigned int VAR_24 = 32;
 u64 VAR_25, VAR_26 = 100000;
 unsigned int VAR_27;
 bool VAR_28;
 int VAR_29;


 if (VAR_10->slots)
  VAR_23 = VAR_10->slots;

 if (VAR_10->slot_width && VAR_23 != 2)
  VAR_24 = VAR_10->slot_width;


 VAR_27 = VAR_23 * VAR_24 * FUNC_10(VAR_7);


 if (FUNC_1(VAR_10->baudclk))
  return -VAR_0;





 if (VAR_27 * 5 > FUNC_4(VAR_10->clk)) {
  FUNC_7(VAR_6->dev, "bitclk > ipgclk / 5\n");
  return -VAR_0;
 }

 VAR_28 = VAR_10->baudclk_streams & ~(FUNC_0(VAR_5->stream));


 VAR_14 = 0;
 VAR_13 = 0;

 VAR_18 = (VAR_13 + 1) * (7 * VAR_14 + 1) * 2;

 for (VAR_19 = 0; VAR_19 < 255; VAR_19++) {
  VAR_22 = VAR_27 * VAR_18 * (VAR_19 + 1);

  if (VAR_28)
   VAR_20 = FUNC_4(VAR_10->baudclk);
  else
   VAR_20 = FUNC_5(VAR_10->baudclk, VAR_22);

  VAR_20 /= VAR_18;
  VAR_17 = VAR_20 / (VAR_19 + 1);

  if (VAR_27 == VAR_17)
   VAR_25 = 0;
  else if (VAR_27 / VAR_17 == 1)
   VAR_25 = VAR_27 - VAR_17;
  else if (VAR_17 / VAR_27 == 1)
   VAR_25 = VAR_17 - VAR_27;
  else
   continue;


  VAR_25 *= 100000;
  FUNC_8(VAR_25, VAR_27);

  if (VAR_25 < VAR_26 && !(VAR_19 == 0 && VAR_14 == 0 && VAR_13 == 0)) {
   VAR_21 = VAR_22;
   VAR_26 = VAR_25;
   VAR_12 = VAR_19;
  }


  if (VAR_26 == 0)
   break;
 }


 if (VAR_12 == 999) {
  FUNC_7(VAR_6->dev, "failed to handle the required sysclk\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_12 + 1) | (VAR_13 ? VAR_2 : 0) |
  (VAR_14 ? VAR_4 : 0);
 VAR_16 = VAR_3 | VAR_2 | VAR_4;


 VAR_8 = VAR_9 || VAR_10->synchronous;
 FUNC_11(VAR_11, FUNC_2(VAR_8), VAR_16, VAR_15);

 if (!VAR_28) {
  VAR_29 = FUNC_6(VAR_10->baudclk, VAR_21);
  if (VAR_29) {
   FUNC_7(VAR_6->dev, "failed to set baudclk rate\n");
   return -VAR_0;
  }
 }

 return 0;
}
