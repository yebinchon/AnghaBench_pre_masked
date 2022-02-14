
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int ntodelete; int ntoinsert; } ;
typedef TYPE_1__ gistxlogPageUpdate ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int,scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int ) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ,int *) ;
 char* FUNC_16 (TYPE_2__*,int ,int*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_2__*,int) ;
 int FUNC_19 (int ,char*,int) ;
 int FUNC_20 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_21(XLogReaderState *VAR_4)
{
 XLogRecPtr VAR_5 = VAR_4->EndRecPtr;
 gistxlogPageUpdate *VAR_6 = (gistxlogPageUpdate *) FUNC_17(VAR_4);
 Buffer VAR_7;
 Page VAR_8;

 if (FUNC_15(VAR_4, 0, &VAR_7) == VAR_0)
 {
  char *VAR_9;
  char *VAR_10;
  Size VAR_11;
  int VAR_12 = 0;

  VAR_10 = VAR_9 = FUNC_16(VAR_4, 0, &VAR_11);

  VAR_8 = (Page) FUNC_1(VAR_7);

  if (VAR_6->ntodelete == 1 && VAR_6->ntoinsert == 1)
  {




   OffsetNumber VAR_13 = *((OffsetNumber *) VAR_10);
   IndexTuple VAR_14;
   Size VAR_15;

   VAR_10 += sizeof(OffsetNumber);
   VAR_14 = (IndexTuple) VAR_10;
   VAR_15 = FUNC_5(VAR_14);
   if (!FUNC_11(VAR_8, VAR_13, (Item) VAR_14, VAR_15))
    FUNC_19(VAR_1, "failed to add item to GiST index page, size %d bytes",
      (int) VAR_15);
   VAR_10 += VAR_15;

   FUNC_0(VAR_10 - VAR_9 == VAR_11);

   VAR_12++;
  }
  else if (VAR_6->ntodelete > 0)
  {

   OffsetNumber *VAR_16 = (OffsetNumber *) VAR_10;

   VAR_10 += sizeof(OffsetNumber) * VAR_6->ntodelete;

   FUNC_10(VAR_8, VAR_16, VAR_6->ntodelete);
   if (FUNC_4(VAR_8))
    FUNC_3(VAR_8);
  }


  if (VAR_10 - VAR_9 < VAR_11)
  {
   OffsetNumber VAR_17 = (FUNC_12(VAR_8)) ? VAR_2 :
   FUNC_7(FUNC_9(VAR_8));

   while (VAR_10 - VAR_9 < VAR_11)
   {
    IndexTuple VAR_18 = (IndexTuple) VAR_10;
    Size VAR_19 = FUNC_5(VAR_18);
    OffsetNumber VAR_20;

    VAR_10 += VAR_19;

    VAR_20 = FUNC_8(VAR_8, (Item) VAR_18, VAR_19, VAR_17, 0, 0);
    if (VAR_20 == VAR_3)
     FUNC_19(VAR_1, "failed to add item to GiST index page, size %d bytes",
       (int) VAR_19);
    VAR_17++;
    VAR_12++;
   }
  }


  FUNC_0(VAR_12 == VAR_6->ntoinsert);

  FUNC_13(VAR_8, VAR_5);
  FUNC_6(VAR_7);
 }
 if (FUNC_18(VAR_4, 1))
  FUNC_20(VAR_4, 1);

 if (FUNC_2(VAR_7))
  FUNC_14(VAR_7);
}
