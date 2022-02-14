
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_page_prot; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long dma_addr; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
 struct vm_area_struct *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 unsigned long VAR_4, VAR_5;
 int VAR_6;


 VAR_2->vm_page_prot = FUNC_1(VAR_2->vm_page_prot);
 VAR_4 = VAR_2->vm_end - VAR_2->vm_start;
 VAR_5 = VAR_2->vm_pgoff << VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_2->vm_start,
   (VAR_3->dma_addr + VAR_5) >> VAR_0,
   VAR_4, VAR_2->vm_page_prot);

 return VAR_6;
}
