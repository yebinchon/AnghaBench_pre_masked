
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int offnum; } ;
typedef TYPE_1__ xl_btree_insert ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
typedef int Size ;
typedef int Page ;
typedef int Item ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int *) ;
 char* FUNC_7 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(bool VAR_3, bool VAR_4, XLogReaderState *VAR_5)
{
 XLogRecPtr VAR_6 = VAR_5->EndRecPtr;
 xl_btree_insert *VAR_7 = (xl_btree_insert *) FUNC_8(VAR_5);
 Buffer VAR_8;
 Page VAR_9;
 if (!VAR_3)
  FUNC_9(VAR_5, 1);
 if (FUNC_6(VAR_5, 0, &VAR_8) == VAR_0)
 {
  Size VAR_10;
  char *VAR_11 = FUNC_7(VAR_5, 0, &VAR_10);

  VAR_9 = FUNC_0(VAR_8);

  if (FUNC_3(VAR_9, (Item) VAR_11, VAR_10, VAR_7->offnum,
      0, 0) == VAR_1)
   FUNC_11(VAR_2, "btree_xlog_insert: failed to add item");

  FUNC_4(VAR_9, VAR_6);
  FUNC_2(VAR_8);
 }
 if (FUNC_1(VAR_8))
  FUNC_5(VAR_8);
 if (VAR_4)
  FUNC_10(VAR_5, 2);
}
