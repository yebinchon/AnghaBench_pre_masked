
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rightlink; } ;
struct TYPE_11__ {scalar_t__ rootBlkno; scalar_t__ (* getLeftMostChild ) (TYPE_2__*,int ) ;int index; void* (* findChildPtr ) (TYPE_2__*,int ,scalar_t__,void*) ;} ;
struct TYPE_10__ {scalar_t__ blkno; struct TYPE_10__* parent; void* off; void* buffer; } ;
typedef int Page ;
typedef void* OffsetNumber ;
typedef TYPE_1__ GinBtreeStack ;
typedef TYPE_2__* GinBtree ;
typedef void* Buffer ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_6 (void*,int ) ;
 void* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int,int *) ;
 void* FUNC_12 (void*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (TYPE_2__*,int ) ;
 void* FUNC_15 (TYPE_2__*,int ,scalar_t__,void*) ;

__attribute__((used)) static void
FUNC_16(GinBtree VAR_4, GinBtreeStack *VAR_5)
{
 Page VAR_6;
 Buffer VAR_7;
 BlockNumber VAR_8,
    VAR_9;
 OffsetNumber VAR_10;
 GinBtreeStack *VAR_11;
 GinBtreeStack *VAR_12;
 VAR_11 = VAR_5->parent;
 while (VAR_11->parent)
 {
  FUNC_8(VAR_11->buffer);
  VAR_11 = VAR_11->parent;
 }

 FUNC_0(VAR_11->blkno == VAR_4->rootBlkno);
 FUNC_0(FUNC_1(VAR_11->buffer) == VAR_4->rootBlkno);
 VAR_11->off = VAR_3;

 VAR_8 = VAR_11->blkno;
 VAR_7 = VAR_11->buffer;
 VAR_10 = VAR_3;

 VAR_12 = (GinBtreeStack *) FUNC_13(sizeof(GinBtreeStack));

 for (;;)
 {
  FUNC_6(VAR_7, VAR_1);
  VAR_6 = FUNC_2(VAR_7);
  if (FUNC_5(VAR_6))
   FUNC_10(VAR_0, "Lost path");

  if (FUNC_4(VAR_6))
  {
   FUNC_0(VAR_8 != VAR_4->rootBlkno);
   VAR_12->blkno = VAR_8;
   VAR_12->buffer = VAR_7;





   VAR_12->parent = VAR_11;
   VAR_12->off = VAR_3;

   FUNC_11(VAR_4, VAR_12, 0, ((void*)0));
  }

  VAR_9 = VAR_4->getLeftMostChild(VAR_4, VAR_6);

  while ((VAR_10 = VAR_4->findChildPtr(VAR_4, VAR_6, VAR_5->blkno, VAR_3)) == VAR_3)
  {
   VAR_8 = FUNC_3(VAR_6)->rightlink;
   if (VAR_8 == VAR_2)
   {
    FUNC_9(VAR_7);
    break;
   }
   VAR_7 = FUNC_12(VAR_7, VAR_4->index, VAR_1);
   VAR_6 = FUNC_2(VAR_7);


   if (FUNC_4(VAR_6))
   {
    FUNC_0(VAR_8 != VAR_4->rootBlkno);
    VAR_12->blkno = VAR_8;
    VAR_12->buffer = VAR_7;
    VAR_12->parent = VAR_11;
    VAR_12->off = VAR_3;

    FUNC_11(VAR_4, VAR_12, 0, ((void*)0));
   }
  }

  if (VAR_8 != VAR_2)
  {
   VAR_12->blkno = VAR_8;
   VAR_12->buffer = VAR_7;
   VAR_12->parent = VAR_11;

   VAR_12->off = VAR_10;
   VAR_5->parent = VAR_12;
   return;
  }


  VAR_8 = VAR_9;
  VAR_7 = FUNC_7(VAR_4->index, VAR_8);
 }
}
