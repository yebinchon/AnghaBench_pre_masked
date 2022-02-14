
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int percpu_pvec_drained; int pages; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pagevec*) ;
 int FUNC_2 (struct pagevec*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct pagevec *VAR_0)
{
 if (!VAR_0->percpu_pvec_drained) {
  FUNC_0();
  VAR_0->percpu_pvec_drained = 1;
 }
 FUNC_3(VAR_0->pages, FUNC_1(VAR_0));
 FUNC_2(VAR_0);
}
