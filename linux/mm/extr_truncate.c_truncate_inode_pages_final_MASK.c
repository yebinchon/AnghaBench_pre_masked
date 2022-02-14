
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {unsigned long nrpages; unsigned long nrexceptional; int i_pages; } ;


 int FUNC_0 (struct address_space*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct address_space*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct address_space *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;
 FUNC_0(VAR_0);






 VAR_2 = VAR_0->nrpages;
 FUNC_1();
 VAR_1 = VAR_0->nrexceptional;

 if (VAR_2 || VAR_1) {






  FUNC_3(&VAR_0->i_pages);
  FUNC_4(&VAR_0->i_pages);
 }





 FUNC_2(VAR_0, 0);
}
