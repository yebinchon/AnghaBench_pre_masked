
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_card* alsa_card; } ;


 TYPE_1__* VAR_0 ;

struct snd_card *FUNC_0(void)
{
 if (VAR_0)
  return VAR_0->alsa_card;
 return ((void*)0);
}
