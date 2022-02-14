
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {long watermark; int usage; struct page_counter* parent; } ;


 long FUNC_0 (unsigned long,int *) ;
 int FUNC_1 (struct page_counter*,long) ;

void FUNC_2(struct page_counter *VAR_0, unsigned long VAR_1)
{
 struct page_counter *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->parent) {
  long VAR_3;

  VAR_3 = FUNC_0(VAR_1, &VAR_2->usage);
  FUNC_1(VAR_0, VAR_3);




  if (VAR_3 > VAR_2->watermark)
   VAR_2->watermark = VAR_3;
 }
}
