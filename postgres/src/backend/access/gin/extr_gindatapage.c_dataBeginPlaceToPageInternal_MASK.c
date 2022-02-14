
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PostingItem ;
typedef int Page ;
typedef int GinPlaceToPageRC ;
typedef int GinBtreeStack ;
typedef int GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,void*,int ,int *,int *) ;

__attribute__((used)) static GinPlaceToPageRC
FUNC_3(GinBtree VAR_2, Buffer VAR_3, GinBtreeStack *VAR_4,
        void *VAR_5, BlockNumber VAR_6,
        void **VAR_7,
        Page *VAR_8, Page *VAR_9)
{
 Page VAR_10 = FUNC_0(VAR_3);


 if (FUNC_1(VAR_10) < sizeof(PostingItem))
 {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_8, VAR_9);
  return VAR_1;
 }


 return VAR_0;
}
