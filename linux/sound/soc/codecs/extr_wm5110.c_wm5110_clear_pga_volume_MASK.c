
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct arizona *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0 + VAR_2 * 4;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->regmap, VAR_3, 0x80);
 if (VAR_4)
  FUNC_0(VAR_1->dev, "Failed to clear PGA (0x%x): %d\n",
   VAR_3, VAR_4);

 return VAR_4;
}
