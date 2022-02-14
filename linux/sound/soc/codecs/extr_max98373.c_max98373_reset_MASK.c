
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max98373_priv {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct max98373_priv *VAR_3, struct device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;


 VAR_5 = FUNC_3(VAR_3->regmap,
  VAR_0,
  VAR_2,
  VAR_2);
 if (VAR_5)
  FUNC_0(VAR_4, "Reset command failed. (ret:%d)\n", VAR_5);

 VAR_7 = 0;
 while (VAR_7 < 3) {
  FUNC_4(10000, 11000);

  VAR_5 = FUNC_2(VAR_3->regmap,
   VAR_1, &VAR_6);
  if (!VAR_5) {
   FUNC_1(VAR_4, "Reset completed (retry:%d)\n", VAR_7);
   return;
  }
  VAR_7++;
 }
 FUNC_0(VAR_4, "Reset failed. (ret:%d)\n", VAR_5);
}
