
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Page ;
typedef int GinPlaceToPageRC ;
typedef int GinBtreeStack ;
typedef int GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,void*,int ,void**,int *,int *) ;
 int FUNC_5 (int ,int ,int *,void*,void**,int *,int *) ;

__attribute__((used)) static GinPlaceToPageRC
FUNC_6(GinBtree VAR_0, Buffer VAR_1, GinBtreeStack *VAR_2,
      void *VAR_3, BlockNumber VAR_4,
      void **VAR_5,
      Page *VAR_6, Page *VAR_7)
{
 Page VAR_8 = FUNC_1(VAR_1);

 FUNC_0(FUNC_2(VAR_8));

 if (FUNC_3(VAR_8))
  return FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3,
          VAR_5,
          VAR_6, VAR_7);
 else
  return FUNC_4(VAR_0, VAR_1, VAR_2,
           VAR_3, VAR_4,
           VAR_5,
           VAR_6, VAR_7);
}
