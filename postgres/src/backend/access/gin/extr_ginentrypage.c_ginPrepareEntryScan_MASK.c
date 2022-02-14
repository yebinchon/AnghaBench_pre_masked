
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int isData; int fullScan; int isBuild; int entryCategory; int entryKey; int entryAttnum; int prepareDownlink; int fillRoot; int execPlaceToPage; int beginPlaceToPage; int findChildPtr; int findItem; int isMoveRight; int getLeftMostChild; int findChildPage; TYPE_1__* ginstate; int rootBlkno; int index; } ;
struct TYPE_6__ {int index; } ;
typedef int OffsetNumber ;
typedef TYPE_1__ GinState ;
typedef int GinNullCategory ;
typedef int GinBtreeData ;
typedef TYPE_2__* GinBtree ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void
FUNC_1(GinBtree VAR_10, OffsetNumber VAR_11,
     Datum VAR_12, GinNullCategory VAR_13,
     GinState *VAR_14)
{
 FUNC_0(VAR_10, 0, sizeof(GinBtreeData));

 VAR_10->index = VAR_14->index;
 VAR_10->rootBlkno = VAR_0;
 VAR_10->ginstate = VAR_14;

 VAR_10->findChildPage = VAR_6;
 VAR_10->getLeftMostChild = VAR_4;
 VAR_10->isMoveRight = VAR_5;
 VAR_10->findItem = VAR_7;
 VAR_10->findChildPtr = VAR_3;
 VAR_10->beginPlaceToPage = VAR_1;
 VAR_10->execPlaceToPage = VAR_2;
 VAR_10->fillRoot = VAR_9;
 VAR_10->prepareDownlink = VAR_8;

 VAR_10->isData = 0;
 VAR_10->fullScan = 0;
 VAR_10->isBuild = 0;

 VAR_10->entryAttnum = VAR_11;
 VAR_10->entryKey = VAR_12;
 VAR_10->entryCategory = VAR_13;
}
