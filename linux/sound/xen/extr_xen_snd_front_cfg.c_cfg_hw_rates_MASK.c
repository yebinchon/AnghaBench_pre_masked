
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_hardware {unsigned int rates; unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_3__ {unsigned int mask; unsigned int value; int name; } ;


 int ARRAY_SIZE (TYPE_1__*) ;
 TYPE_1__* CFG_HW_SUPPORTED_RATES ;
 int XENSND_LIST_SEPARATOR ;
 int XENSND_SAMPLE_RATE_MAX_LEN ;
 int strncasecmp (char*,int ,int ) ;
 char* strsep (char**,int ) ;

__attribute__((used)) static void cfg_hw_rates(char *list, unsigned int len,
    const char *path, struct snd_pcm_hardware *pcm_hw)
{
 char *cur_rate;
 unsigned int cur_mask;
 unsigned int cur_value;
 unsigned int rates;
 unsigned int rate_min;
 unsigned int rate_max;
 int i;

 rates = 0;
 rate_min = -1;
 rate_max = 0;
 while ((cur_rate = strsep(&list, XENSND_LIST_SEPARATOR))) {
  for (i = 0; i < ARRAY_SIZE(CFG_HW_SUPPORTED_RATES); i++)
   if (!strncasecmp(cur_rate,
      CFG_HW_SUPPORTED_RATES[i].name,
      XENSND_SAMPLE_RATE_MAX_LEN)) {
    cur_mask = CFG_HW_SUPPORTED_RATES[i].mask;
    cur_value = CFG_HW_SUPPORTED_RATES[i].value;
    rates |= cur_mask;
    if (rate_min > cur_value)
     rate_min = cur_value;
    if (rate_max < cur_value)
     rate_max = cur_value;
   }
 }

 if (rates) {
  pcm_hw->rates = rates;
  pcm_hw->rate_min = rate_min;
  pcm_hw->rate_max = rate_max;
 }
}
