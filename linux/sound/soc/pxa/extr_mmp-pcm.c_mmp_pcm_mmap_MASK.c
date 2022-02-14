
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
    struct vm_area_struct *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 unsigned long VAR_3 = VAR_1->vm_pgoff;

 VAR_1->vm_page_prot = FUNC_1(VAR_1->vm_page_prot);
 return FUNC_2(VAR_1, VAR_1->vm_start,
  FUNC_0(VAR_2->dma_addr) + VAR_3,
  VAR_1->vm_end - VAR_1->vm_start, VAR_1->vm_page_prot);
}
