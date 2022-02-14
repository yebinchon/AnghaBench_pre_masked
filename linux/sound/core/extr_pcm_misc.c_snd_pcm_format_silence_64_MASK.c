
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_format_t ;
struct TYPE_2__ {unsigned char const* silence; int phys; } ;
typedef scalar_t__ INT ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

const unsigned char *FUNC_0(snd_pcm_format_t VAR_2)
{
 if ((INT)VAR_2 < 0 || (INT)VAR_2 > (INT)VAR_0)
  return ((void*)0);
 if (! VAR_1[(INT)VAR_2].phys)
  return ((void*)0);
 return VAR_1[(INT)VAR_2].silence;
}
