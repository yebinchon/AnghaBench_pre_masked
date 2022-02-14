
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int off; } ;
typedef int Page ;
typedef int OffsetNumber ;
typedef int GinPlaceToPageRC ;
typedef TYPE_1__ GinBtreeStack ;
typedef int GinBtreeEntryInsertData ;
typedef int GinBtree ;
typedef int Buffer ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*,int *,int ,int *,int *) ;

__attribute__((used)) static GinPlaceToPageRC
FUNC_2(GinBtree VAR_2, Buffer VAR_3, GinBtreeStack *VAR_4,
       void *VAR_5, BlockNumber VAR_6,
       void **VAR_7,
       Page *VAR_8, Page *VAR_9)
{
 GinBtreeEntryInsertData *VAR_10 = VAR_5;
 OffsetNumber VAR_11 = VAR_4->off;


 if (!FUNC_0(VAR_2, VAR_3, VAR_11, VAR_10))
 {
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_10, VAR_6,
        VAR_8, VAR_9);
  return VAR_1;
 }


 return VAR_0;
}
