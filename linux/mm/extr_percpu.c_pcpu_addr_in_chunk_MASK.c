
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_chunk {int start_offset; int nr_pages; void* end_offset; void* base_addr; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pcpu_chunk *VAR_1, void *VAR_2)
{
 void *VAR_3, *VAR_4;

 if (!VAR_1)
  return 0;

 VAR_3 = VAR_1->base_addr + VAR_1->start_offset;
 VAR_4 = VAR_1->base_addr + VAR_1->nr_pages * VAR_0 -
     VAR_1->end_offset;

 return VAR_2 >= VAR_3 && VAR_2 < VAR_4;
}
