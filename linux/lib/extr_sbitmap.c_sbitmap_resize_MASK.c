
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbitmap {unsigned int shift; unsigned int map_nr; unsigned int depth; TYPE_1__* map; } ;
struct TYPE_2__ {scalar_t__ depth; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct sbitmap*,unsigned int) ;

void FUNC_3(struct sbitmap *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = 1U << VAR_0->shift;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->map_nr; VAR_3++)
  FUNC_2(VAR_0, VAR_3);

 VAR_0->depth = VAR_1;
 VAR_0->map_nr = FUNC_0(VAR_0->depth, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0->map_nr; VAR_3++) {
  VAR_0->map[VAR_3].depth = FUNC_1(VAR_1, VAR_2);
  VAR_1 -= VAR_0->map[VAR_3].depth;
 }
}
