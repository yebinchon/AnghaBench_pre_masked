
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adav80x {int rate; int regmap; scalar_t__ deemph; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 struct adav80x* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_6)
{
 struct adav80x *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8;

 if (VAR_7->deemph) {
  switch (VAR_7->rate) {
  case 32000:
   VAR_8 = VAR_1;
   break;
  case 44100:
   VAR_8 = VAR_2;
   break;
  case 48000:
  case 64000:
  case 88200:
  case 96000:
   VAR_8 = VAR_3;
   break;
  default:
   VAR_8 = VAR_5;
   break;
  }
 } else {
  VAR_8 = VAR_5;
 }

 return FUNC_0(VAR_7->regmap, VAR_0,
  VAR_4, VAR_8);
}
