
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int * mapping; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,unsigned int) ;

__attribute__((used)) static struct page *FUNC_7(gfp_t VAR_2, unsigned int VAR_3)
{
 struct page *VAR_4;

 if (FUNC_4(VAR_1))
  return ((void*)0);
 VAR_4 = FUNC_1(VAR_2 & ~VAR_0, VAR_3);
 if (VAR_4) {
  unsigned int VAR_5, VAR_6;

  VAR_4->mapping = ((void*)0);
  FUNC_6(VAR_4, VAR_3);
  VAR_5 = 1 << VAR_3;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   FUNC_0(VAR_4 + VAR_6);

  FUNC_2(FUNC_5(VAR_4), VAR_5,
         VAR_2);

  if (VAR_2 & VAR_0)
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    FUNC_3(VAR_4 + VAR_6);
 }

 return VAR_4;
}
