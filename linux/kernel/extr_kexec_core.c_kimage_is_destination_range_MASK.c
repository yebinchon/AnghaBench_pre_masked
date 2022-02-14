
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {unsigned long nr_segments; TYPE_1__* segment; } ;
struct TYPE_2__ {unsigned long mem; unsigned long memsz; } ;



int FUNC_0(struct kimage *VAR_0,
     unsigned long VAR_1,
     unsigned long VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_segments; VAR_3++) {
  unsigned long VAR_4, VAR_5;

  VAR_4 = VAR_0->segment[VAR_3].mem;
  VAR_5 = VAR_4 + VAR_0->segment[VAR_3].memsz;
  if ((VAR_2 > VAR_4) && (VAR_1 < VAR_5))
   return 1;
 }

 return 0;
}
