
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_format_t ;
struct TYPE_3__ {scalar_t__ alsa; int sndif; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(snd_pcm_format_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_0[VAR_3].alsa == VAR_2)
   return VAR_0[VAR_3].sndif;

 return -VAR_1;
}
