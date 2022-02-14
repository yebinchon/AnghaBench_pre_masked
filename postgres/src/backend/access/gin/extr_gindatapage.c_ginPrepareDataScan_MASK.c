
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int isData; int fullScan; int isBuild; int prepareDownlink; int fillRoot; int execPlaceToPage; int beginPlaceToPage; int findChildPtr; int * findItem; int isMoveRight; int getLeftMostChild; int findChildPage; int rootBlkno; int index; } ;
typedef int Relation ;
typedef int GinBtreeData ;
typedef TYPE_1__* GinBtree ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(GinBtree VAR_8, Relation VAR_9, BlockNumber VAR_10)
{
 FUNC_0(VAR_8, 0, sizeof(GinBtreeData));

 VAR_8->index = VAR_9;
 VAR_8->rootBlkno = VAR_10;

 VAR_8->findChildPage = VAR_5;
 VAR_8->getLeftMostChild = VAR_3;
 VAR_8->isMoveRight = VAR_4;
 VAR_8->findItem = ((void*)0);
 VAR_8->findChildPtr = VAR_2;
 VAR_8->beginPlaceToPage = VAR_0;
 VAR_8->execPlaceToPage = VAR_1;
 VAR_8->fillRoot = VAR_7;
 VAR_8->prepareDownlink = VAR_6;

 VAR_8->isData = 1;
 VAR_8->fullScan = 0;
 VAR_8->isBuild = 0;
}
