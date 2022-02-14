
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (unsigned long) ;

unsigned long FUNC_2(const unsigned long *VAR_1, unsigned long VAR_2)
{
 if (VAR_2) {
  unsigned long VAR_3 = FUNC_0(VAR_2);
  unsigned long VAR_4 = (VAR_2-1) / VAR_0;

  do {
   VAR_3 &= VAR_1[VAR_4];
   if (VAR_3)
    return VAR_4 * VAR_0 + FUNC_1(VAR_3);

   VAR_3 = ~0ul;
  } while (VAR_4--);
 }
 return VAR_2;
}
