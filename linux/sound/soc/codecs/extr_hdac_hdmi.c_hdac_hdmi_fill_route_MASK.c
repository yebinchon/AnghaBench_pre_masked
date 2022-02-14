
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_route {char const* sink; char const* source; char const* control; int (* connected ) (struct snd_soc_dapm_widget*,struct snd_soc_dapm_widget*) ;} ;



__attribute__((used)) static void FUNC_0(struct snd_soc_dapm_route *VAR_0,
  const char *VAR_1, const char *VAR_2, const char *VAR_3,
  int (*VAR_4)(struct snd_soc_dapm_widget *VAR_5,
   struct snd_soc_dapm_widget *VAR_6))
{
 VAR_0->sink = VAR_1;
 VAR_0->source = VAR_3;
 VAR_0->control = VAR_2;
 VAR_0->connected = VAR_4;
}
