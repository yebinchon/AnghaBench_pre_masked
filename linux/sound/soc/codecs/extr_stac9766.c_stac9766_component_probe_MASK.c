
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct snd_ac97 {int dummy; } ;
typedef struct snd_ac97 regmap ;


 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_ac97* FUNC_2 (struct snd_ac97*,int *) ;
 int FUNC_3 (struct snd_soc_component*,struct snd_ac97*) ;
 int FUNC_4 (struct snd_soc_component*,struct snd_ac97*) ;
 int FUNC_5 (struct snd_ac97*) ;
 struct snd_ac97* FUNC_6 (struct snd_soc_component*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_3)
{
 struct snd_ac97 *VAR_4;
 struct regmap *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_3, VAR_0,
   VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_2(VAR_4, &VAR_2);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto err_free_ac97;
 }

 FUNC_3(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_4);

 return 0;
err_free_ac97:
 FUNC_5(VAR_4);
 return VAR_6;
}
