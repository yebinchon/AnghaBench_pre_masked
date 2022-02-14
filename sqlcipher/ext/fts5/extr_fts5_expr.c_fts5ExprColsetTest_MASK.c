
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nCol; int* aiCol; } ;
typedef TYPE_1__ Fts5Colset ;



__attribute__((used)) static int FUNC_0(Fts5Colset *VAR_0, int VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0->nCol; VAR_2++){
    if( VAR_0->aiCol[VAR_2]==VAR_1 ) return 1;
  }
  return 0;
}
