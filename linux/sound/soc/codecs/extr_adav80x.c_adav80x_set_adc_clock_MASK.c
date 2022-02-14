
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adav80x {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 struct adav80x* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_4,
  unsigned int VAR_5)
{
 struct adav80x *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7;

 if (VAR_5 <= 48000)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 FUNC_0(VAR_6->regmap, VAR_0,
  VAR_3, VAR_7);

 return 0;
}
