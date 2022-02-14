
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;


 int FUNC_0 (struct page*) ;

__attribute__((used)) static inline bool FUNC_1(struct page *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return (unsigned long)VAR_0[2].mapping == -1U;
}
