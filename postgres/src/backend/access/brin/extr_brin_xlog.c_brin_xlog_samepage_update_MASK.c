
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int offnum; } ;
typedef TYPE_1__ xl_brin_samepage_update ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_8__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef scalar_t__ Page ;
typedef int OffsetNumber ;
typedef int Item ;
typedef int Buffer ;
typedef int BrinTuple ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 xl_brin_samepage_update *VAR_4;
 Buffer VAR_5;
 XLogRedoAction VAR_6;

 VAR_4 = (xl_brin_samepage_update *) FUNC_8(VAR_2);
 VAR_6 = FUNC_6(VAR_2, 0, &VAR_5);
 if (VAR_6 == VAR_0)
 {
  Size VAR_7;
  BrinTuple *VAR_8;
  Page VAR_9;
  OffsetNumber VAR_10;

  VAR_8 = (BrinTuple *) FUNC_7(VAR_2, 0, &VAR_7);

  VAR_9 = (Page) FUNC_0(VAR_5);

  VAR_10 = VAR_4->offnum;

  if (!FUNC_3(VAR_9, VAR_10, (Item) VAR_8, VAR_7))
   FUNC_9(VAR_1, "brin_xlog_samepage_update: failed to replace tuple");

  FUNC_4(VAR_9, VAR_3);
  FUNC_2(VAR_5);
 }
 if (FUNC_1(VAR_5))
  FUNC_5(VAR_5);


}
