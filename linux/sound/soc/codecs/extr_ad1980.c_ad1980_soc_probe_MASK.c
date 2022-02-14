
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dev; } ;
struct snd_ac97 {int dummy; } ;
typedef struct snd_ac97 regmap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int VAR_7 ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*) ;
 struct snd_ac97* FUNC_5 (struct snd_ac97*,int *) ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,struct snd_ac97*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,struct snd_ac97*) ;
 int FUNC_10 (struct snd_soc_component*,int ,int) ;
 int FUNC_11 (struct snd_ac97*) ;
 struct snd_ac97* FUNC_12 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_8)
{
 struct snd_ac97 *VAR_9;
 struct regmap *VAR_10;
 int VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 VAR_9 = FUNC_12(VAR_8, 0, 0);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  FUNC_3(VAR_8->dev, "Failed to register AC97 component: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10 = FUNC_5(VAR_9, &VAR_7);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto err_free_ac97;
 }

 FUNC_7(VAR_8, VAR_10);
 FUNC_9(VAR_8, VAR_9);

 VAR_11 = FUNC_2(VAR_8, 0);
 if (VAR_11 < 0)
  goto reset_err;

 VAR_12 = FUNC_8(VAR_8, VAR_6);
 if (VAR_12 == 0x5374) {
  FUNC_4(VAR_8->dev,
   "Found AD1981 - only 2/2 IN/OUT Channels supported\n");
 }


 FUNC_10(VAR_8, VAR_2, 0x0000);
 FUNC_10(VAR_8, VAR_3, 0x0000);
 FUNC_10(VAR_8, VAR_4, 0x0000);
 FUNC_10(VAR_8, VAR_0, 0x0000);
 FUNC_10(VAR_8, VAR_5, 0x0000);


 VAR_13 = FUNC_8(VAR_8, VAR_1);
 FUNC_10(VAR_8, VAR_1, VAR_13&~0x3800);

 return 0;

reset_err:
 FUNC_6(VAR_8);
err_free_ac97:
 FUNC_11(VAR_9);
 return VAR_11;
}
