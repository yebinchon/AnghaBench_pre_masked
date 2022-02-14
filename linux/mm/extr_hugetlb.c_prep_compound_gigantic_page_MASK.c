
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct page*,struct page*,int) ;
 int FUNC_5 (struct page*,struct page*) ;
 int FUNC_6 (struct page*,unsigned int) ;
 int FUNC_7 (struct page*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_0, unsigned int VAR_1)
{
 int VAR_2;
 int VAR_3 = 1 << VAR_1;
 struct page *VAR_4 = VAR_0 + 1;


 FUNC_6(VAR_0, VAR_1);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++, VAR_4 = FUNC_4(VAR_4, VAR_0, VAR_2)) {
  FUNC_0(VAR_4);
  FUNC_7(VAR_4, 0);
  FUNC_5(VAR_4, VAR_0);
 }
 FUNC_2(FUNC_3(VAR_0), -1);
}
