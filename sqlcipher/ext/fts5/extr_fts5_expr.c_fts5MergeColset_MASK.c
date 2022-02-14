
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nCol; int* aiCol; } ;
typedef TYPE_1__ Fts5Colset ;



__attribute__((used)) static void FUNC_0(Fts5Colset *VAR_0, Fts5Colset *VAR_1){
  int VAR_2 = 0;
  int VAR_3 = 0;
  int VAR_4 = 0;

  while( VAR_2<VAR_0->nCol && VAR_3<VAR_1->nCol ){
    int VAR_5 = VAR_0->aiCol[VAR_2] - VAR_1->aiCol[VAR_3];
    if( VAR_5==0 ){
      VAR_0->aiCol[VAR_4++] = VAR_1->aiCol[VAR_3];
      VAR_3++;
      VAR_2++;
    }else if( VAR_5>0 ){
      VAR_3++;
    }else{
      VAR_2++;
    }
  }
  VAR_0->nCol = VAR_4;
}
