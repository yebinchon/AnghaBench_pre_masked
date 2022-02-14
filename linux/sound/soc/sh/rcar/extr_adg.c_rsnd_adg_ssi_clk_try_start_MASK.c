
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_adg {int ckr; int rbga_rate_for_441khz; int rbgb_rate_for_48khz; int rbgb; int rbga; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char,int ) ;
 int FUNC_1 (struct rsnd_priv*,unsigned int) ;
 int FUNC_2 (struct rsnd_mod*,int) ;
 scalar_t__ FUNC_3 (struct rsnd_adg*,int ) ;
 int FUNC_4 (struct rsnd_mod*,int ,int,int) ;
 struct rsnd_mod* FUNC_5 (struct rsnd_adg*) ;
 struct rsnd_priv* FUNC_6 (struct rsnd_mod*) ;
 int FUNC_7 (struct rsnd_mod*,int ,int ) ;
 struct rsnd_adg* FUNC_8 (struct rsnd_priv*) ;
 struct device* FUNC_9 (struct rsnd_priv*) ;

int FUNC_10(struct rsnd_mod *VAR_5, unsigned int VAR_6)
{
 struct rsnd_priv *VAR_7 = FUNC_6(VAR_5);
 struct rsnd_adg *VAR_8 = FUNC_8(VAR_7);
 struct device *VAR_9 = FUNC_9(VAR_7);
 struct rsnd_mod *VAR_10 = FUNC_5(VAR_8);
 int VAR_11;
 u32 VAR_12 = 0;

 VAR_11 = FUNC_1(VAR_7, VAR_6);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_2(VAR_5, VAR_11);

 if (FUNC_3(VAR_8, VAR_4)) {
  if (FUNC_3(VAR_8, VAR_0))
   VAR_12 = 0x80000000;
 } else {
  if (0 == (VAR_6 % 8000))
   VAR_12 = 0x80000000;
 }

 FUNC_4(VAR_10, VAR_1, 0x80770000, VAR_8->ckr | VAR_12);
 FUNC_7(VAR_10, VAR_2, VAR_8->rbga);
 FUNC_7(VAR_10, VAR_3, VAR_8->rbgb);

 FUNC_0(VAR_9, "CLKOUT is based on BRG%c (= %dHz)\n",
  (VAR_12) ? 'B' : 'A',
  (VAR_12) ? VAR_8->rbgb_rate_for_48khz :
   VAR_8->rbga_rate_for_441khz);

 return 0;
}
