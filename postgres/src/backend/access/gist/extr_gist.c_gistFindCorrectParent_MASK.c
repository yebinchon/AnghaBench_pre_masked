
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rightlink; } ;
struct TYPE_7__ {scalar_t__ downlinkoffnum; scalar_t__ lsn; scalar_t__ blkno; void* buffer; struct TYPE_7__* parent; void* page; } ;
struct TYPE_6__ {int t_tid; } ;
typedef int Relation ;
typedef void* Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ GISTInsertStack ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (void*,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,scalar_t__) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;
 void* FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 TYPE_2__* FUNC_12 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_13 (int ,void*) ;

__attribute__((used)) static void
FUNC_14(Relation VAR_4, GISTInsertStack *VAR_5)
{
 GISTInsertStack *VAR_6 = VAR_5->parent;

 FUNC_13(VAR_4, VAR_6->buffer);
 VAR_6->page = (Page) FUNC_0(VAR_6->buffer);


 if (VAR_5->downlinkoffnum == VAR_3 ||
  VAR_6->lsn != FUNC_7(VAR_6->page))
 {

  OffsetNumber VAR_7,
     VAR_8;
  ItemId VAR_9;
  IndexTuple VAR_10;
  GISTInsertStack *VAR_11;

  while (1)
  {
   VAR_8 = FUNC_8(VAR_6->page);
   for (VAR_7 = VAR_0; VAR_7 <= VAR_8; VAR_7 = FUNC_4(VAR_7))
   {
    VAR_9 = FUNC_6(VAR_6->page, VAR_7);
    VAR_10 = (IndexTuple) FUNC_5(VAR_6->page, VAR_9);
    if (FUNC_2(&(VAR_10->t_tid)) == VAR_5->blkno)
    {

     VAR_5->downlinkoffnum = VAR_7;
     return;
    }
   }

   VAR_6->blkno = FUNC_1(VAR_6->page)->rightlink;
   FUNC_11(VAR_6->buffer);
   if (VAR_6->blkno == VAR_2)
   {




    break;
   }
   VAR_6->buffer = FUNC_9(VAR_4, VAR_6->blkno);
   FUNC_3(VAR_6->buffer, VAR_1);
   FUNC_13(VAR_4, VAR_6->buffer);
   VAR_6->page = (Page) FUNC_0(VAR_6->buffer);
  }






  VAR_11 = VAR_5->parent->parent;

  while (VAR_11)
  {
   FUNC_10(VAR_11->buffer);
   VAR_11 = VAR_11->parent;
  }


  VAR_11 = VAR_6 = FUNC_12(VAR_4, VAR_5->blkno, &VAR_5->downlinkoffnum);



  while (VAR_11)
  {
   VAR_11->buffer = FUNC_9(VAR_4, VAR_11->blkno);
   VAR_11->page = (Page) FUNC_0(VAR_11->buffer);
   VAR_11 = VAR_11->parent;
  }


  VAR_5->parent = VAR_6;


  FUNC_3(VAR_5->parent->buffer, VAR_1);
  FUNC_14(VAR_4, VAR_5);
 }

 return;
}
