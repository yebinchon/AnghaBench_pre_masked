
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page** FUNC_0 (int ) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page**,int) ;
 struct page** FUNC_3 (int,int,int ) ;

struct page **FUNC_4(int VAR_1, gfp_t VAR_2)
{
 struct page **VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return FUNC_0(-VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3[VAR_4] = FUNC_1(VAR_2);
  if (VAR_3[VAR_4] == ((void*)0)) {
   FUNC_2(VAR_3, VAR_4);
   return FUNC_0(-VAR_0);
  }
 }
 return VAR_3;
}
