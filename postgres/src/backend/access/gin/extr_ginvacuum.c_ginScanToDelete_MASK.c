
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ maxoff; } ;
struct TYPE_8__ {scalar_t__ leftBlkno; int isRoot; struct TYPE_8__* parent; void* blkno; struct TYPE_8__* child; } ;
struct TYPE_7__ {int strategy; int index; } ;
typedef int PostingItem ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef TYPE_1__ GinVacuumState ;
typedef TYPE_2__ DataPageDeleteStack ;
typedef int Buffer ;
typedef void* BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,scalar_t__) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int VAR_4 ;
 void* FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,void*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,void*,scalar_t__,void*,scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static bool
FUNC_14(GinVacuumState *VAR_6, BlockNumber VAR_7, bool VAR_8,
    DataPageDeleteStack *VAR_9, OffsetNumber VAR_10)
{
 DataPageDeleteStack *VAR_11;
 Buffer VAR_12;
 Page VAR_13;
 bool VAR_14 = 0;
 bool VAR_15;

 if (VAR_8)
 {
  VAR_11 = VAR_9;
 }
 else
 {
  if (!VAR_9->child)
  {
   VAR_11 = (DataPageDeleteStack *) FUNC_13(sizeof(DataPageDeleteStack));
   VAR_11->parent = VAR_9;
   VAR_9->child = VAR_11;
   VAR_11->leftBlkno = VAR_3;
  }
  else
   VAR_11 = VAR_9->child;
 }

 VAR_12 = FUNC_10(VAR_6->index, VAR_4, VAR_7,
        VAR_5, VAR_6->strategy);

 if (!VAR_8)
  FUNC_8(VAR_12, VAR_1);

 VAR_13 = FUNC_1(VAR_12);

 FUNC_0(FUNC_5(VAR_13));

 if (!FUNC_6(VAR_13))
 {
  OffsetNumber VAR_16;

  VAR_11->blkno = VAR_7;
  for (VAR_16 = VAR_0; VAR_16 <= FUNC_4(VAR_13)->maxoff; VAR_16++)
  {
   PostingItem *VAR_17 = FUNC_3(VAR_13, VAR_16);

   if (FUNC_14(VAR_6, FUNC_9(VAR_17), 0, VAR_11, VAR_16))
    VAR_16--;
  }
 }

 if (FUNC_6(VAR_13))
  VAR_15 = FUNC_2(VAR_13);
 else
  VAR_15 = FUNC_4(VAR_13)->maxoff < VAR_0;

 if (VAR_15)
 {

  if (VAR_11->leftBlkno != VAR_3 && !FUNC_7(VAR_13))
  {
   FUNC_0(!VAR_8);
   FUNC_12(VAR_6, VAR_7, VAR_11->leftBlkno, VAR_11->parent->blkno, VAR_10, VAR_11->parent->isRoot);
   VAR_14 = 1;
  }
 }

 if (!VAR_8)
  FUNC_8(VAR_12, VAR_2);

 FUNC_11(VAR_12);

 if (!VAR_14)
  VAR_11->leftBlkno = VAR_7;

 return VAR_14;
}
