
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int offnum; } ;
typedef TYPE_1__ xl_hash_insert ;
typedef int XLogRecPtr ;
struct TYPE_10__ {int EndRecPtr; } ;
typedef TYPE_2__ XLogReaderState ;
struct TYPE_11__ {int hashm_ntuples; } ;
typedef int Size ;
typedef int Page ;
typedef int Item ;
typedef TYPE_3__* HashMetaPage ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int *) ;
 char* FUNC_8 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void
FUNC_11(XLogReaderState *VAR_3)
{
 HashMetaPage VAR_4;
 XLogRecPtr VAR_5 = VAR_3->EndRecPtr;
 xl_hash_insert *VAR_6 = (xl_hash_insert *) FUNC_9(VAR_3);
 Buffer VAR_7;
 Page VAR_8;

 if (FUNC_7(VAR_3, 0, &VAR_7) == VAR_0)
 {
  Size VAR_9;
  char *VAR_10 = FUNC_8(VAR_3, 0, &VAR_9);

  VAR_8 = FUNC_0(VAR_7);

  if (FUNC_4(VAR_8, (Item) VAR_10, VAR_9, VAR_6->offnum,
      0, 0) == VAR_1)
   FUNC_10(VAR_2, "hash_xlog_insert: failed to add item");

  FUNC_5(VAR_8, VAR_5);
  FUNC_3(VAR_7);
 }
 if (FUNC_1(VAR_7))
  FUNC_6(VAR_7);

 if (FUNC_7(VAR_3, 1, &VAR_7) == VAR_0)
 {






  VAR_8 = FUNC_0(VAR_7);
  VAR_4 = FUNC_2(VAR_8);
  VAR_4->hashm_ntuples += 1;

  FUNC_5(VAR_8, VAR_5);
  FUNC_3(VAR_7);
 }
 if (FUNC_1(VAR_7))
  FUNC_6(VAR_7);
}
