
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct page* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;

void FUNC_6(struct page *VAR_2)
{
 FUNC_0(VAR_1 != 7);
 VAR_2 = FUNC_4(VAR_2);
 FUNC_2(!FUNC_1(VAR_2), VAR_2);
 if (FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_5(VAR_2, VAR_0);
}
