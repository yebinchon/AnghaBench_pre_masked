
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dummy; } ;
struct efc_clock {int source; int member_0; } ;
typedef enum snd_efw_clock_source { ____Placeholder_snd_efw_clock_source } snd_efw_clock_source ;


 int FUNC_0 (struct snd_efw*,struct efc_clock*) ;

int FUNC_1(struct snd_efw *VAR_0,
         enum snd_efw_clock_source *VAR_1)
{
 int VAR_2;
 struct efc_clock VAR_3 = {0};

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2 >= 0)
  *VAR_1 = VAR_3.source;

 return VAR_2;
}
