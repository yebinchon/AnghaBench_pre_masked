
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {struct azx_pcm* private_data; } ;
struct azx_pcm {TYPE_1__* info; int list; } ;
struct TYPE_2__ {int * pcm; } ;


 int FUNC_0 (struct azx_pcm*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_0)
{
 struct azx_pcm *VAR_1 = VAR_0->private_data;
 if (VAR_1) {
  FUNC_1(&VAR_1->list);
  VAR_1->info->pcm = ((void*)0);
  FUNC_0(VAR_1);
 }
}
