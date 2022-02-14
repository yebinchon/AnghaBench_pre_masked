
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_page_iter {scalar_t__ sg_pgoffset; int __pg_advance; scalar_t__ sg; int __nents; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

bool FUNC_2(struct sg_page_iter *VAR_0)
{
 if (!VAR_0->__nents || !VAR_0->sg)
  return 0;

 VAR_0->sg_pgoffset += VAR_0->__pg_advance;
 VAR_0->__pg_advance = 1;

 while (VAR_0->sg_pgoffset >= FUNC_1(VAR_0->sg)) {
  VAR_0->sg_pgoffset -= FUNC_1(VAR_0->sg);
  VAR_0->sg = FUNC_0(VAR_0->sg);
  if (!--VAR_0->__nents || !VAR_0->sg)
   return 0;
 }

 return 1;
}
