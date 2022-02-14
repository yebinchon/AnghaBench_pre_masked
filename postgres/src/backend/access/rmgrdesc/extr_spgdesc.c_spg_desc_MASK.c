
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_7__ {int newestRedirectXid; } ;
typedef TYPE_1__ spgxlogVacuumRedirect ;
struct TYPE_8__ {int newPage; int postfixBlkSame; int offnumPostfix; int offnumPrefix; } ;
typedef TYPE_2__ spgxlogSplitTuple ;
struct TYPE_9__ {int isRootSplit; int innerIsParent; int nInsert; int nDelete; } ;
typedef TYPE_3__ spgxlogPickSplit ;
struct TYPE_10__ {int nMoves; } ;
typedef TYPE_4__ spgxlogMoveLeafs ;
struct TYPE_11__ {int offnum; } ;
typedef TYPE_5__ spgxlogAddNode ;
struct TYPE_12__ {int storesNulls; int newPage; int offnumParent; int offnumHeadLeaf; int offnumLeaf; } ;
typedef TYPE_6__ spgxlogAddLeaf ;
typedef int XLogReaderState ;
typedef int StringInfo ;
 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(StringInfo VAR_1, XLogReaderState *VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_2);
 uint8 VAR_4 = FUNC_1(VAR_2) & ~VAR_0;

 switch (VAR_4)
 {
  case 135:
   {
    spgxlogAddLeaf *VAR_5 = (spgxlogAddLeaf *) VAR_3;

    FUNC_3(VAR_1, "add leaf to page");
    FUNC_2(VAR_1, "; off %u; headoff %u; parentoff %u",
         VAR_5->offnumLeaf, VAR_5->offnumHeadLeaf,
         VAR_5->offnumParent);
    if (VAR_5->newPage)
     FUNC_3(VAR_1, " (newpage)");
    if (VAR_5->storesNulls)
     FUNC_3(VAR_1, " (nulls)");
   }
   break;
  case 133:
   FUNC_2(VAR_1, "%u leafs",
        ((spgxlogMoveLeafs *) VAR_3)->nMoves);
   break;
  case 134:
   FUNC_2(VAR_1, "off %u",
        ((spgxlogAddNode *) VAR_3)->offnum);
   break;
  case 131:
   FUNC_2(VAR_1, "prefix off: %u, postfix off: %u (same %d, new %d)",
        ((spgxlogSplitTuple *) VAR_3)->offnumPrefix,
        ((spgxlogSplitTuple *) VAR_3)->offnumPostfix,
        ((spgxlogSplitTuple *) VAR_3)->postfixBlkSame,
        ((spgxlogSplitTuple *) VAR_3)->newPage
    );
   break;
  case 132:
   {
    spgxlogPickSplit *VAR_6 = (spgxlogPickSplit *) VAR_3;

    FUNC_2(VAR_1, "ndel %u; nins %u",
         VAR_6->nDelete, VAR_6->nInsert);
    if (VAR_6->innerIsParent)
     FUNC_3(VAR_1, " (innerIsParent)");
    if (VAR_6->isRootSplit)
     FUNC_3(VAR_1, " (isRootSplit)");
   }
   break;
  case 130:

   break;
  case 128:

   break;
  case 129:
   FUNC_2(VAR_1, "newest XID %u",
        ((spgxlogVacuumRedirect *) VAR_3)->newestRedirectXid);
   break;
 }
}
