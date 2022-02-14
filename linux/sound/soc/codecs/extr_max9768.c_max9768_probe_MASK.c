
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct max9768 {int flags; int mute_gpio; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;
 struct max9768* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4)
{
 struct max9768 *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 if (VAR_5->flags & VAR_2) {
  VAR_6 = FUNC_2(VAR_5->regmap, VAR_0,
   VAR_1);
  if (VAR_6)
   return VAR_6;
 }

 if (FUNC_1(VAR_5->mute_gpio)) {
  VAR_6 = FUNC_3(VAR_4, VAR_3,
    FUNC_0(VAR_3));
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
