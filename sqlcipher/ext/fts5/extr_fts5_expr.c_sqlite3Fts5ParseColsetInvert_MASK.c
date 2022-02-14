
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nCol; int* aiCol; } ;
struct TYPE_9__ {int rc; TYPE_1__* pConfig; } ;
struct TYPE_8__ {int nCol; } ;
typedef TYPE_2__ Fts5Parse ;
typedef TYPE_3__ Fts5Colset ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_3__*) ;

Fts5Colset *FUNC_2(Fts5Parse *VAR_0, Fts5Colset *VAR_1){
  Fts5Colset *VAR_2;
  int VAR_3 = VAR_0->pConfig->nCol;

  VAR_2 = (Fts5Colset*)FUNC_0(&VAR_0->rc,
      sizeof(Fts5Colset) + sizeof(int)*VAR_3
  );
  if( VAR_2 ){
    int VAR_4;
    int VAR_5 = 0;
    for(VAR_4=0; VAR_4<VAR_3; VAR_4++){
      if( VAR_5>=VAR_1->nCol || VAR_1->aiCol[VAR_5]!=VAR_4 ){
        VAR_2->aiCol[VAR_2->nCol++] = VAR_4;
      }else{
        VAR_5++;
      }
    }
  }

  FUNC_1(VAR_1);
  return VAR_2;
}
