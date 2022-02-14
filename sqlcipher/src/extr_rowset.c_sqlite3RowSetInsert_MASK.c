
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RowSetEntry {scalar_t__ v; struct RowSetEntry* pRight; } ;
typedef scalar_t__ i64 ;
struct TYPE_4__ {int rsFlags; struct RowSetEntry* pLast; struct RowSetEntry* pEntry; } ;
typedef TYPE_1__ RowSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct RowSetEntry* FUNC_1 (TYPE_1__*) ;

void FUNC_2(RowSet *VAR_2, i64 VAR_3){
  struct RowSetEntry *VAR_4;
  struct RowSetEntry *VAR_5;


  FUNC_0( VAR_2!=0 && (VAR_2->rsFlags & VAR_0)==0 );

  VAR_4 = FUNC_1(VAR_2);
  if( VAR_4==0 ) return;
  VAR_4->v = VAR_3;
  VAR_4->pRight = 0;
  VAR_5 = VAR_2->pLast;
  if( VAR_5 ){
    if( VAR_3<=VAR_5->v ){


      VAR_2->rsFlags &= ~VAR_1;
    }
    VAR_5->pRight = VAR_4;
  }else{
    VAR_2->pEntry = VAR_4;
  }
  VAR_2->pLast = VAR_4;
}
