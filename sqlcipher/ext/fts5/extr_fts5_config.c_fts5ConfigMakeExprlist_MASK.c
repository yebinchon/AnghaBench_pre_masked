
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ p; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {int zContentRowid; scalar_t__ eContent; int nCol; int* azCol; char* zContentExprlist; } ;
typedef TYPE_1__ Fts5Config ;
typedef TYPE_2__ Fts5Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_2(Fts5Config *VAR_3){
  int VAR_4;
  int VAR_5 = VAR_2;
  Fts5Buffer VAR_6 = {0, 0, 0};

  FUNC_1(&VAR_5, &VAR_6, "T.%Q", VAR_3->zContentRowid);
  if( VAR_3->eContent!=VAR_1 ){
    for(VAR_4=0; VAR_4<VAR_3->nCol; VAR_4++){
      if( VAR_3->eContent==VAR_0 ){
        FUNC_1(&VAR_5, &VAR_6, ", T.%Q", VAR_3->azCol[VAR_4]);
      }else{
        FUNC_1(&VAR_5, &VAR_6, ", T.c%d", VAR_4);
      }
    }
  }

  FUNC_0( VAR_3->zContentExprlist==0 );
  VAR_3->zContentExprlist = (char*)VAR_6.p;
  return VAR_5;
}
