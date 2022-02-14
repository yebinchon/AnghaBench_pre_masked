
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pcm179x_private {struct regmap* regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct pcm179x_private*) ;
 struct pcm179x_private* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_3(struct device *VAR_4, struct regmap *VAR_5)
{
 struct pcm179x_private *VAR_6;

 VAR_6 = FUNC_1(VAR_4, sizeof(struct pcm179x_private),
    VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->regmap = VAR_5;
 FUNC_0(VAR_4, VAR_6);

 return FUNC_2(VAR_4,
   &VAR_3, &VAR_2, 1);
}
