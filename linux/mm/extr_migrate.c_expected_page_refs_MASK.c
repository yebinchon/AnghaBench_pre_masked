
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct address_space *VAR_0, struct page *VAR_1)
{
 int VAR_2 = 1;





 VAR_2 += FUNC_1(VAR_1);
 if (VAR_0)
  VAR_2 += FUNC_0(VAR_1) + FUNC_2(VAR_1);

 return VAR_2;
}
