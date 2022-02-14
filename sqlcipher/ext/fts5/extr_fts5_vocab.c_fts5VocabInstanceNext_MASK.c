
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_12__ {int nData; int pData; } ;
struct TYPE_11__ {int iInstOff; int bEof; TYPE_4__* pIter; int iInstPos; TYPE_2__* pFts5; } ;
struct TYPE_10__ {TYPE_1__* pConfig; } ;
struct TYPE_9__ {int eDetail; } ;
typedef TYPE_3__ Fts5VocabCursor ;
typedef TYPE_4__ Fts5IndexIter ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int ,int*,int *) ;

__attribute__((used)) static int FUNC_5(Fts5VocabCursor *VAR_2){
  int VAR_3 = VAR_2->pFts5->pConfig->eDetail;
  int VAR_4 = VAR_1;
  Fts5IndexIter *VAR_5 = VAR_2->pIter;
  i64 *VAR_6 = &VAR_2->iInstPos;
  int *VAR_7 = &VAR_2->iInstOff;

  FUNC_0( FUNC_2(VAR_5)==0 );
  FUNC_0( VAR_2->bEof==0 );
  while( VAR_3==VAR_0
      || FUNC_4(VAR_5->pData, VAR_5->nData, VAR_7, VAR_6)
  ){
    VAR_2->iInstPos = 0;
    VAR_2->iInstOff = 0;

    VAR_4 = FUNC_3(VAR_2->pIter);
    if( VAR_4==VAR_1 ){
      VAR_4 = FUNC_1(VAR_2);
      if( VAR_2->bEof || VAR_3==VAR_0 ) break;
    }
    if( VAR_4 ){
      VAR_2->bEof = 1;
      break;
    }
  }

  return VAR_4;
}
