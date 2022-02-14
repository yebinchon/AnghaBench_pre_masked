
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct frame_vector {int is_pfns; int nr_frames; } ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct frame_vector*) ;
 struct page* FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(struct frame_vector *VAR_1)
{
 int VAR_2;
 unsigned long *VAR_3;
 struct page **VAR_4;

 if (!VAR_1->is_pfns)
  return 0;
 VAR_3 = FUNC_0(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->nr_frames; VAR_2++)
  if (!FUNC_2(VAR_3[VAR_2]))
   return -VAR_0;
 VAR_4 = (struct page **)VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_1->nr_frames; VAR_2++)
  VAR_4[VAR_2] = FUNC_1(VAR_3[VAR_2]);
 VAR_1->is_pfns = 0;
 return 0;
}
