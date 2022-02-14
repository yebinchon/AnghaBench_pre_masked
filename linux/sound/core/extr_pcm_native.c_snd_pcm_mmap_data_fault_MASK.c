
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; struct page* page; TYPE_2__* vma; } ;
struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct snd_pcm_substream* vm_private_data; } ;
struct TYPE_3__ {struct page* (* page ) (struct snd_pcm_substream*,unsigned long) ;} ;


 size_t FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct snd_pcm_substream*,unsigned long) ;
 struct page* FUNC_3 (struct snd_pcm_substream*,unsigned long) ;

__attribute__((used)) static vm_fault_t FUNC_4(struct vm_fault *VAR_3)
{
 struct snd_pcm_substream *VAR_4 = VAR_3->vma->vm_private_data;
 struct snd_pcm_runtime *VAR_5;
 unsigned long VAR_6;
 struct page * VAR_7;
 size_t VAR_8;

 if (VAR_4 == ((void*)0))
  return VAR_2;
 VAR_5 = VAR_4->runtime;
 VAR_6 = VAR_3->pgoff << VAR_0;
 VAR_8 = FUNC_0(VAR_5->dma_bytes);
 if (VAR_6 > VAR_8 - VAR_1)
  return VAR_2;
 if (VAR_4->ops->page)
  VAR_7 = VAR_4->ops->page(VAR_4, VAR_6);
 else
  VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (!VAR_7)
  return VAR_2;
 FUNC_1(VAR_7);
 VAR_3->page = VAR_7;
 return 0;
}
