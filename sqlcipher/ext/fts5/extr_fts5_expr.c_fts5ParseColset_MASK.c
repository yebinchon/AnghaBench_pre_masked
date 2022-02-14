
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int nCol; int* aiCol; } ;
struct TYPE_10__ {scalar_t__ rc; TYPE_1__* pConfig; } ;
struct TYPE_9__ {int nCol; } ;
typedef TYPE_2__ Fts5Parse ;
typedef TYPE_3__ Fts5Colset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static Fts5Colset *FUNC_2(
  Fts5Parse *VAR_2,
  Fts5Colset *VAR_3,
  int VAR_4
){
  int VAR_5 = VAR_3 ? VAR_3->nCol : 0;
  Fts5Colset *VAR_6;

  FUNC_0( VAR_2->rc==VAR_1 );
  FUNC_0( VAR_4>=0 && VAR_4<VAR_2->pConfig->nCol );

  VAR_6 = FUNC_1(VAR_3, sizeof(Fts5Colset) + sizeof(int)*VAR_5);
  if( VAR_6==0 ){
    VAR_2->rc = VAR_0;
  }else{
    int *VAR_7 = VAR_6->aiCol;
    int VAR_8, VAR_9;
    for(VAR_8=0; VAR_8<VAR_5; VAR_8++){
      if( VAR_7[VAR_8]==VAR_4 ) return VAR_6;
      if( VAR_7[VAR_8]>VAR_4 ) break;
    }
    for(VAR_9=VAR_5; VAR_9>VAR_8; VAR_9--){
      VAR_7[VAR_9] = VAR_7[VAR_9-1];
    }
    VAR_7[VAR_8] = VAR_4;
    VAR_6->nCol = VAR_5+1;



    for(VAR_8=1; VAR_8<VAR_6->nCol; VAR_8++) FUNC_0( VAR_6->aiCol[VAR_8]>VAR_6->aiCol[VAR_8-1] );

  }

  return VAR_6;
}
