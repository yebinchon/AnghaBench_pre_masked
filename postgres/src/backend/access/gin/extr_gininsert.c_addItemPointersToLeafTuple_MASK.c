
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int index; } ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int * IndexTuple ;
typedef int GinStatsData ;
typedef TYPE_1__ GinState ;
typedef int GinPostingList ;
typedef int GinNullCategory ;
typedef int Datum ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int ,char*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int,int *,int ) ;
 int * FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int ,int ,int *,int ,int *) ;
 int * FUNC_8 (int *,int ,int *,int,int*) ;
 int * FUNC_9 (TYPE_1__*,int ,int *,int*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static IndexTuple
FUNC_13(GinState *VAR_1,
         IndexTuple VAR_2,
         ItemPointerData *VAR_3, uint32 VAR_4,
         GinStatsData *VAR_5, Buffer VAR_6)
{
 OffsetNumber VAR_7;
 Datum VAR_8;
 GinNullCategory VAR_9;
 IndexTuple VAR_10;
 ItemPointerData *VAR_11,
      *VAR_12;
 int VAR_13,
    VAR_14;
 GinPostingList *VAR_15;

 FUNC_0(!FUNC_2(VAR_2));

 VAR_7 = FUNC_10(VAR_1, VAR_2);
 VAR_8 = FUNC_11(VAR_1, VAR_2, &VAR_9);


 VAR_12 = FUNC_9(VAR_1, VAR_7, VAR_2, &VAR_13);

 VAR_11 = FUNC_8(VAR_3, VAR_4,
         VAR_12, VAR_13,
         &VAR_14);


 VAR_10 = ((void*)0);
 VAR_15 = FUNC_6(VAR_11, VAR_14, VAR_0,
           ((void*)0));
 FUNC_12(VAR_11);
 if (VAR_15)
 {
  VAR_10 = FUNC_1(VAR_1, VAR_7, VAR_8, VAR_9,
         (char *) VAR_15,
         FUNC_4(VAR_15),
         VAR_14,
         0);
  FUNC_12(VAR_15);
 }
 if (!VAR_10)
 {

  BlockNumber VAR_16;






  VAR_16 = FUNC_5(VAR_1->index,
          VAR_12,
          VAR_13,
          VAR_5,
          VAR_6);


  FUNC_7(VAR_1->index, VAR_16,
         VAR_3, VAR_4,
         VAR_5);


  VAR_10 = FUNC_1(VAR_1, VAR_7, VAR_8, VAR_9, ((void*)0), 0, 0, 1);
  FUNC_3(VAR_10, VAR_16);
 }
 FUNC_12(VAR_12);

 return VAR_10;
}
