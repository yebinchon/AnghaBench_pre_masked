
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {unsigned long low; int usage; struct page_counter* parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct page_counter*,int ) ;

void FUNC_2(struct page_counter *VAR_0, unsigned long VAR_1)
{
 struct page_counter *VAR_2;

 VAR_0->low = VAR_1;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->parent)
  FUNC_1(VAR_2, FUNC_0(&VAR_2->usage));
}
