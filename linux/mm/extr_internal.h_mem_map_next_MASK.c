
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline struct page *FUNC_4(struct page *VAR_1,
      struct page *VAR_2, int VAR_3)
{
 if (FUNC_3((VAR_3 & (VAR_0 - 1)) == 0)) {
  unsigned long VAR_4 = FUNC_0(VAR_2) + VAR_3;
  if (!FUNC_2(VAR_4))
   return ((void*)0);
  return FUNC_1(VAR_4);
 }
 return VAR_1 + 1;
}
