
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9aclc_dmadata {int pos; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct txx9aclc_dmadata* private_data; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct txx9aclc_dmadata *VAR_1 = VAR_0->runtime->private_data;

 return FUNC_0(VAR_0->runtime, VAR_1->pos);
}
