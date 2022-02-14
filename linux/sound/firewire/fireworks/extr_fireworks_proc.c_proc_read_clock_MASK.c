
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_efw* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_efw {int dummy; } ;
typedef enum snd_efw_clock_source { ____Placeholder_snd_efw_clock_source } snd_efw_clock_source ;


 scalar_t__ FUNC_0 (struct snd_efw*,int*) ;
 scalar_t__ FUNC_1 (struct snd_efw*,unsigned int*) ;
 int FUNC_2 (struct snd_info_buffer*,char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct snd_info_entry *VAR_0, struct snd_info_buffer *VAR_1)
{
 struct snd_efw *VAR_2 = VAR_0->private_data;
 enum snd_efw_clock_source VAR_3;
 unsigned int VAR_4;

 if (FUNC_0(VAR_2, &VAR_3) < 0)
  return;

 if (FUNC_1(VAR_2, &VAR_4) < 0)
  return;

 FUNC_2(VAR_1, "Clock Source: %d\n", VAR_3);
 FUNC_2(VAR_1, "Sampling Rate: %d\n", VAR_4);
}
