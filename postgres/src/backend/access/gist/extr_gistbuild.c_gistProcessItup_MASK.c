
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int indexrel; int * gfbb; int * giststate; } ;
struct TYPE_13__ {int t_tid; } ;
typedef int Relation ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef int GISTSTATE ;
typedef int GISTNodeBuffer ;
typedef TYPE_2__ GISTBuildState ;
typedef int GISTBuildBuffers ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *,int *,int ,int) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (int *,int *,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,int ,int,TYPE_1__**,int,int ,int ,int ) ;
 int FUNC_15 (int ,scalar_t__,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_16 (int ,TYPE_1__*,TYPE_1__*,int *) ;

__attribute__((used)) static bool
FUNC_17(GISTBuildState *VAR_3, IndexTuple VAR_4,
    BlockNumber VAR_5, int VAR_6)
{
 GISTSTATE *VAR_7 = VAR_3->giststate;
 GISTBuildBuffers *VAR_8 = VAR_3->gfbb;
 Relation VAR_9 = VAR_3->indexrel;
 BlockNumber VAR_10;
 Buffer VAR_11;
 bool VAR_12 = 0;
 BlockNumber VAR_13;
 int VAR_14;
 OffsetNumber VAR_15 = VAR_2;
 BlockNumber VAR_16 = VAR_1;

 FUNC_3();






 VAR_13 = VAR_5;
 VAR_14 = VAR_6;
 for (;;)
 {
  ItemId VAR_17;
  IndexTuple VAR_18,
     VAR_19;
  Page VAR_20;
  OffsetNumber VAR_21;


  if (FUNC_5(VAR_14, VAR_8) && VAR_14 != VAR_6)
   break;


  if (VAR_14 == 0)
   break;






  VAR_11 = FUNC_9(VAR_9, VAR_13);
  FUNC_6(VAR_11, VAR_0);

  VAR_20 = (Page) FUNC_2(VAR_11);
  VAR_21 = FUNC_15(VAR_9, VAR_20, VAR_4, VAR_7);
  VAR_17 = FUNC_8(VAR_20, VAR_21);
  VAR_18 = (IndexTuple) FUNC_7(VAR_20, VAR_17);
  VAR_10 = FUNC_4(&(VAR_18->t_tid));

  if (VAR_14 > 1)
   FUNC_12(VAR_3, VAR_10, VAR_13);





  VAR_19 = FUNC_16(VAR_9, VAR_18, VAR_4, VAR_7);
  if (VAR_19)
  {
   VAR_13 = FUNC_14(VAR_3,
             VAR_11,
             VAR_14,
             &VAR_19,
             1,
             VAR_21,
             VAR_1,
             VAR_2);

  }
  else
   FUNC_10(VAR_11);


  VAR_16 = VAR_13;
  VAR_13 = VAR_10;
  VAR_15 = VAR_21;
  FUNC_0(VAR_14 > 0);
  VAR_14--;
 }

 if (FUNC_5(VAR_14, VAR_8))
 {




  GISTNodeBuffer *VAR_22;


  VAR_22 = FUNC_11(VAR_8, VAR_7, VAR_13, VAR_14);


  FUNC_13(VAR_8, VAR_22, VAR_4);

  if (FUNC_1(VAR_22, VAR_8))
   VAR_12 = 1;
 }
 else
 {



  FUNC_0(VAR_14 == 0);
  VAR_11 = FUNC_9(VAR_9, VAR_13);
  FUNC_6(VAR_11, VAR_0);
  FUNC_14(VAR_3, VAR_11, VAR_14,
          &VAR_4, 1, VAR_2,
          VAR_16, VAR_15);

 }

 return VAR_12;
}
