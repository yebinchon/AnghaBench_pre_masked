
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; struct page** cache; } ;
struct page_pool {TYPE_1__ alloc; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct page *VAR_1,
           struct page_pool *VAR_2)
{
 if (FUNC_0(VAR_2->alloc.count == VAR_0))
  return 0;


 VAR_2->alloc.cache[VAR_2->alloc.count++] = VAR_1;
 return 1;
}
