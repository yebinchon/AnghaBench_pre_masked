
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; int tuple; scalar_t__ isDelete; } ;
typedef TYPE_1__ ginxlogInsertEntry ;
struct TYPE_5__ {int relNode; int dbNode; int spcNode; } ;
typedef TYPE_2__ RelFileNode ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int Item ;
typedef int * IndexTuple ;
typedef int ForkNumber ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ,int ,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_12(Buffer VAR_4, bool VAR_5, BlockNumber VAR_6, void *VAR_7)
{
 Page VAR_8 = FUNC_1(VAR_4);
 ginxlogInsertEntry *VAR_9 = (ginxlogInsertEntry *) VAR_7;
 OffsetNumber VAR_10 = VAR_9->offset;
 IndexTuple VAR_11;

 if (VAR_6 != VAR_2)
 {

  FUNC_0(!FUNC_3(VAR_8));
  FUNC_0(VAR_10 >= VAR_1 && VAR_10 <= FUNC_9(VAR_8));
  VAR_11 = (IndexTuple) FUNC_7(VAR_8, FUNC_8(VAR_8, VAR_10));
  FUNC_4(VAR_11, VAR_6);
 }

 if (VAR_9->isDelete)
 {
  FUNC_0(FUNC_3(VAR_8));
  FUNC_0(VAR_10 >= VAR_1 && VAR_10 <= FUNC_9(VAR_8));
  FUNC_10(VAR_8, VAR_10);
 }

 VAR_11 = &VAR_9->tuple;

 if (FUNC_6(VAR_8, (Item) VAR_11, FUNC_5(VAR_11), VAR_10, 0, 0) == VAR_3)
 {
  RelFileNode VAR_12;
  ForkNumber VAR_13;
  BlockNumber VAR_14;

  FUNC_2(VAR_4, &VAR_12, &VAR_13, &VAR_14);
  FUNC_11(VAR_0, "failed to add item to index page in %u/%u/%u",
    VAR_12.spcNode, VAR_12.dbNode, VAR_12.relNode);
 }
}
