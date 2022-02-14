
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {int shift; unsigned int depth; unsigned int map_nr; TYPE_1__* map; } ;
typedef int gfp_t ;
struct TYPE_2__ {int swap_lock; scalar_t__ depth; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (unsigned int,int,int ,int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct sbitmap *VAR_3, unsigned int VAR_4, int VAR_5,
        gfp_t VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (VAR_5 < 0) {
  VAR_5 = FUNC_1(VAR_0);






  if (VAR_4 >= 4) {
   while ((4U << VAR_5) > VAR_4)
    VAR_5--;
  }
 }
 VAR_8 = 1U << VAR_5;
 if (VAR_8 > VAR_0)
  return -VAR_1;

 VAR_3->shift = VAR_5;
 VAR_3->depth = VAR_4;
 VAR_3->map_nr = FUNC_0(VAR_3->depth, VAR_8);

 if (VAR_4 == 0) {
  VAR_3->map = ((void*)0);
  return 0;
 }

 VAR_3->map = FUNC_2(VAR_3->map_nr, sizeof(*VAR_3->map), VAR_6, VAR_7);
 if (!VAR_3->map)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_3->map_nr; VAR_9++) {
  VAR_3->map[VAR_9].depth = FUNC_3(VAR_4, VAR_8);
  VAR_4 -= VAR_3->map[VAR_9].depth;
  FUNC_4(&VAR_3->map[VAR_9].swap_lock);
 }
 return 0;
}
