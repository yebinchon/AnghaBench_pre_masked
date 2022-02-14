
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct address_space*,int ) ;
 int FUNC_2 (struct page*,unsigned long) ;
 struct address_space* FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_1, unsigned long VAR_2)
{
 struct address_space *VAR_3 = FUNC_3(VAR_1);

 FUNC_0(VAR_1);

 if (VAR_3) {
  FUNC_1(VAR_3, -VAR_0);
 }

 return FUNC_2(VAR_1, VAR_2);
}
