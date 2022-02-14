
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {scalar_t__ rootBlkno; int fullScan; scalar_t__ (* findChildPage ) (TYPE_2__*,TYPE_1__*) ;int index; scalar_t__ (* isMoveRight ) (TYPE_2__*,int ) ;} ;
struct TYPE_12__ {scalar_t__ blkno; int predictNumber; void* buffer; struct TYPE_12__* parent; int off; } ;
struct TYPE_11__ {scalar_t__ rightlink; } ;
typedef int Snapshot ;
typedef int Page ;
typedef TYPE_1__ GinBtreeStack ;
typedef TYPE_2__* GinBtree ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int *,void*) ;
 int VAR_0 ;
 TYPE_10__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (void*,int ) ;
 void* FUNC_7 (int ,scalar_t__) ;
 void* FUNC_8 (void*,int ,scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int,int *) ;
 void* FUNC_11 (void*,int ,int) ;
 int FUNC_12 (void*,int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*,TYPE_1__*) ;

GinBtreeStack *
FUNC_16(GinBtree VAR_3, bool VAR_4,
    bool VAR_5, Snapshot VAR_6)
{
 GinBtreeStack *VAR_7;

 VAR_7 = (GinBtreeStack *) FUNC_13(sizeof(GinBtreeStack));
 VAR_7->blkno = VAR_3->rootBlkno;
 VAR_7->buffer = FUNC_7(VAR_3->index, VAR_3->rootBlkno);
 VAR_7->parent = ((void*)0);
 VAR_7->predictNumber = 1;

 if (VAR_5)
  FUNC_2(VAR_3->index, ((void*)0), VAR_7->buffer);

 for (;;)
 {
  Page VAR_8;
  BlockNumber VAR_9;
  int VAR_10;

  VAR_7->off = VAR_2;

  VAR_8 = FUNC_1(VAR_7->buffer);
  FUNC_9(VAR_6, VAR_3->index, VAR_8);

  VAR_10 = FUNC_12(VAR_7->buffer, VAR_4);





  if (!VAR_4 && FUNC_4(VAR_8))
   FUNC_10(VAR_3, VAR_7, 0, ((void*)0));





  while (VAR_3->fullScan == 0 && VAR_7->blkno != VAR_3->rootBlkno &&
      VAR_3->isMoveRight(VAR_3, VAR_8))
  {
   BlockNumber VAR_11 = FUNC_3(VAR_8)->rightlink;

   if (VAR_11 == VAR_1)

    break;

   VAR_7->buffer = FUNC_11(VAR_7->buffer, VAR_3->index, VAR_10);
   VAR_7->blkno = VAR_11;
   VAR_8 = FUNC_1(VAR_7->buffer);
   FUNC_9(VAR_6, VAR_3->index, VAR_8);

   if (!VAR_4 && FUNC_4(VAR_8))
    FUNC_10(VAR_3, VAR_7, 0, ((void*)0));
  }

  if (FUNC_5(VAR_8))
   return VAR_7;


  VAR_9 = VAR_3->findChildPage(VAR_3, VAR_7);

  FUNC_6(VAR_7->buffer, VAR_0);
  FUNC_0(VAR_9 != VAR_1);
  FUNC_0(VAR_7->blkno != VAR_9);

  if (VAR_4)
  {

   VAR_7->blkno = VAR_9;
   VAR_7->buffer = FUNC_8(VAR_7->buffer, VAR_3->index, VAR_7->blkno);
  }
  else
  {
   GinBtreeStack *VAR_12 = (GinBtreeStack *) FUNC_13(sizeof(GinBtreeStack));

   VAR_12->parent = VAR_7;
   VAR_7 = VAR_12;
   VAR_7->blkno = VAR_9;
   VAR_7->buffer = FUNC_7(VAR_3->index, VAR_7->blkno);
   VAR_7->predictNumber = 1;
  }
 }
}
