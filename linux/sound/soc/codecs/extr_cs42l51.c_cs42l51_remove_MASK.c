
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cs42l51_private {int supplies; int reset_gpio; } ;


 int FUNC_0 (int ) ;
 struct cs42l51_private* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct device *VAR_0)
{
 struct cs42l51_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->reset_gpio, 1);

 return FUNC_3(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
}
