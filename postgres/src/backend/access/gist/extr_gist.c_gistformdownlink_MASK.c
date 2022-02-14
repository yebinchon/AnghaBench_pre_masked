
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ downlinkoffnum; TYPE_1__* parent; } ;
struct TYPE_14__ {int t_tid; } ;
struct TYPE_13__ {int buffer; int page; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__* IndexTuple ;
typedef int GISTSTATE ;
typedef TYPE_3__ GISTInsertStack ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_11 (int ,TYPE_2__*,TYPE_2__*,int *) ;

__attribute__((used)) static IndexTuple
FUNC_12(Relation VAR_3, Buffer VAR_4, GISTSTATE *VAR_5,
     GISTInsertStack *VAR_6)
{
 Page VAR_7 = FUNC_1(VAR_4);
 OffsetNumber VAR_8;
 OffsetNumber VAR_9;
 IndexTuple VAR_10 = ((void*)0);

 VAR_8 = FUNC_9(VAR_7);
 for (VAR_9 = VAR_0; VAR_9 <= VAR_8; VAR_9 = FUNC_6(VAR_9))
 {
  IndexTuple VAR_11 = (IndexTuple)
  FUNC_7(VAR_7, FUNC_8(VAR_7, VAR_9));

  if (VAR_10 == ((void*)0))
   VAR_10 = FUNC_2(VAR_11);
  else
  {
   IndexTuple VAR_12;

   VAR_12 = FUNC_11(VAR_3, VAR_10, VAR_11,
            VAR_5);
   if (VAR_12)
    VAR_10 = VAR_12;
  }
 }
 if (!VAR_10)
 {
  ItemId VAR_13;

  FUNC_5(VAR_6->parent->buffer, VAR_1);
  FUNC_10(VAR_3, VAR_6);
  VAR_13 = FUNC_8(VAR_6->parent->page, VAR_6->downlinkoffnum);
  VAR_10 = (IndexTuple) FUNC_7(VAR_6->parent->page, VAR_13);
  VAR_10 = FUNC_2(VAR_10);
  FUNC_5(VAR_6->parent->buffer, VAR_2);
 }

 FUNC_4(&(VAR_10->t_tid), FUNC_0(VAR_4));
 FUNC_3(VAR_10);

 return VAR_10;
}
