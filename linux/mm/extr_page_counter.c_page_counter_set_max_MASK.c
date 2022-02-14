
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {unsigned long max; int usage; } ;


 int VAR_0 ;
 long FUNC_0 (int *) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long*,unsigned long) ;

int FUNC_3(struct page_counter *VAR_1, unsigned long VAR_2)
{
 for (;;) {
  unsigned long VAR_3;
  long VAR_4;
  VAR_4 = FUNC_0(&VAR_1->usage);

  if (VAR_4 > VAR_2)
   return -VAR_0;

  VAR_3 = FUNC_2(&VAR_1->max, VAR_2);

  if (FUNC_0(&VAR_1->usage) <= VAR_4)
   return 0;

  VAR_1->max = VAR_3;
  FUNC_1();
 }
}
