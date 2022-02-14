
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct pcm1681_private {scalar_t__ rate; int regmap; scalar_t__ deemph; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int ,int ,int ,int) ;
 struct pcm1681_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 struct pcm1681_private *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0, VAR_7 = -1, VAR_8 = 0;

 if (VAR_5->deemph) {
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
   if (VAR_3[VAR_6] == VAR_5->rate) {
    VAR_7 = VAR_6;
    break;
   }
  }
 }

 if (VAR_7 != -1) {
  FUNC_1(VAR_5->regmap, VAR_0,
       VAR_2, VAR_7 << 3);
  VAR_8 = 1;
 } else {
  VAR_8 = 0;
 }


 return FUNC_1(VAR_5->regmap, VAR_0,
     VAR_1, VAR_8);
}
