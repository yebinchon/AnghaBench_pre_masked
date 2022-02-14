
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int XLogRecPtr ;
struct TYPE_7__ {int pages_deleted; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct TYPE_9__ {int t_tid; } ;
struct TYPE_8__ {int index; } ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef TYPE_2__ IndexVacuumInfo ;
typedef TYPE_3__* IndexTuple ;
typedef TYPE_4__ GistBulkDeleteResult ;
typedef int FullTransactionId ;
typedef int Buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_21(IndexVacuumInfo *VAR_2, GistBulkDeleteResult *VAR_3,
      Buffer VAR_4, OffsetNumber VAR_5,
      Buffer VAR_6)
{
 Page VAR_7 = FUNC_2(VAR_4);
 Page VAR_8 = FUNC_2(VAR_6);
 ItemId VAR_9;
 IndexTuple VAR_10;
 XLogRecPtr VAR_11;
 FullTransactionId VAR_12;




 if (!FUNC_6(VAR_8))
 {

  FUNC_0(0);
  return 0;
 }

 if (FUNC_4(VAR_8))
  return 0;

 if (FUNC_12(VAR_8) != VAR_1)
  return 0;
 if (FUNC_14(VAR_7) || FUNC_5(VAR_7) ||
  FUNC_6(VAR_7))
 {

  FUNC_0(0);
  return 0;
 }

 if (FUNC_12(VAR_7) < VAR_5
  || FUNC_12(VAR_7) <= VAR_0)
  return 0;

 VAR_9 = FUNC_11(VAR_7, VAR_5);
 VAR_10 = (IndexTuple) FUNC_10(VAR_7, VAR_9);
 if (FUNC_1(VAR_6) !=
  FUNC_8(&(VAR_10->t_tid)))
  return 0;
 VAR_12 = FUNC_16();

 FUNC_18();


 FUNC_9(VAR_6);
 FUNC_7(VAR_8, VAR_12);
 VAR_3->stats.pages_deleted++;


 FUNC_9(VAR_4);
 FUNC_13(VAR_7, VAR_5);

 if (FUNC_17(VAR_2->index))
  VAR_11 = FUNC_20(VAR_6, VAR_12, VAR_4, VAR_5);
 else
  VAR_11 = FUNC_19(VAR_2->index);
 FUNC_15(VAR_7, VAR_11);
 FUNC_15(VAR_8, VAR_11);

 FUNC_3();

 return 1;
}
