
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int index; } ;
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


 int * FUNC_0 (TYPE_1__*,int ,int ,int ,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ,int *,int ) ;
 int * FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static IndexTuple
FUNC_6(GinState *VAR_1,
     OffsetNumber VAR_2, Datum VAR_3, GinNullCategory VAR_4,
     ItemPointerData *VAR_5, uint32 VAR_6,
     GinStatsData *VAR_7, Buffer VAR_8)
{
 IndexTuple VAR_9 = ((void*)0);
 GinPostingList *VAR_10;


 VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_0, ((void*)0));
 if (VAR_10)
 {
  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
         (char *) VAR_10,
         FUNC_2(VAR_10),
         VAR_6, 0);
  FUNC_5(VAR_10);
 }
 if (!VAR_9)
 {

  BlockNumber VAR_11;





  VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0), 0, 0, 1);




  VAR_11 = FUNC_3(VAR_1->index, VAR_5, VAR_6,
          VAR_7, VAR_8);


  FUNC_1(VAR_9, VAR_11);
 }

 return VAR_9;
}
