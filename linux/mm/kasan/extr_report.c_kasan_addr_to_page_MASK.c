
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 void const* VAR_1 ;
 struct page* FUNC_0 (void const*) ;

struct page *FUNC_1(const void *VAR_2)
{
 if ((VAR_2 >= (void *)VAR_0) &&
   (VAR_2 < VAR_1))
  return FUNC_0(VAR_2);
 return ((void*)0);
}
