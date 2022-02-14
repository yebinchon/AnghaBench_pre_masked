
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct idma_ctrl {int start; int pos; } ;
struct TYPE_2__ {struct idma_ctrl* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct idma_ctrl *VAR_2 = VAR_1->runtime->private_data;

 VAR_2->pos = VAR_2->start;


 FUNC_0(VAR_0);
 FUNC_1(VAR_1);

 return 0;
}
