
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3168a_priv {int regmap; int sysclk; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pcm3168a_priv *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_1, 0);
 if (VAR_4)
  return VAR_4;


 FUNC_1(FUNC_0(3846 * 1000, VAR_3->sysclk));

 return FUNC_2(VAR_3->regmap, VAR_1,
   VAR_0 | VAR_2);
}
