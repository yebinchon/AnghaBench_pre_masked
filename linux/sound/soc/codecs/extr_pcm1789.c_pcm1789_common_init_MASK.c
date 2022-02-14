
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pcm1789_private {int work; int reset; struct device* dev; struct regmap* regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct pcm1789_private*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct pcm1789_private* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *,int *,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_9(struct device *VAR_6, struct regmap *VAR_7)
{
 struct pcm1789_private *VAR_8;

 VAR_8 = FUNC_5(VAR_6, sizeof(struct pcm1789_private),
          VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->regmap = VAR_7;
 VAR_8->dev = VAR_6;
 FUNC_3(VAR_6, VAR_8);

 VAR_8->reset = FUNC_4(VAR_6, "reset", VAR_2);
 if (FUNC_1(VAR_8->reset))
  return FUNC_2(VAR_8->reset);

 FUNC_7(VAR_8->reset, 0);
 FUNC_8(300);

 FUNC_0(&VAR_8->work, VAR_4);

 return FUNC_6(VAR_6, &VAR_5,
            &VAR_3, 1);
}
