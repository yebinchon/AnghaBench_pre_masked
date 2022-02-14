
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {int usage; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (struct page_counter*,long) ;

void FUNC_3(struct page_counter *VAR_0, unsigned long VAR_1)
{
 long VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_0->usage);
 FUNC_2(VAR_0, VAR_2);

 FUNC_0(VAR_2 < 0);
}
