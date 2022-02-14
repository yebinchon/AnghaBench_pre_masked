
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct page**,int) ;

void FUNC_3(struct page **VAR_0, int VAR_1)
{
 struct page **VAR_2 = VAR_0;
 int VAR_3;

 FUNC_1();
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_2[VAR_3]);
 FUNC_2(VAR_2, VAR_1);
}
