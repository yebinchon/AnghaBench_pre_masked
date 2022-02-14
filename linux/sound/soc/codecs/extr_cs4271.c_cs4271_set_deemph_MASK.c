
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs4271_private {int regmap; scalar_t__ rate; scalar_t__ deemph; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct cs4271_private* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_4)
{
 struct cs4271_private *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7;
 int VAR_8 = VAR_1;

 if (VAR_5->deemph) {

  VAR_8 = 1;
  for (VAR_6 = 2; VAR_6 < FUNC_0(VAR_3); VAR_6++)
   if (FUNC_1(VAR_3[VAR_6] - VAR_5->rate) <
       FUNC_1(VAR_3[VAR_8] - VAR_5->rate))
    VAR_8 = VAR_6;
  VAR_8 <<= 4;
 }

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_0,
  VAR_2, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 return 0;
}
