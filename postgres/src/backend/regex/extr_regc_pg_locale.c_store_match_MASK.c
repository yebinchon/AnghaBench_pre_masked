
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* pg_wchar ;
struct TYPE_4__ {int nranges; int rangespace; int nchrs; int chrspace; void** chrs; void** ranges; } ;
struct TYPE_5__ {TYPE_1__ cv; } ;
typedef TYPE_2__ pg_ctype_cache ;
typedef void* chr ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,int) ;

__attribute__((used)) static bool
FUNC_2(pg_ctype_cache *VAR_0, pg_wchar VAR_1, int VAR_2)
{
 chr *VAR_3;

 if (VAR_2 > 1)
 {
  if (VAR_0->cv.nranges >= VAR_0->cv.rangespace)
  {
   VAR_0->cv.rangespace *= 2;
   VAR_3 = (chr *) FUNC_1(VAR_0->cv.ranges,
           VAR_0->cv.rangespace * sizeof(chr) * 2);
   if (VAR_3 == ((void*)0))
    return 0;
   VAR_0->cv.ranges = VAR_3;
  }
  VAR_0->cv.ranges[VAR_0->cv.nranges * 2] = VAR_1;
  VAR_0->cv.ranges[VAR_0->cv.nranges * 2 + 1] = VAR_1 + VAR_2 - 1;
  VAR_0->cv.nranges++;
 }
 else
 {
  FUNC_0(VAR_2 == 1);
  if (VAR_0->cv.nchrs >= VAR_0->cv.chrspace)
  {
   VAR_0->cv.chrspace *= 2;
   VAR_3 = (chr *) FUNC_1(VAR_0->cv.chrs,
           VAR_0->cv.chrspace * sizeof(chr));
   if (VAR_3 == ((void*)0))
    return 0;
   VAR_0->cv.chrs = VAR_3;
  }
  VAR_0->cv.chrs[VAR_0->cv.nchrs++] = VAR_1;
 }
 return 1;
}
