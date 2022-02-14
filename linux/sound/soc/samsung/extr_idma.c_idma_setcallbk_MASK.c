
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct idma_ctrl {void (* cb ) (void*,int) ;int lock; } ;
struct TYPE_2__ {struct idma_ctrl* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
    void (*VAR_1)(void *, int))
{
 struct idma_ctrl *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(&VAR_2->lock);
 VAR_2->cb = VAR_1;
 FUNC_1(&VAR_2->lock);
}
