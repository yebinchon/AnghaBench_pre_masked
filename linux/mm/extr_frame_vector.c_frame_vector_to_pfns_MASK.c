
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct frame_vector {int is_pfns; int nr_frames; scalar_t__ ptrs; } ;


 unsigned long FUNC_0 (struct page*) ;

void FUNC_1(struct frame_vector *VAR_0)
{
 int VAR_1;
 unsigned long *VAR_2;
 struct page **VAR_3;

 if (VAR_0->is_pfns)
  return;
 VAR_3 = (struct page **)(VAR_0->ptrs);
 VAR_2 = (unsigned long *)VAR_3;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_frames; VAR_1++)
  VAR_2[VAR_1] = FUNC_0(VAR_3[VAR_1]);
 VAR_0->is_pfns = 1;
}
