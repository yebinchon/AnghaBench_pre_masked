
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_vector {unsigned int nr_allocated; scalar_t__ nr_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct frame_vector* FUNC_1 (int,int ) ;

struct frame_vector *FUNC_2(unsigned int VAR_2)
{
 struct frame_vector *VAR_3;
 int VAR_4 = sizeof(struct frame_vector) + sizeof(void *) * VAR_2;

 if (FUNC_0(VAR_2 == 0))
  return ((void*)0);




 if (FUNC_0(VAR_2 > VAR_1 / sizeof(void *) / 2))
  return ((void*)0);




 VAR_3 = FUNC_1(VAR_4, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->nr_allocated = VAR_2;
 VAR_3->nr_frames = 0;
 return VAR_3;
}
