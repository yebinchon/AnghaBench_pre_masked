
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
    struct vm_area_struct *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 VAR_2->vm_page_prot = FUNC_0(VAR_2->vm_page_prot);
 return FUNC_1(VAR_2, VAR_2->vm_start,
          VAR_3->dma_addr >> VAR_0,
          VAR_2->vm_end - VAR_2->vm_start,
          VAR_2->vm_page_prot);
}
