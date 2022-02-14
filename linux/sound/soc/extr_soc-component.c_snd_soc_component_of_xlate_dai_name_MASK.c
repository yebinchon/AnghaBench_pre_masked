
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
struct of_phandle_args {int dummy; } ;
struct TYPE_2__ {int (* of_xlate_dai_name ) (struct snd_soc_component*,struct of_phandle_args*,char const**) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,struct of_phandle_args*,char const**) ;

int FUNC_1(struct snd_soc_component *VAR_1,
     struct of_phandle_args *VAR_2,
     const char **VAR_3)
{
 if (VAR_1->driver->of_xlate_dai_name)
  return VAR_1->driver->of_xlate_dai_name(VAR_1,
           VAR_2, VAR_3);
 return -VAR_0;
}
