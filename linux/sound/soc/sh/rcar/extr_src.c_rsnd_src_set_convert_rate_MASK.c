
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u64 ;
typedef int u32 ;
struct snd_pcm_runtime {int dummy; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*,int,int) ;
 int FUNC_4 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_5 (struct rsnd_dai_stream*,struct rsnd_mod*) ;
 int FUNC_6 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_7 (struct rsnd_dai_stream*) ;
 struct snd_pcm_runtime* FUNC_8 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_9 (struct rsnd_priv*) ;
 int FUNC_10 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_11 (struct rsnd_mod*) ;
 int FUNC_12 (struct rsnd_mod*,int ,int const) ;
 struct device* FUNC_13 (struct rsnd_priv*) ;
 int FUNC_14 (struct rsnd_dai_stream*) ;
 int FUNC_15 (struct rsnd_priv*,struct rsnd_dai_stream*) ;
 int FUNC_16 (struct rsnd_priv*,struct rsnd_dai_stream*) ;
 int FUNC_17 (struct rsnd_mod*) ;

__attribute__((used)) static void FUNC_18(struct rsnd_dai_stream *VAR_17,
          struct rsnd_mod *VAR_18)
{
 struct rsnd_priv *VAR_19 = FUNC_11(VAR_18);
 struct device *VAR_20 = FUNC_13(VAR_19);
 struct snd_pcm_runtime *VAR_21 = FUNC_8(VAR_17);
 int VAR_22 = FUNC_7(VAR_17);
 int VAR_23 = 0;
 u32 VAR_24, VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 u32 VAR_29, VAR_30;
 u32 VAR_31, VAR_32, VAR_33;
 const u32 *VAR_34;
 const u32 *VAR_35;
 uint VAR_36;
 int VAR_37;
 int VAR_38;

 if (!VAR_21)
  return;

 VAR_24 = FUNC_15(VAR_19, VAR_17);
 VAR_25 = FUNC_16(VAR_19, VAR_17);

 VAR_37 = FUNC_14(VAR_17);


 if (VAR_24 == VAR_25)
  VAR_36 = 0;
 else if (VAR_24 > VAR_25)
  VAR_36 = 100 * VAR_24 / VAR_25;
 else
  VAR_36 = 100 * VAR_25 / VAR_24;

 if (VAR_36 > 600) {
  FUNC_1(VAR_20, "FSO/FSI ratio error\n");
  return;
 }

 VAR_23 = (VAR_24 != VAR_25) | FUNC_17(VAR_18);




 VAR_28 = FUNC_4(VAR_18, VAR_17) | VAR_37;




 VAR_26 = 0;
 VAR_27 = 0;
 if (VAR_23) {
  u64 VAR_39;

  VAR_26 = 1;
  VAR_39 = (u64)0x0400000 * VAR_24;
  FUNC_2(VAR_39, VAR_25);
  VAR_27 = VAR_39;
 }




 VAR_29 = 0x00011110;
 VAR_30 = 0x0;
 if (VAR_23) {
  VAR_30 = 0x1;

  if (FUNC_17(VAR_18)) {
   VAR_29 |= 0x1;
   VAR_30 |= FUNC_7(VAR_17) ?
    (0x1 << 24) : (0x1 << 25);
  }
 }
 switch (FUNC_10(VAR_18)) {
 case 0:
  VAR_35 = VAR_16;
  VAR_34 = VAR_11;
  break;
 case 1:
 case 3:
 case 4:
  VAR_35 = VAR_15;
  VAR_34 = VAR_11;
  break;
 case 2:
 case 9:
  VAR_35 = VAR_14;
  VAR_34 = VAR_11;
  break;
 case 5:
 case 6:
 case 7:
 case 8:
  VAR_35 = VAR_14;
  VAR_34 = VAR_12;
  break;
 default:
  goto convert_rate_err;
 }




 if (FUNC_9(VAR_19))
  switch (FUNC_10(VAR_18)) {
  case 0:
  case 4:
   VAR_35 = VAR_14;
  }

 for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_14); VAR_38++)
  if (VAR_35[VAR_38] & (1 << VAR_37))
   break;

 if (VAR_37 > 8 ||
     VAR_38 >= FUNC_0(VAR_14))
  goto convert_rate_err;


 VAR_33 = FUNC_5(VAR_17, VAR_18);
 VAR_31 = ( VAR_22 ? VAR_33 : 0) | 1;
 VAR_32 = (!VAR_22 ? VAR_33 : 0) | 1;

 FUNC_12(VAR_18, VAR_8, VAR_30);

 FUNC_12(VAR_18, VAR_10, 1);
 FUNC_12(VAR_18, VAR_0, VAR_28);
 FUNC_12(VAR_18, VAR_4, VAR_26);
 FUNC_12(VAR_18, VAR_5, VAR_27);
 FUNC_12(VAR_18, VAR_9, VAR_29);
 FUNC_12(VAR_18, VAR_1, VAR_34[VAR_38]);
 FUNC_12(VAR_18, VAR_2, VAR_13[VAR_38]);
 FUNC_12(VAR_18, VAR_10, 0);

 FUNC_12(VAR_18, VAR_6, VAR_31);
 FUNC_12(VAR_18, VAR_7, VAR_32);

 FUNC_12(VAR_18, VAR_3, FUNC_6(VAR_18, VAR_17));

 FUNC_3(VAR_18, VAR_17, VAR_24, VAR_25);

 return;

convert_rate_err:
 FUNC_1(VAR_20, "unknown BSDSR/BSDIR settings\n");
}
