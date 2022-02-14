
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct page*,struct page*) ;
 struct page* FUNC_2 (struct page*,struct page*,int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_0, struct page *VAR_1,
    int VAR_2)
{
 int VAR_3;
 struct page *VAR_4 = VAR_0;
 struct page *VAR_5 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2; ) {
  FUNC_0();
  FUNC_1(VAR_0, VAR_1);

  VAR_3++;
  VAR_0 = FUNC_2(VAR_0, VAR_4, VAR_3);
  VAR_1 = FUNC_2(VAR_1, VAR_5, VAR_3);
 }
}
