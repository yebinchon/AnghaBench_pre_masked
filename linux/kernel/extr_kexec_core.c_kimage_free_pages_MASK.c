
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (struct page*) ;
 unsigned int FUNC_4 (struct page*) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3;

 VAR_1 = FUNC_4(VAR_0);
 VAR_2 = 1 << VAR_1;

 FUNC_2(FUNC_3(VAR_0), VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0 + VAR_3);
 FUNC_1(VAR_0, VAR_1);
}
