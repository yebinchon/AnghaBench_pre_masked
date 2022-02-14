
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5086_private {scalar_t__ rate; int regmap; scalar_t__ deemph; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct tas5086_private* FUNC_2 (struct snd_soc_component*) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_3)
{
 struct tas5086_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5, VAR_6 = 0;

 if (VAR_4->deemph) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
   if (VAR_2[VAR_5] == VAR_4->rate) {
    VAR_6 = VAR_5;
    break;
   }
  }
 }

 return FUNC_1(VAR_4->regmap, VAR_1,
      VAR_0, VAR_6);
}
