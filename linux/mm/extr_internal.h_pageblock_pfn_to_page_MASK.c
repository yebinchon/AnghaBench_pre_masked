
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {scalar_t__ contiguous; } ;
struct page {int dummy; } ;


 struct page* FUNC_0 (unsigned long,unsigned long,struct zone*) ;
 struct page* FUNC_1 (unsigned long) ;

__attribute__((used)) static inline struct page *FUNC_2(unsigned long VAR_0,
    unsigned long VAR_1, struct zone *VAR_2)
{
 if (VAR_2->contiguous)
  return FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
