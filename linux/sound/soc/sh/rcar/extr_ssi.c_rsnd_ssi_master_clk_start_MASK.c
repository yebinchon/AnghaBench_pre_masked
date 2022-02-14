
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {scalar_t__ usrcnt; unsigned int rate; int chan; int cr_clk; int wsr; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int ,int,unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct rsnd_mod*,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_6 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_7 (struct rsnd_dai_stream*) ;
 struct rsnd_dai* FUNC_8 (struct rsnd_dai_stream*) ;
 int FUNC_9 (struct rsnd_mod*) ;
 struct rsnd_ssi* FUNC_10 (struct rsnd_mod*) ;
 struct device* FUNC_11 (struct rsnd_priv*) ;
 int FUNC_12 (struct rsnd_dai*) ;
 int FUNC_13 (struct rsnd_dai*) ;
 int FUNC_14 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_15 (struct rsnd_dai_stream*) ;
 unsigned int FUNC_16 (struct rsnd_priv*,struct rsnd_dai_stream*) ;
 unsigned int FUNC_17 (struct rsnd_priv*,struct rsnd_dai_stream*) ;
 int FUNC_18 (struct rsnd_mod*) ;
 unsigned int FUNC_19 (struct rsnd_dai*,unsigned int,int,int*) ;
 scalar_t__ FUNC_20 (struct rsnd_mod*,struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_21(struct rsnd_mod *VAR_6,
         struct rsnd_dai_stream *VAR_7)
{
 struct rsnd_priv *VAR_8 = FUNC_7(VAR_7);
 struct device *VAR_9 = FUNC_11(VAR_8);
 struct rsnd_dai *VAR_10 = FUNC_8(VAR_7);
 struct rsnd_ssi *VAR_11 = FUNC_10(VAR_6);
 int VAR_12 = FUNC_14(VAR_7);
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16 = FUNC_6(VAR_7) ?
  FUNC_17(VAR_8, VAR_7) :
  FUNC_16(VAR_8, VAR_7);

 if (!FUNC_12(VAR_10))
  return 0;

 if (!FUNC_18(VAR_6))
  return 0;

 if (FUNC_20(VAR_6, VAR_7))
  return 0;

 if (FUNC_15(VAR_7))
  VAR_12 = FUNC_5(VAR_7);

 VAR_12 = FUNC_4(VAR_12);

 if (VAR_11->usrcnt > 0) {
  if (VAR_11->rate != VAR_16) {
   FUNC_2(VAR_9, "SSI parent/child should use same rate\n");
   return -VAR_1;
  }

  if (VAR_11->chan != VAR_12) {
   FUNC_2(VAR_9, "SSI parent/child should use same chan\n");
   return -VAR_1;
  }

  return 0;
 }

 VAR_15 = FUNC_19(VAR_10, VAR_16, VAR_12, &VAR_13);
 if (!VAR_15) {
  FUNC_2(VAR_9, "unsupported clock rate\n");
  return -VAR_2;
 }

 VAR_14 = FUNC_3(VAR_6, VAR_15);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_11->cr_clk = VAR_3 | FUNC_13(VAR_10) |
   VAR_4 | VAR_5 | FUNC_0(VAR_13);
 VAR_11->wsr = VAR_0;
 VAR_11->rate = VAR_16;
 VAR_11->chan = VAR_12;

 FUNC_1(VAR_9, "%s outputs %d chan %u Hz\n",
  FUNC_9(VAR_6), VAR_12, VAR_16);

 return 0;
}
