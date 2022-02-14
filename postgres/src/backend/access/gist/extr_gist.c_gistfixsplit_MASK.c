
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int buffer; int downlinkoffnum; int page; int blkno; } ;
struct TYPE_13__ {int r; TYPE_3__* stack; } ;
struct TYPE_12__ {int downlink; int buf; } ;
struct TYPE_11__ {int rightlink; } ;
typedef int Page ;
typedef int List ;
typedef int IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_1__ GISTPageSplitInfo ;
typedef TYPE_2__ GISTInsertState ;
typedef TYPE_3__ GISTInsertStack ;
typedef int Buffer ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_10__* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int *,int *,int) ;
 int FUNC_10 (int ,int ,int *,TYPE_3__*) ;
 int * FUNC_11 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(GISTInsertState *VAR_3, GISTSTATE *VAR_4)
{
 GISTInsertStack *VAR_5 = VAR_3->stack;
 Buffer VAR_6;
 Page VAR_7;
 List *VAR_8 = VAR_2;

 FUNC_8(VAR_1, "fixing incomplete split in index \"%s\", block %u",
   FUNC_7(VAR_3->r), VAR_5->blkno);

 FUNC_0(FUNC_2(VAR_5->page));
 FUNC_0(FUNC_5(VAR_5->downlinkoffnum));

 VAR_6 = VAR_5->buffer;





 for (;;)
 {
  GISTPageSplitInfo *VAR_9 = FUNC_12(sizeof(GISTPageSplitInfo));
  IndexTuple VAR_10;

  VAR_7 = FUNC_1(VAR_6);


  VAR_10 = FUNC_10(VAR_3->r, VAR_6, VAR_4, VAR_5);

  VAR_9->buf = VAR_6;
  VAR_9->downlink = VAR_10;

  VAR_8 = FUNC_11(VAR_8, VAR_9);

  if (FUNC_2(VAR_7))
  {

   VAR_6 = FUNC_6(VAR_3->r, FUNC_3(VAR_7)->rightlink);
   FUNC_4(VAR_6, VAR_0);
  }
  else
   break;
 }


 FUNC_9(VAR_3, VAR_5, VAR_4, VAR_8, 0);
}
