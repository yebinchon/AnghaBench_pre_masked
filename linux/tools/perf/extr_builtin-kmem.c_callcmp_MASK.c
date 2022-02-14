
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_func {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct alloc_func *VAR_2 = VAR_0;
 const struct alloc_func *VAR_3 = VAR_1;

 if (VAR_3->start <= VAR_2->start && VAR_2->end < VAR_3->end)
  return 0;

 if (VAR_2->start > VAR_3->start)
  return 1;
 else
  return -1;
}
