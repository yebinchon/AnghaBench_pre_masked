
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs4271_private {int gpio_nreset; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 struct cs4271_private* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_0)
{
 struct cs4271_private *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_1(VAR_1->gpio_nreset)) {
  FUNC_0(VAR_1->gpio_nreset, 0);
  FUNC_3(1);
  FUNC_2(VAR_1->gpio_nreset, 1);
  FUNC_3(1);
 }

 return 0;
}
