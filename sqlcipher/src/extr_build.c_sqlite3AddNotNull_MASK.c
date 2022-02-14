
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {int nCol; TYPE_3__* pIndex; int tabFlags; TYPE_4__* aCol; } ;
typedef TYPE_1__ Table ;
struct TYPE_9__ {int colFlags; scalar_t__ notNull; } ;
struct TYPE_8__ {int nKeyCol; scalar_t__ onError; int* aiColumn; int uniqNotNull; struct TYPE_8__* pNext; } ;
struct TYPE_7__ {TYPE_1__* pNewTable; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;
typedef TYPE_4__ Column ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2(Parse *VAR_3, int VAR_4){
  Table *VAR_5;
  Column *VAR_6;
  VAR_5 = VAR_3->pNewTable;
  if( VAR_5==0 || FUNC_0(VAR_5->nCol<1) ) return;
  VAR_6 = &VAR_5->aCol[VAR_5->nCol-1];
  VAR_6->notNull = (u8)VAR_4;
  VAR_5->tabFlags |= VAR_2;



  if( VAR_6->colFlags & VAR_0 ){
    Index *VAR_7;
    for(VAR_7=VAR_5->pIndex; VAR_7; VAR_7=VAR_7->pNext){
      FUNC_1( VAR_7->nKeyCol==1 && VAR_7->onError!=VAR_1 );
      if( VAR_7->aiColumn[0]==VAR_5->nCol-1 ){
        VAR_7->uniqNotNull = 1;
      }
    }
  }
}
