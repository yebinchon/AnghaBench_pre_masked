
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_state {int mask; int res; } ;
struct page {int flags; } ;


 unsigned long VAR_0 ;
 struct page_state* VAR_1 ;
 int FUNC_0 (struct page_state*,struct page*,unsigned long) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2, struct page *VAR_3,
    unsigned long VAR_4)
{
 struct page_state *VAR_5;






 for (VAR_5 = VAR_1;; VAR_5++)
  if ((VAR_3->flags & VAR_5->mask) == VAR_5->res)
   break;

 VAR_4 |= (VAR_3->flags & (1UL << VAR_0));

 if (!VAR_5->mask)
  for (VAR_5 = VAR_1;; VAR_5++)
   if ((VAR_4 & VAR_5->mask) == VAR_5->res)
    break;
 return FUNC_0(VAR_5, VAR_3, VAR_2);
}
