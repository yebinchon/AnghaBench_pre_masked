
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int,int ,int) ;
 struct page* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static void *FUNC_5(gfp_t VAR_2, int VAR_3, int VAR_4)
{
 struct page *VAR_5;






  VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_5)
  return ((void*)0);

 FUNC_2(FUNC_4(VAR_5), VAR_0,
       1 << VAR_3);
 return FUNC_3(VAR_5);
}
