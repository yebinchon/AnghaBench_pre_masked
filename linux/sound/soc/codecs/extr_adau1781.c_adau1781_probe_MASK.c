
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum adau17x1_type { ____Placeholder_adau17x1_type } adau17x1_type ;



 char* VAR_0 ;

 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,struct regmap*,int,void (*) (struct device*),char const*) ;
 int FUNC_1 (struct device*,int *,int *,int) ;

int FUNC_2(struct device *VAR_5, struct regmap *VAR_6,
 enum adau17x1_type VAR_7, void (*VAR_8)(struct device *VAR_9))
{
 const char *VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 129:
  VAR_10 = VAR_0;
  break;
 case 128:
  VAR_10 = VAR_1;
  break;
 default:
  return -VAR_2;
 }

 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 if (VAR_11)
  return VAR_11;

 return FUNC_1(VAR_5, &VAR_3,
  &VAR_4, 1);
}
