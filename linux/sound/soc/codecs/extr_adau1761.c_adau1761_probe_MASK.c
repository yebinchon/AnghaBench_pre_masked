
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum adau17x1_type { ____Placeholder_adau17x1_type } adau17x1_type ;


 int VAR_0 ;
 char* VAR_1 ;
 struct snd_soc_dai_driver VAR_2 ;
 int VAR_3 ;
 struct snd_soc_dai_driver VAR_4 ;
 int FUNC_0 (struct device*,struct regmap*,int,void (*) (struct device*),char const*) ;
 int FUNC_1 (struct device*,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_2 (struct regmap*,int) ;

int FUNC_3(struct device *VAR_5, struct regmap *VAR_6,
 enum adau17x1_type VAR_7, void (*VAR_8)(struct device *VAR_9))
{
 struct snd_soc_dai_driver *VAR_10;
 const char *VAR_11;
 int VAR_12;

 if (VAR_7 == VAR_0) {
  VAR_10 = &VAR_2;
  VAR_11 = ((void*)0);
 } else {
  VAR_10 = &VAR_4;
  VAR_11 = VAR_1;
 }

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
 if (VAR_12)
  return VAR_12;



 FUNC_2(VAR_6, 1);

 return FUNC_1(VAR_5, &VAR_3,
            VAR_10, 1);
}
