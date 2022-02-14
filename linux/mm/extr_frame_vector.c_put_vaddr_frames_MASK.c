
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct frame_vector {int got_ref; int nr_frames; } ;


 int FUNC_0 (struct page**) ;
 scalar_t__ FUNC_1 (int ) ;
 struct page** FUNC_2 (struct frame_vector*) ;
 int FUNC_3 (struct page*) ;

void FUNC_4(struct frame_vector *VAR_0)
{
 int VAR_1;
 struct page **VAR_2;

 if (!VAR_0->got_ref)
  goto out;
 VAR_2 = FUNC_2(VAR_0);





 if (FUNC_1(FUNC_0(VAR_2)))
  goto out;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_frames; VAR_1++)
  FUNC_3(VAR_2[VAR_1]);
 VAR_0->got_ref = 0;
out:
 VAR_0->nr_frames = 0;
}
