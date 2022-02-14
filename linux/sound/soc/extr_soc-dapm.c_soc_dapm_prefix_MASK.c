
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* component; } ;
struct TYPE_2__ {char const* name_prefix; } ;



__attribute__((used)) static const char *FUNC_0(struct snd_soc_dapm_context *VAR_0)
{
 if (!VAR_0->component)
  return ((void*)0);
 return VAR_0->component->name_prefix;
}
