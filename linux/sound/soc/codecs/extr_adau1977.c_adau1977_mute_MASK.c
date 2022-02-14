
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau1977 {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct adau1977* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3, int VAR_4)
{
 struct adau1977 *VAR_5 = FUNC_1(VAR_2->component);
 unsigned int VAR_6;

 if (VAR_3)
  VAR_6 = VAR_0;
 else
  VAR_6 = 0;

 return FUNC_0(VAR_5->regmap, VAR_1,
   VAR_0, VAR_6);
}
