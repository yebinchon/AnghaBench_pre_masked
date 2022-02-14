
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nRow; scalar_t__ pFullScan; scalar_t__ nSearch; scalar_t__ iRow; TYPE_1__* a; } ;
typedef TYPE_2__ spellfix1_cursor ;
struct TYPE_4__ {int zWord; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(spellfix1_cursor *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nRow; VAR_1++){
    FUNC_1(VAR_0->a[VAR_1].zWord);
  }
  VAR_0->nRow = 0;
  VAR_0->iRow = 0;
  VAR_0->nSearch = 0;
  if( VAR_0->pFullScan ){
    FUNC_0(VAR_0->pFullScan);
    VAR_0->pFullScan = 0;
  }
}
