
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_stat {scalar_t__ order; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, void *VAR_1)
{
 struct page_stat *VAR_2 = VAR_0;
 struct page_stat *VAR_3 = VAR_1;

 if (VAR_2->order < VAR_3->order)
  return -1;
 else if (VAR_2->order > VAR_3->order)
  return 1;
 return 0;
}
