
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ offnumPrefix; int offnumPostfix; scalar_t__ postfixBlkSame; scalar_t__ newPage; } ;
typedef TYPE_1__ spgxlogSplitTuple ;
typedef scalar_t__ XLogRedoAction ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int size; } ;
typedef TYPE_3__ SpGistInnerTupleData ;
typedef int Page ;
typedef int Item ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__,int,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int,int *) ;
 char* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (TYPE_3__*,char*,int) ;

__attribute__((used)) static void
FUNC_14(XLogReaderState *VAR_2)
{
 XLogRecPtr VAR_3 = VAR_2->EndRecPtr;
 char *VAR_4 = FUNC_10(VAR_2);
 spgxlogSplitTuple *VAR_5 = (spgxlogSplitTuple *) VAR_4;
 char *VAR_6;
 SpGistInnerTupleData VAR_7;
 char *VAR_8;
 SpGistInnerTupleData VAR_9;
 Buffer VAR_10;
 Page VAR_11;
 XLogRedoAction VAR_12;

 VAR_4 += sizeof(spgxlogSplitTuple);
 VAR_6 = VAR_4;

 FUNC_13(&VAR_7, VAR_6, sizeof(SpGistInnerTupleData));
 VAR_4 += VAR_7.size;
 VAR_8 = VAR_4;

 FUNC_13(&VAR_9, VAR_8, sizeof(SpGistInnerTupleData));
 if (!VAR_5->postfixBlkSame)
 {
  if (VAR_5->newPage)
  {
   VAR_10 = FUNC_8(VAR_2, 1);

   FUNC_6(VAR_10, 0);
   VAR_12 = VAR_0;
  }
  else
   VAR_12 = FUNC_9(VAR_2, 1, &VAR_10);
  if (VAR_12 == VAR_0)
  {
   VAR_11 = FUNC_0(VAR_10);

   FUNC_11(VAR_11, (Item) VAR_8,
         VAR_9.size, VAR_5->offnumPostfix);

   FUNC_5(VAR_11, VAR_3);
   FUNC_2(VAR_10);
  }
  if (FUNC_1(VAR_10))
   FUNC_7(VAR_10);
 }


 if (FUNC_9(VAR_2, 0, &VAR_10) == VAR_0)
 {
  VAR_11 = FUNC_0(VAR_10);

  FUNC_4(VAR_11, VAR_5->offnumPrefix);
  if (FUNC_3(VAR_11, (Item) VAR_6, VAR_7.size,
      VAR_5->offnumPrefix, 0, 0) != VAR_5->offnumPrefix)
   FUNC_12(VAR_1, "failed to add item of size %u to SPGiST index page",
     VAR_7.size);

  if (VAR_5->postfixBlkSame)
   FUNC_11(VAR_11, (Item) VAR_8,
         VAR_9.size,
         VAR_5->offnumPostfix);

  FUNC_5(VAR_11, VAR_3);
  FUNC_2(VAR_10);
 }
 if (FUNC_1(VAR_10))
  FUNC_7(VAR_10);
}
