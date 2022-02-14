
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_ops {int dummy; } ;
struct sigmadsp {int read; int write; struct regmap* control_data; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct sigmadsp*) ;
 struct sigmadsp* FUNC_1 (struct device*,struct sigmadsp_ops const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

struct sigmadsp *FUNC_2(struct device *VAR_2,
 struct regmap *VAR_3, const struct sigmadsp_ops *VAR_4,
 const char *VAR_5)
{
 struct sigmadsp *VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_6;

 VAR_6->control_data = VAR_3;
 VAR_6->write = VAR_1;
 VAR_6->read = VAR_0;

 return VAR_6;
}
