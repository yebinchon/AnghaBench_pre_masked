
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 size_t const VAR_1 ;
 struct page** FUNC_0 (size_t const,int ) ;
 struct page** FUNC_1 (size_t const) ;

__attribute__((used)) static struct page **FUNC_2(unsigned int VAR_2)
{
 const size_t VAR_3 = VAR_2 * sizeof(struct page *);
 if (VAR_3 > VAR_1)
  return FUNC_1(VAR_3);
 return FUNC_0(VAR_3, VAR_0);
}
