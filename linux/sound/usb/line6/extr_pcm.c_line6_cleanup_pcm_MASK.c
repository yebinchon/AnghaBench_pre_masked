
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int dummy; } ;
struct snd_line6_pcm {TYPE_1__* line6; int in; int out; } ;
struct TYPE_2__ {int iso_buffers; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct snd_line6_pcm*) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_pcm*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm *VAR_0)
{
 struct snd_line6_pcm *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->out, VAR_1->line6->iso_buffers);
 FUNC_0(&VAR_1->in, VAR_1->line6->iso_buffers);
 FUNC_1(VAR_1);
}
