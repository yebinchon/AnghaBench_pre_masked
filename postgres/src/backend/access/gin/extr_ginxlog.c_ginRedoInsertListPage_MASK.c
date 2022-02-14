
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rightlink; int ntuples; } ;
typedef TYPE_1__ ginxlogInsertListPage ;
typedef int XLogRecPtr ;
struct TYPE_9__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_10__ {scalar_t__ rightlink; int maxoff; } ;
typedef int Size ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int,scalar_t__,int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 char* FUNC_11 (TYPE_2__*,int ,int*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 ginxlogInsertListPage *VAR_7 = (ginxlogInsertListPage *) FUNC_12(VAR_5);
 Buffer VAR_8;
 Page VAR_9;
 OffsetNumber VAR_10,
    VAR_11 = VAR_1;
 int VAR_12,
    VAR_13;
 char *VAR_14;
 IndexTuple VAR_15;
 Size VAR_16;


 VAR_8 = FUNC_10(VAR_5, 0);
 VAR_9 = FUNC_1(VAR_8);

 FUNC_2(VAR_8, VAR_2);
 FUNC_3(VAR_9)->rightlink = VAR_7->rightlink;
 if (VAR_7->rightlink == VAR_3)
 {

  FUNC_4(VAR_9);
  FUNC_3(VAR_9)->maxoff = 1;
 }
 else
 {
  FUNC_3(VAR_9)->maxoff = 0;
 }

 VAR_14 = FUNC_11(VAR_5, 0, &VAR_16);

 VAR_15 = (IndexTuple) VAR_14;
 for (VAR_12 = 0; VAR_12 < VAR_7->ntuples; VAR_12++)
 {
  VAR_13 = FUNC_5(VAR_15);

  VAR_10 = FUNC_7(VAR_9, (Item) VAR_15, VAR_13, VAR_11, 0, 0);

  if (VAR_10 == VAR_4)
   FUNC_13(VAR_0, "failed to add item to index page");

  VAR_15 = (IndexTuple) (((char *) VAR_15) + VAR_13);
  VAR_11++;
 }
 FUNC_0((char *) VAR_15 == VAR_14 + VAR_16);

 FUNC_8(VAR_9, VAR_6);
 FUNC_6(VAR_8);

 FUNC_9(VAR_8);
}
