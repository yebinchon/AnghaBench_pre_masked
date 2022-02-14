
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ iRow; scalar_t__ nRow; scalar_t__ pFullScan; } ;
typedef TYPE_1__ spellfix1_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_3){
  spellfix1_cursor *VAR_4 = (spellfix1_cursor *)VAR_3;
  int VAR_5 = VAR_1;
  if( VAR_4->iRow < VAR_4->nRow ){
    if( VAR_4->pFullScan ){
      VAR_5 = FUNC_0(VAR_4->pFullScan);
      if( VAR_5!=VAR_2 ) VAR_4->iRow = VAR_4->nRow;
      if( VAR_5==VAR_2 || VAR_5==VAR_0 ) VAR_5 = VAR_1;
    }else{
      VAR_4->iRow++;
    }
  }
  return VAR_5;
}
