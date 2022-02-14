
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const zic_t ;
struct timerange {int count; size_t base; unsigned char defaulttype; int leapcount; size_t leapbase; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const* VAR_1 ;

__attribute__((used)) static struct timerange
FUNC_0(struct timerange VAR_2, zic_t VAR_3, zic_t VAR_4,
     zic_t const *VAR_5, unsigned char const *VAR_6)
{
 while (0 < VAR_2.count && VAR_5[VAR_2.base] < VAR_3)
 {
  VAR_2.defaulttype = VAR_6[VAR_2.base];
  VAR_2.count--;
  VAR_2.base++;
 }
 while (0 < VAR_2.leapcount && VAR_1[VAR_2.leapbase] < VAR_3)
 {
  VAR_2.leapcount--;
  VAR_2.leapbase++;
 }

 if (VAR_4 < VAR_0)
 {
  while (0 < VAR_2.count && VAR_4 + 1 < VAR_5[VAR_2.base + VAR_2.count - 1])
   VAR_2.count--;
  while (0 < VAR_2.leapcount && VAR_4 + 1 < VAR_1[VAR_2.leapbase + VAR_2.leapcount - 1])
   VAR_2.leapcount--;
 }

 return VAR_2;
}
