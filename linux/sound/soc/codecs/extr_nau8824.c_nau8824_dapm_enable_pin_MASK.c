
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {TYPE_1__* component; } ;
struct nau8824 {struct snd_soc_dapm_context* dapm; } ;
typedef int prefixed_pin ;
struct TYPE_2__ {char* name_prefix; } ;


 int FUNC_0 (struct snd_soc_dapm_context*,char const*) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(struct nau8824 *VAR_0, const char *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 = VAR_0->dapm;
 const char *VAR_3 = VAR_2->component->name_prefix;
 char VAR_4[80];

 if (VAR_3) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%s %s",
    VAR_3, VAR_1);
  FUNC_0(VAR_2, VAR_4);
 } else {
  FUNC_0(VAR_2, VAR_1);
 }
}
