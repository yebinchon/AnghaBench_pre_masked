
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_mix {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rsnd_mix*,int ) ;
 struct rsnd_mix* FUNC_2 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*,int ,int ) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_6(struct rsnd_dai_stream *VAR_8,
          struct rsnd_mod *VAR_9)
{
 struct rsnd_priv *VAR_10 = FUNC_3(VAR_9);
 struct device *VAR_11 = FUNC_5(VAR_10);
 struct rsnd_mix *VAR_12 = FUNC_2(VAR_9);
 u32 VAR_13 = FUNC_1(VAR_12, VAR_0);
 u32 VAR_14 = FUNC_1(VAR_12, VAR_1);
 u32 VAR_15 = FUNC_1(VAR_12, VAR_2);
 u32 VAR_16 = FUNC_1(VAR_12, VAR_3);

 FUNC_0(VAR_11, "MIX A/B/C/D = %02x/%02x/%02x/%02x\n",
  VAR_13, VAR_14, VAR_15, VAR_16);

 FUNC_4(VAR_9, VAR_4, VAR_13);
 FUNC_4(VAR_9, VAR_5, VAR_14);
 FUNC_4(VAR_9, VAR_6, VAR_15);
 FUNC_4(VAR_9, VAR_7, VAR_16);
}
