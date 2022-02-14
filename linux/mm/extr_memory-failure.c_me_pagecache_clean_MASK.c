
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
 struct address_space* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,unsigned long,struct address_space*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_2, unsigned long VAR_3)
{
 struct address_space *VAR_4;

 FUNC_1(VAR_2);





 if (FUNC_0(VAR_2))
  return VAR_1;
 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4) {



  return VAR_0;
 }






 return FUNC_3(VAR_2, VAR_3, VAR_4);
}
