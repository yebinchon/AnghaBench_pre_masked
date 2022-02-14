
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int buffer; } ;
struct TYPE_11__ {scalar_t__ buffer; int retry_from_parent; int downlinkoffnum; TYPE_5__* parent; } ;
struct TYPE_10__ {int r; } ;
struct TYPE_9__ {scalar_t__ buf; int downlink; } ;
typedef int List ;
typedef int IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_1__ GISTPageSplitInfo ;
typedef TYPE_2__ GISTInsertState ;
typedef TYPE_3__ GISTInsertStack ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_5__*,int *,int *,int,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(GISTInsertState *VAR_2, GISTInsertStack *VAR_3,
    GISTSTATE *VAR_4, List *VAR_5, bool VAR_6)
{
 GISTPageSplitInfo *VAR_7;
 GISTPageSplitInfo *VAR_8;
 IndexTuple VAR_9[2];


 FUNC_0(FUNC_5(VAR_5) >= 2);
 FUNC_1(VAR_3->parent->buffer, VAR_0);
 FUNC_2(VAR_2->r, VAR_3);





 for (int VAR_10 = FUNC_5(VAR_5) - 1; VAR_10 > 1; VAR_10--)
 {
  VAR_7 = (GISTPageSplitInfo *) FUNC_6(VAR_5, VAR_10);
  VAR_8 = (GISTPageSplitInfo *) FUNC_6(VAR_5, VAR_10 - 1);

  if (FUNC_3(VAR_2, VAR_3->parent, VAR_4,
        &VAR_7->downlink, 1,
        VAR_1,
        VAR_8->buf, VAR_7->buf, 0, 0))
  {




   FUNC_2(VAR_2->r, VAR_3);
  }

 }

 VAR_7 = (GISTPageSplitInfo *) FUNC_7(VAR_5);
 VAR_8 = (GISTPageSplitInfo *) FUNC_4(VAR_5);






 VAR_9[0] = VAR_8->downlink;
 VAR_9[1] = VAR_7->downlink;
 FUNC_3(VAR_2, VAR_3->parent, VAR_4,
      VAR_9, 2,
      VAR_3->downlinkoffnum,
      VAR_8->buf, VAR_7->buf,
      1,
      VAR_6
  );
 FUNC_0(VAR_8->buf == VAR_3->buffer);
 VAR_3->retry_from_parent = 1;
}
