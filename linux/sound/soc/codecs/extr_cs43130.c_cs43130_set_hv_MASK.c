
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u16 ;
struct regmap {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regmap *VAR_2, u16 VAR_3,
     const u16 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 <= VAR_4[VAR_5])
   break;
 }

 FUNC_1(VAR_2, VAR_1[VAR_5], FUNC_0(VAR_1[VAR_5]));

 return 0;
}
