
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long FUNC_0 (struct page*) ;
 unsigned long FUNC_1 (struct page*) ;

__attribute__((used)) static inline bool FUNC_2(struct page *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0);


 return VAR_1 >= VAR_2 && VAR_1 - VAR_2 < FUNC_0(VAR_0);
}
