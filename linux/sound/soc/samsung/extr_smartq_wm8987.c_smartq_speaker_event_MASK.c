
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct gpio_desc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gpio_desc*,int ) ;
 struct gpio_desc* FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
    struct snd_kcontrol *VAR_2,
    int VAR_3)
{
 struct gpio_desc *VAR_4 = FUNC_2(&VAR_0);

 FUNC_1(VAR_4, FUNC_0(VAR_3));

 return 0;
}
