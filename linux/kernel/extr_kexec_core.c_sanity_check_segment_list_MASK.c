
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kimage {unsigned long nr_segments; scalar_t__ type; TYPE_1__* segment; } ;
struct TYPE_4__ {int end; int start; } ;
struct TYPE_3__ {unsigned long mem; unsigned long memsz; scalar_t__ bufsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_4 ;
 TYPE_2__ VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 () ;

int FUNC_3(struct kimage *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8 = VAR_6->nr_segments;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10 = FUNC_2();
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  unsigned long VAR_11, VAR_12;

  VAR_11 = VAR_6->segment[VAR_7].mem;
  VAR_12 = VAR_11 + VAR_6->segment[VAR_7].memsz;
  if (VAR_11 > VAR_12)
   return -VAR_0;
  if ((VAR_11 & ~VAR_4) || (VAR_12 & ~VAR_4))
   return -VAR_0;
  if (VAR_12 >= VAR_2)
   return -VAR_0;
 }






 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  unsigned long VAR_13, VAR_14;
  unsigned long VAR_15;

  VAR_13 = VAR_6->segment[VAR_7].mem;
  VAR_14 = VAR_13 + VAR_6->segment[VAR_7].memsz;
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
   unsigned long VAR_16, VAR_17;

   VAR_16 = VAR_6->segment[VAR_15].mem;
   VAR_17 = VAR_16 + VAR_6->segment[VAR_15].memsz;

   if ((VAR_14 > VAR_16) && (VAR_13 < VAR_17))
    return -VAR_1;
  }
 }






 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_6->segment[VAR_7].bufsz > VAR_6->segment[VAR_7].memsz)
   return -VAR_1;
 }






 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (FUNC_0(VAR_6->segment[VAR_7].memsz) > VAR_10 / 2)
   return -VAR_1;

  VAR_9 += FUNC_0(VAR_6->segment[VAR_7].memsz);
 }

 if (VAR_9 > VAR_10 / 2)
  return -VAR_1;
 if (VAR_6->type == VAR_3) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   unsigned long VAR_18, VAR_19;

   VAR_18 = VAR_6->segment[VAR_7].mem;
   VAR_19 = VAR_18 + VAR_6->segment[VAR_7].memsz - 1;

   if ((VAR_18 < FUNC_1(VAR_5.start)) ||
       (VAR_19 > FUNC_1(VAR_5.end)))
    return -VAR_0;
  }
 }

 return 0;
}
