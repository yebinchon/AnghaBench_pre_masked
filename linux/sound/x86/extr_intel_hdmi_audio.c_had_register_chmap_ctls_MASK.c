
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm {int dummy; } ;
struct snd_intelhad {TYPE_2__* chmap; } ;
struct TYPE_4__ {int * chmap; TYPE_1__* kctl; struct snd_intelhad* private_data; } ;
struct TYPE_3__ {int get; int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm*,int ,int *,int ,unsigned long,TYPE_2__**) ;

__attribute__((used)) static int FUNC_1(struct snd_intelhad *VAR_3,
      struct snd_pcm *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0,
   ((void*)0), 0, (unsigned long)VAR_3,
   &VAR_3->chmap);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->chmap->private_data = VAR_3;
 VAR_3->chmap->kctl->info = VAR_2;
 VAR_3->chmap->kctl->get = VAR_1;
 VAR_3->chmap->chmap = ((void*)0);
 return 0;
}
