
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct azx_pcm {struct azx* chip; } ;
struct azx {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* pcm_mmap_prepare ) (struct snd_pcm_substream*,struct vm_area_struct*) ;} ;


 int FUNC_0 (struct snd_pcm_substream*,struct vm_area_struct*) ;
 struct azx_pcm* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
   struct vm_area_struct *VAR_1)
{
 struct azx_pcm *VAR_2 = FUNC_1(VAR_0);
 struct azx *VAR_3 = VAR_2->chip;
 if (VAR_3->ops->pcm_mmap_prepare)
  VAR_3->ops->pcm_mmap_prepare(VAR_0, VAR_1);
 return FUNC_0(VAR_0, VAR_1);
}
