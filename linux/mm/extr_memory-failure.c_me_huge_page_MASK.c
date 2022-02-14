
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,unsigned long,struct address_space*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct page *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 struct page *VAR_5 = FUNC_2(VAR_2);
 struct address_space *VAR_6;

 if (!FUNC_1(VAR_5))
  return VAR_0;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  VAR_4 = FUNC_7(VAR_5, VAR_3, VAR_6);
 } else {
  FUNC_8(VAR_5);





  if (FUNC_0(VAR_5))
   FUNC_6(VAR_5);
  FUNC_3(VAR_2);
  VAR_4 = VAR_1;
  FUNC_4(VAR_5);
 }

 return VAR_4;
}
