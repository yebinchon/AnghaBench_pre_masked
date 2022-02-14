
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int nr_pages; struct page** pages; } ;


 scalar_t__ FUNC_0 (struct page*) ;

__attribute__((used)) static inline void FUNC_1(const struct vm_struct *VAR_0,
           int (*VAR_1)(struct page *VAR_2))
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_pages; VAR_3++)
  if (FUNC_0(VAR_0->pages[VAR_3]))
   VAR_1(VAR_0->pages[VAR_3]);
}
