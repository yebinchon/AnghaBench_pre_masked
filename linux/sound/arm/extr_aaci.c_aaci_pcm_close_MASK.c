
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct aaci* private_data; } ;
struct aaci_runtime {int cr; int * substream; } ;
struct aaci {int irq_lock; TYPE_1__* dev; int users; } ;
struct TYPE_4__ {struct aaci_runtime* private_data; } ;
struct TYPE_3__ {int * irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct aaci*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct aaci *VAR_2 = VAR_1->private_data;
 struct aaci_runtime *VAR_3 = VAR_1->runtime->private_data;

 FUNC_0(VAR_3->cr & VAR_0);

 VAR_3->substream = ((void*)0);

 FUNC_2(&VAR_2->irq_lock);
 if (!--VAR_2->users)
  FUNC_1(VAR_2->dev->irq[0], VAR_2);
 FUNC_3(&VAR_2->irq_lock);

 return 0;
}
