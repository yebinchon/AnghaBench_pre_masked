
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {unsigned long start; unsigned long end; } ;
struct page {int dummy; } ;
struct dev_dax {TYPE_1__* region; } ;
typedef unsigned long phys_addr_t ;
typedef int pgoff_t ;
struct TYPE_2__ {int align; struct resource res; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (void*) ;

phys_addr_t FUNC_4(struct dev_dax *VAR_1, pgoff_t VAR_2,
  unsigned long VAR_3)
{
 struct resource *VAR_4 = &VAR_1->region->res;
 phys_addr_t VAR_5;

 VAR_5 = VAR_2 * VAR_0 + VAR_4->start;
 if (VAR_5 >= VAR_4->start && VAR_5 <= VAR_4->end) {
  if (VAR_5 + VAR_3 - 1 <= VAR_4->end) {
   if (FUNC_1(VAR_5)) {
    struct page *VAR_6;

    if (VAR_1->region->align > VAR_0)
     return -1;

    VAR_6 = FUNC_3((void *)VAR_5);
    return FUNC_0(FUNC_2(VAR_6));
   } else
    return VAR_5;
  }
 }
 return -1;
}
