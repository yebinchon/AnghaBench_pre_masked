
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void *FUNC_0(struct page *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = (unsigned long)VAR_1->mapping;
 VAR_2 &= ~VAR_0;

 return (void *)VAR_2;
}
