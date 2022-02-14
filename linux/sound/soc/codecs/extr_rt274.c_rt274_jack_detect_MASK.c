
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt274_priv {int regmap; int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct rt274_priv *VAR_3, bool *VAR_4, bool *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 *VAR_4 = 0;
 *VAR_5 = 0;

 if (!VAR_3->component)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3->regmap, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_4 = VAR_6 & 0x80000000;
 VAR_7 = FUNC_1(VAR_3->regmap, VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_5 = VAR_6 & 0x80000000;

 FUNC_0("*hp = %d *mic = %d\n", *VAR_4, *VAR_5);

 return 0;
}
