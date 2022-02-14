
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_array {int entry_size_shift; int entries_per_page; unsigned int n_pages; int entry_shift; int entry_mask; void** pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 void** FUNC_2 (int,int,int ) ;
 struct tracing_map_array* FUNC_3 (int,int ) ;
 unsigned int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct tracing_map_array*) ;

struct tracing_map_array *FUNC_6(unsigned int VAR_2,
        unsigned int VAR_3)
{
 struct tracing_map_array *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->entry_size_shift = FUNC_0(FUNC_4(VAR_3) - 1);
 VAR_4->entries_per_page = VAR_1 / (1 << VAR_4->entry_size_shift);
 VAR_4->n_pages = VAR_2 / VAR_4->entries_per_page;
 if (!VAR_4->n_pages)
  VAR_4->n_pages = 1;
 VAR_4->entry_shift = FUNC_0(VAR_4->entries_per_page) - 1;
 VAR_4->entry_mask = (1 << VAR_4->entry_shift) - 1;

 VAR_4->pages = FUNC_2(VAR_4->n_pages, sizeof(void *), VAR_0);
 if (!VAR_4->pages)
  goto free;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_pages; VAR_5++) {
  VAR_4->pages[VAR_5] = (void *)FUNC_1(VAR_0);
  if (!VAR_4->pages[VAR_5])
   goto free;
 }
 out:
 return VAR_4;
 free:
 FUNC_5(VAR_4);
 VAR_4 = ((void*)0);

 goto out;
}
