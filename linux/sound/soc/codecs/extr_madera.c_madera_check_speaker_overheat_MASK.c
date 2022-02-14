
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera {int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct madera *VAR_3,
      bool *VAR_4, bool *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3->regmap, VAR_0, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3->dev, "Failed to read thermal status: %d\n",
   VAR_7);
  return VAR_7;
 }

 *VAR_4 = VAR_6 & VAR_2;
 *VAR_5 = VAR_6 & VAR_1;

 return 0;
}
