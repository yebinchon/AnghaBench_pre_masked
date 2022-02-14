
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct aaci_runtime {int cr; scalar_t__ pcm_open; int pcm; } ;
struct TYPE_2__ {struct aaci_runtime* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct aaci_runtime *VAR_2 = VAR_1->runtime->private_data;




 FUNC_0(VAR_2->cr & VAR_0);

 if (VAR_2->pcm_open)
  FUNC_1(VAR_2->pcm);
 VAR_2->pcm_open = 0;




 FUNC_2(VAR_1);

 return 0;
}
