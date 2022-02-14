
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int val_bytes; int regmap; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_component *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->regmap);


 if (VAR_1 > 0)
  VAR_0->val_bytes = VAR_1;
}
