
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_line6_pcm {TYPE_1__* line6; } ;
struct TYPE_2__ {int iso_buffers; } ;


 int FUNC_0 (struct snd_line6_pcm*) ;

int FUNC_1(struct snd_line6_pcm *VAR_0)
{
 int VAR_1 = 0, VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->line6->iso_buffers; ++VAR_2) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 < 0)
   break;
 }

 return VAR_1;
}
