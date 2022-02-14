
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_pages {unsigned long flags; int * nmask; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static inline bool FUNC_2(struct page *VAR_1,
     struct queue_pages *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4 = VAR_2->flags;

 return FUNC_0(VAR_3, *VAR_2->nmask) == !(VAR_4 & VAR_0);
}
