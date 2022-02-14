
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_0, int VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 if (VAR_1 < 0 || FUNC_0(VAR_4 < 0))
  return 0;
 return FUNC_1(VAR_0, VAR_1, VAR_2 << VAR_4, VAR_3 << VAR_4);
}
