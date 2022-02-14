
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau1977 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adau1977* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct adau1977 *VAR_4 = FUNC_1(VAR_2->component);
 unsigned int VAR_5;

 if (VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = 0;

 return FUNC_0(VAR_4->regmap, VAR_0,
  VAR_1, VAR_5);
}
